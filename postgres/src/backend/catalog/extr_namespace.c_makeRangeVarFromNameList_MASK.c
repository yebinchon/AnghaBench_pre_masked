
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* relname; void* schemaname; void* catalogname; } ;
typedef TYPE_1__ RangeVar ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,int *,int) ;
 void* FUNC_9 (int ) ;

RangeVar *
FUNC_10(List *VAR_2)
{
 RangeVar *VAR_3 = FUNC_8(((void*)0), ((void*)0), -1);

 switch (FUNC_5(VAR_2))
 {
  case 1:
   VAR_3->relname = FUNC_9(FUNC_4(VAR_2));
   break;
  case 2:
   VAR_3->schemaname = FUNC_9(FUNC_4(VAR_2));
   VAR_3->relname = FUNC_9(FUNC_6(VAR_2));
   break;
  case 3:
   VAR_3->catalogname = FUNC_9(FUNC_4(VAR_2));
   VAR_3->schemaname = FUNC_9(FUNC_6(VAR_2));
   VAR_3->relname = FUNC_9(FUNC_7(VAR_2));
   break;
  default:
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("improper relation name (too many dotted names): %s",
       FUNC_0(VAR_2))));
   break;
 }

 return VAR_3;
}
