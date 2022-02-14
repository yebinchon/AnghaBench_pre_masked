
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static Datum
FUNC_7(FunctionCallInfo VAR_4, Oid VAR_5)
{
 char VAR_6[VAR_2];

 if (!FUNC_1(VAR_3, FUNC_0(VAR_5)))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("tablespace with OID %u does not exist",
      VAR_5)));

 FUNC_2(VAR_6, VAR_5);
 return FUNC_6(VAR_4, VAR_6, 1);
}
