
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ oprcom; scalar_t__ oprnegate; } ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_operator ;


 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Oid VAR_4, Oid VAR_5, Oid VAR_6, bool VAR_7)
{
 Relation VAR_8;
 HeapTuple VAR_9;







 if (!VAR_7)
  FUNC_1();


 VAR_8 = FUNC_8(VAR_2, VAR_3);


 if (FUNC_5(VAR_5))
  VAR_9 = FUNC_6(VAR_1, FUNC_4(VAR_5));
 else
  VAR_9 = ((void*)0);


 if (FUNC_3(VAR_9))
 {
  Form_pg_operator VAR_10 = (Form_pg_operator) FUNC_2(VAR_9);
  bool VAR_11 = 0;






  if (VAR_7 && VAR_10->oprcom == VAR_4)
  {
   VAR_10->oprcom = VAR_0;
   VAR_11 = 1;
  }
  else if (!VAR_7 && !FUNC_5(VAR_10->oprcom))
  {
   VAR_10->oprcom = VAR_4;
   VAR_11 = 1;
  }


  if (VAR_11)
  {
   FUNC_0(VAR_8, &VAR_9->t_self, VAR_9);
   FUNC_1();
  }
 }




 if (FUNC_5(VAR_6))
  VAR_9 = FUNC_6(VAR_1, FUNC_4(VAR_6));
 else
  VAR_9 = ((void*)0);

 if (FUNC_3(VAR_9))
 {
  Form_pg_operator VAR_12 = (Form_pg_operator) FUNC_2(VAR_9);
  bool VAR_13 = 0;






  if (VAR_7 && VAR_12->oprnegate == VAR_4)
  {
   VAR_12->oprnegate = VAR_0;
   VAR_13 = 1;
  }
  else if (!VAR_7 && !FUNC_5(VAR_12->oprnegate))
  {
   VAR_12->oprnegate = VAR_4;
   VAR_13 = 1;
  }


  if (VAR_13)
  {
   FUNC_0(VAR_8, &VAR_9->t_self, VAR_9);







   if (VAR_7)
    FUNC_1();
  }
 }


 FUNC_7(VAR_8, VAR_3);
}
