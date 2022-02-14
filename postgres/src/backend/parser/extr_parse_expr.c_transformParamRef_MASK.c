
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int location; int number; } ;
struct TYPE_8__ {int * (* p_paramref_hook ) (TYPE_1__*,TYPE_2__*) ;} ;
typedef TYPE_1__ ParseState ;
typedef TYPE_2__ ParamRef ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static Node *
FUNC_5(ParseState *VAR_2, ParamRef *VAR_3)
{
 Node *VAR_4;





 if (VAR_2->p_paramref_hook != ((void*)0))
  VAR_4 = VAR_2->p_paramref_hook(VAR_2, VAR_3);
 else
  VAR_4 = ((void*)0);

 if (VAR_4 == ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("there is no parameter $%d", VAR_3->number),
     FUNC_3(VAR_2, VAR_3->location)));

 return VAR_4;
}
