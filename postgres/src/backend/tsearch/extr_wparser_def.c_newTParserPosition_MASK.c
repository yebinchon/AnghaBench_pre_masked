
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * pushedAtAction; struct TYPE_7__* prev; } ;
typedef TYPE_1__ TParserPosition ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static TParserPosition *
FUNC_3(TParserPosition *VAR_0)
{
 TParserPosition *VAR_1 = (TParserPosition *) FUNC_2(sizeof(TParserPosition));

 if (VAR_0)
  FUNC_0(VAR_1, VAR_0, sizeof(TParserPosition));
 else
  FUNC_1(VAR_1, 0, sizeof(TParserPosition));

 VAR_1->prev = VAR_0;

 VAR_1->pushedAtAction = ((void*)0);

 return VAR_1;
}
