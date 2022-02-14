
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwMajorVersion; int dwMinorVersion; int wSuiteMask; } ;
typedef int LPSERVER_INFO_102 ;
typedef TYPE_1__* LPOSVERSIONINFOEX ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

INT FUNC_0(BOOL VAR_4, LPOSVERSIONINFOEX VAR_5, LPSERVER_INFO_102 VAR_6)
{
 if(VAR_4)
 {
  if(VAR_5->dwMajorVersion == 5)
  {
   if(VAR_5->dwMinorVersion == 1)
   {
    if(VAR_5->wSuiteMask & VAR_3)
     return 1;
    else
     return 2;
   }
   else if(VAR_5->dwMinorVersion == 2)
   {
    if(VAR_5->wSuiteMask & VAR_0)
     return 6;
    else if(VAR_5->wSuiteMask & VAR_1)
     return 5;
    else if(VAR_5->wSuiteMask & VAR_2)
     return 4;
    else
     return 3;
   }
  }
 }
 else
 {

 }
 return 255;
}
