
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 (char const*,scalar_t__) ;
 int FUNC_7 (char*) ;

bool
FUNC_8(Oid VAR_0, const char *VAR_1, Oid VAR_2)
{
 Oid VAR_3;
 char *VAR_4;


 if (!FUNC_5(VAR_0))
  return 1;


 VAR_3 = FUNC_4(VAR_0);
 if (!FUNC_1(VAR_3) ||
  FUNC_3(VAR_3) != VAR_0)
  return 0;







 VAR_4 = FUNC_6(VAR_1, VAR_2);


 FUNC_2(VAR_0, VAR_4, VAR_2);





 FUNC_0();

 FUNC_7(VAR_4);

 return 1;
}
