
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rolsuper; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_authid ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool
FUNC_7(Oid VAR_7)
{
 bool VAR_8;
 HeapTuple VAR_9;


 if (FUNC_4(VAR_4) && VAR_4 == VAR_7)
  return VAR_5;


 if (!VAR_2 && VAR_7 == VAR_1)
  return 1;


 VAR_9 = FUNC_6(VAR_0, FUNC_3(VAR_7));
 if (FUNC_2(VAR_9))
 {
  VAR_8 = ((Form_pg_authid) FUNC_1(VAR_9))->rolsuper;
  FUNC_5(VAR_9);
 }
 else
 {

  VAR_8 = 0;
 }


 if (!VAR_6)
 {
  FUNC_0(VAR_0,
           VAR_3,
           (Datum) 0);
  VAR_6 = 1;
 }


 VAR_4 = VAR_7;
 VAR_5 = VAR_8;

 return VAR_8;
}
