
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Snapshot ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

Snapshot
FUNC_10(Snapshot VAR_5)
{
 FUNC_0(FUNC_3());







 if (FUNC_4())
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_9("cannot use serializable mode in a hot standby"),
     FUNC_7("\"default_transaction_isolation\" is set to \"serializable\"."),
     FUNC_8("You can use \"SET default_transaction_isolation = 'repeatable read'\" to change the default.")));






 if (VAR_4 && VAR_3)
  return FUNC_1(VAR_5);

 return FUNC_2(VAR_5,
             ((void*)0), VAR_2);
}
