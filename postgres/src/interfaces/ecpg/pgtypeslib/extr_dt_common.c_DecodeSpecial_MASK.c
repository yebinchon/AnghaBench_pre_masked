
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int value; int token; } ;
typedef TYPE_1__ datetkn ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char*,int ,int ) ;
 TYPE_1__ const** VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(int VAR_5, char *VAR_6, int *VAR_7)
{
 int VAR_8;
 const datetkn *VAR_9;


 if (VAR_2[VAR_5] != ((void*)0) &&
  FUNC_1(VAR_6, VAR_2[VAR_5]->token, VAR_0) == 0)
  VAR_9 = VAR_2[VAR_5];
 else
 {
  VAR_9 = ((void*)0);
  if (!VAR_9)
   VAR_9 = FUNC_0(VAR_6, VAR_3, VAR_4);
 }
 VAR_2[VAR_5] = VAR_9;
 if (VAR_9 == ((void*)0))
 {
  VAR_8 = VAR_1;
  *VAR_7 = 0;
 }
 else
 {
  VAR_8 = VAR_9->type;
  *VAR_7 = VAR_9->value;
 }

 return VAR_8;
}
