
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

BOOL
FUNC_0(DWORD VAR_8, DWORD VAR_9)
{
   if (VAR_8 & VAR_6)
      return VAR_1;
   if (VAR_9 & VAR_4)
      return VAR_1;
   if (VAR_9 & VAR_5)
      return VAR_0;
   if (VAR_8 & VAR_7)
      return VAR_1;
   VAR_8 &= VAR_2;
   if (VAR_8 == VAR_3 || VAR_8 == VAR_2)
      return VAR_1;
   return VAR_0;
}
