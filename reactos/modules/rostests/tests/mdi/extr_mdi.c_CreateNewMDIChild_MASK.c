
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* szTitle; int style; void* cy; void* y; void* cx; void* x; int hOwner; int szClass; } ;
typedef TYPE_1__ MDICREATESTRUCT ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

HWND FUNC_3(HWND VAR_6)
{
 MDICREATESTRUCT VAR_7;
 HWND VAR_8;

 VAR_7.szTitle = "[Untitled]";
 VAR_7.szClass = VAR_5;
 VAR_7.hOwner = FUNC_0(((void*)0));
 VAR_7.x = VAR_7.cx = VAR_0;
 VAR_7.y = VAR_7.cy = VAR_0;
 VAR_7.style = VAR_3;

 VAR_8 = (HWND)FUNC_2(VAR_6, VAR_4, 0, (LPARAM)&VAR_7);
 if(!VAR_8)
 {
  FUNC_1(VAR_6, "MDI Child creation failed.", "Oh Oh...",
   VAR_1 | VAR_2);
 }
 return VAR_8;
}
