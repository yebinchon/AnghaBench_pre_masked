
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static LPCWSTR FUNC_1(LPCWSTR VAR_0)
{
 static const WCHAR VAR_1[] = {'C','O','M',0};



 if(!FUNC_0(VAR_0, VAR_1, 3))
 {
  VAR_0 += 3;



  if(*VAR_0 < '1' || *VAR_0 > '9')
   return ((void*)0);


  while(*VAR_0 >= '0' && *VAR_0 <= '9') VAR_0++;


  if(*VAR_0 != ':' && *VAR_0 != ' ')
   return ((void*)0);


  while(*VAR_0 == ' ') VAR_0++;
  if(*VAR_0 == ':')
  {
   VAR_0++;
   while(*VAR_0 == ' ') VAR_0++;
  }
 }

 else if(*VAR_0 == ' ')
  return ((void*)0);

 return VAR_0;
}
