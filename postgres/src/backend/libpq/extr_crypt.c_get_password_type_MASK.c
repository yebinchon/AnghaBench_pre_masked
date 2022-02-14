
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PasswordType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,int*,char**,int *,int *) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,int ) ;

PasswordType
FUNC_4(const char *VAR_6)
{
 char *VAR_7;
 int VAR_8;
 uint8 VAR_9[VAR_5];
 uint8 VAR_10[VAR_5];

 if (FUNC_2(VAR_6, "md5", 3) == 0 &&
  FUNC_1(VAR_6) == VAR_1 &&
  FUNC_3(VAR_6 + 3, VAR_0) == VAR_1 - 3)
  return VAR_2;
 if (FUNC_0(VAR_6, &VAR_8, &VAR_7,
        VAR_9, VAR_10))
  return VAR_4;
 return VAR_3;
}
