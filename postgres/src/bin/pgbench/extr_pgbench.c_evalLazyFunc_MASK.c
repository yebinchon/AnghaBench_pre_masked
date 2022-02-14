
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int expr; struct TYPE_11__* next; } ;
struct TYPE_10__ {int type; } ;
typedef TYPE_1__ PgBenchValue ;
typedef int PgBenchFunction ;
typedef TYPE_2__ PgBenchExprLink ;
typedef int CState ;


 int FUNC_0 (int) ;



 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_7(CState *VAR_1,
    PgBenchFunction VAR_2, PgBenchExprLink *VAR_3, PgBenchValue *VAR_4)
{
 PgBenchValue VAR_5,
    VAR_6;
 bool VAR_7,
    VAR_8;

 FUNC_0(FUNC_3(VAR_2) && VAR_3 != ((void*)0) && VAR_3->next != ((void*)0));


 if (!FUNC_2(VAR_1, VAR_3->expr, &VAR_5))
  return 0;


 VAR_3 = VAR_3->next;

 switch (VAR_2)
 {
  case 130:
   if (VAR_5 == VAR_0)
   {
    FUNC_5(VAR_4);
    return 1;
   }

   if (!FUNC_1(&VAR_5, &VAR_7))
    return 0;

   if (!VAR_7)
   {
    FUNC_4(VAR_4, 0);
    return 1;
   }

   if (!FUNC_2(VAR_1, VAR_3->expr, &VAR_6))
    return 0;

   if (VAR_6 == VAR_0)
   {
    FUNC_5(VAR_4);
    return 1;
   }
   else if (!FUNC_1(&VAR_6, &VAR_8))
    return 0;
   else
   {
    FUNC_4(VAR_4, VAR_8);
    return 1;
   }

   return 1;

  case 128:

   if (VAR_5 == VAR_0)
   {
    FUNC_5(VAR_4);
    return 1;
   }

   if (!FUNC_1(&VAR_5, &VAR_7))
    return 0;

   if (VAR_7)
   {
    FUNC_4(VAR_4, 1);
    return 1;
   }

   if (!FUNC_2(VAR_1, VAR_3->expr, &VAR_6))
    return 0;

   if (VAR_6 == VAR_0)
   {
    FUNC_5(VAR_4);
    return 1;
   }
   else if (!FUNC_1(&VAR_6, &VAR_8))
    return 0;
   else
   {
    FUNC_4(VAR_4, VAR_8);
    return 1;
   }

  case 129:

   if (FUNC_6(&VAR_5))
    return FUNC_2(VAR_1, VAR_3->expr, VAR_4);


   VAR_3 = VAR_3->next;


   if (VAR_3->next == ((void*)0))
    return FUNC_2(VAR_1, VAR_3->expr, VAR_4);


   return FUNC_7(VAR_1, 129, VAR_3, VAR_4);

  default:

   FUNC_0(0);
   break;
 }
 return 0;
}
