
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwMajorVersion; int dwMinorVersion; } ;
struct TYPE_5__ {int sv102_version_major; int sv102_version_minor; } ;
typedef TYPE_1__* LPSERVER_INFO_102 ;
typedef TYPE_2__* LPOSVERSIONINFOEX ;
typedef int INT ;
typedef scalar_t__ BOOL ;



INT
FUNC_0(BOOL VAR_0, BOOL VAR_1, LPOSVERSIONINFOEX VAR_2, LPSERVER_INFO_102 VAR_3)
{
 INT VAR_4 = 255;
 if(VAR_3 != ((void*)0) && !VAR_1)
 {
  if(VAR_0)
   VAR_4 = VAR_3->sv102_version_major * 1000;
  else
   VAR_4 = VAR_3->sv102_version_minor * 100;
 }
 else
 {
  if(VAR_0)
   VAR_4 = VAR_2->dwMajorVersion * 1000;
  else
   VAR_4 = VAR_2->dwMinorVersion * 100;
 }
 return VAR_4;
}
