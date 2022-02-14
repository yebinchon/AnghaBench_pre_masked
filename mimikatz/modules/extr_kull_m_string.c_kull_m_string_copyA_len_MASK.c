
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPSTR ;
typedef scalar_t__ LPCSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;
 int VAR_2 ;

BOOL FUNC_2(LPSTR *VAR_3, LPCSTR VAR_4, size_t VAR_5)
{
 BOOL VAR_6 = VAR_0;
 if(VAR_4 && VAR_3 && VAR_5)
 {
  VAR_5 = (VAR_5 + 1) * sizeof(char);
  if((*VAR_3 = (LPSTR) FUNC_0(VAR_1, VAR_5)))
  {
   FUNC_1(*VAR_3, VAR_4, VAR_5);
   VAR_6 = VAR_2;
  }
 }
 return VAR_6;
}
