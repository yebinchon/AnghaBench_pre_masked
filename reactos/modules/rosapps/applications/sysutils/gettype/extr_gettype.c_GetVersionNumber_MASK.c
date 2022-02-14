
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
FUNC_0(BOOL VAR_0, LPOSVERSIONINFOEX VAR_1, LPSERVER_INFO_102 VAR_2)
{
 INT VAR_3 = 255;
 if(VAR_2 != ((void*)0) && !VAR_0)
 {
  VAR_3 = VAR_2->sv102_version_major * 1000;
  VAR_3 += (VAR_2->sv102_version_minor * 100);
 }
 else if(VAR_0)
 {
  VAR_3 = VAR_1->dwMajorVersion * 1000;
  VAR_3 += (VAR_1->dwMinorVersion * 100);
 }

 return VAR_3;
}
