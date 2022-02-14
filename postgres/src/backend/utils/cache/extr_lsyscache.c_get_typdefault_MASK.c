
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typbyval; int typlen; int typcollation; int typinput; } ;
typedef int Oid ;
typedef int Node ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int VAR_3 ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int,int ,int ,int ,int,int ) ;
 int FUNC_11 (char*) ;
 int * FUNC_12 (char*) ;

Node *
FUNC_13(Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_type VAR_6;
 Datum VAR_7;
 bool VAR_8;
 Node *VAR_9;

 VAR_5 = FUNC_5(VAR_3, FUNC_2(VAR_4));
 if (!FUNC_1(VAR_5))
  FUNC_8(VAR_2, "cache lookup failed for type %u", VAR_4);
 VAR_6 = (Form_pg_type) FUNC_0(VAR_5);






 VAR_7 = FUNC_6(VAR_3,
       VAR_5,
       VAR_1,
       &VAR_8);

 if (!VAR_8)
 {

  VAR_9 = FUNC_12(FUNC_7(VAR_7));
 }
 else
 {

  VAR_7 = FUNC_6(VAR_3,
        VAR_5,
        VAR_0,
        &VAR_8);

  if (!VAR_8)
  {
   char *VAR_10;


   VAR_10 = FUNC_7(VAR_7);

   VAR_7 = FUNC_3(VAR_6->typinput, VAR_10,
           FUNC_9(VAR_5), -1);

   VAR_9 = (Node *) FUNC_10(VAR_4,
           -1,
           VAR_6->typcollation,
           VAR_6->typlen,
           VAR_7,
           0,
           VAR_6->typbyval);
   FUNC_11(VAR_10);
  }
  else
  {

   VAR_9 = ((void*)0);
  }
 }

 FUNC_4(VAR_5);

 return VAR_9;
}
