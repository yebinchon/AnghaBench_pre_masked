
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int ObjectAddresses ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int ) ;

Oid
FUNC_12(Oid VAR_3, Oid VAR_4, ObjectAddresses *VAR_5)
{
 Oid VAR_6;


 if (!FUNC_11(VAR_3, FUNC_1()))
  FUNC_3(VAR_0, VAR_3);


 VAR_6 = FUNC_10(VAR_3);
 if (FUNC_2(VAR_6) && FUNC_9(VAR_6) == VAR_3)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_7("cannot alter array type %s",
      FUNC_8(VAR_3)),
     FUNC_6("You can alter type %s, which will alter the array type as well.",
       FUNC_8(VAR_6))));


 return FUNC_0(VAR_3, VAR_4, 0, 1, VAR_5);
}
