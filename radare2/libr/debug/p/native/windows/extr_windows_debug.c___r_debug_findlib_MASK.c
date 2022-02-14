
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_2__ {void* BaseOfDll; int * hFile; } ;
typedef TYPE_1__* PLIB_ITEM ;
typedef int LIB_ITEM ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void *FUNC_0(void *VAR_2) {
 PLIB_ITEM VAR_3 = ((void*)0);
 if (VAR_1) {
  VAR_3 = (PLIB_ITEM)VAR_1;
  while (VAR_3->hFile != ((void*)0)) {
   if (VAR_3->hFile != VAR_0)
    if (VAR_3->BaseOfDll == VAR_2)
     return ((void*)VAR_3);
   VAR_3 = (PLIB_ITEM)((ULONG_PTR)VAR_3 + sizeof (LIB_ITEM));
  }
 }
 return ((void*)0);
}
