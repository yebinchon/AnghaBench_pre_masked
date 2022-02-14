
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(LPCSTR VAR_2)
{
  if (VAR_2 && *VAR_2 &&
      VAR_2[1] == ':' && VAR_2[2] == '\\' && VAR_2[3] == '\0')
      return VAR_1;
  return VAR_0;
}
