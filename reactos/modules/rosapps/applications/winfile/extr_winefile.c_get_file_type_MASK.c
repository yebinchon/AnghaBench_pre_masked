
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum FILE_TYPE { ____Placeholder_FILE_TYPE } FILE_TYPE ;
typedef scalar_t__ LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,char) ;

__attribute__((used)) static enum FILE_TYPE FUNC_3(LPCWSTR VAR_4)
{
 LPCWSTR VAR_5 = FUNC_2(VAR_4, '.');
 if (!VAR_5)
  VAR_5 = VAR_3;

 if (FUNC_0(VAR_5))
  return VAR_1;
 else if (FUNC_1(VAR_5))
  return VAR_0;
 else
  return VAR_2;
}
