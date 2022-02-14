
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ relkind; int relnatts; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,int,int *) ;

void
FUNC_9(Oid VAR_8, Oid VAR_9)
{





 if (VAR_9 == VAR_7)
 {
  Form_pg_class VAR_10;
  HeapTuple VAR_11;

  VAR_11 = FUNC_5(VAR_6, FUNC_3(VAR_8));
  if (!FUNC_1(VAR_11))
   FUNC_7(VAR_1, "cache lookup failed for relation %u", VAR_8);
  VAR_10 = (Form_pg_class) FUNC_0(VAR_11);


  if (VAR_10->relkind == VAR_3 ||
   VAR_10->relkind == VAR_4)
   return;


  if (VAR_10->relkind == VAR_2)
   return;






  if (VAR_10->relkind != VAR_5)
  {
   AttrNumber VAR_12;
   AttrNumber VAR_13 = VAR_10->relnatts;

   for (VAR_12 = 1; VAR_12 <= VAR_13; VAR_12++)
   {
    HeapTuple VAR_14;

    VAR_14 = FUNC_6(VAR_0,
             FUNC_3(VAR_8),
             FUNC_2(VAR_12));

    if (!FUNC_1(VAR_14))
     continue;



    FUNC_8(VAR_8, VAR_9, VAR_12, ((void*)0));

    FUNC_4(VAR_14);
   }
  }

  FUNC_4(VAR_11);
 }


 FUNC_8(VAR_8, VAR_9, 0, ((void*)0));
}
