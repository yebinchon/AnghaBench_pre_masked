
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ wProductType; } ;
struct TYPE_5__ {int sv102_type; } ;
typedef TYPE_1__* LPSERVER_INFO_102 ;
typedef TYPE_2__* LPOSVERSIONINFOEX ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

INT
FUNC_0(BOOL VAR_6, LPOSVERSIONINFOEX VAR_7, LPSERVER_INFO_102 VAR_8)
{

 if(VAR_8 != ((void*)0) && !VAR_6)
 {
  if ((VAR_8->sv102_type & VAR_1) ||
   (VAR_8->sv102_type & VAR_0))
   return 1;
  else if(VAR_8->sv102_type & VAR_2)
   return 2;
  else
   return 3;
 }
 else
 {
  if(VAR_7->wProductType == VAR_3)
   return 1;
  else if(VAR_7->wProductType == VAR_4)
   return 2;
  else if(VAR_7->wProductType == VAR_5)
   return 3;
 }
 return 255;

}
