
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwBuildNumber; } ;
typedef int LPSERVER_INFO_102 ;
typedef TYPE_1__* LPOSVERSIONINFOEX ;
typedef int INT ;
typedef int BOOL ;



INT
FUNC_0(BOOL VAR_0, LPOSVERSIONINFOEX VAR_1, LPSERVER_INFO_102 VAR_2)
{
 INT VAR_3 = 255;
 if(!VAR_0)
 {

 }
 else
 {
  VAR_3 = VAR_1->dwBuildNumber;
 }
 return VAR_3;
}
