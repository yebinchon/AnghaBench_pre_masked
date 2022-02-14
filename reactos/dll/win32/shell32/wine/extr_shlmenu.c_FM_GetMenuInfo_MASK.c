
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; scalar_t__ dwMenuData; int fMask; } ;
typedef TYPE_1__ MENUINFO ;
typedef int * LPFMINFO ;
typedef int HMENU ;


 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static LPFMINFO FUNC_2(HMENU VAR_1)
{
 MENUINFO VAR_2;
 LPFMINFO VAR_3;

 VAR_2.cbSize = sizeof(MENUINFO);
 VAR_2.fMask = VAR_0;

 if (! FUNC_1(VAR_1, &VAR_2))
   return ((void*)0);

 VAR_3 = (LPFMINFO)VAR_2.dwMenuData;

 if ((VAR_3 == 0) || (VAR_2.cbSize != sizeof(MENUINFO)))
 {
   FUNC_0("menudata corrupt: %p %u\n", VAR_3, VAR_2.cbSize);
   return 0;
 }

 return VAR_3;

}
