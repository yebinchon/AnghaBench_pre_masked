
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_2__ {void* BaseOfDll; int * hFile; } ;
typedef TYPE_1__* PLIB_ITEM ;
typedef int LIB_ITEM ;
typedef int * HANDLE ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void * FUNC_0 (void * VAR_1) {
 PLIB_ITEM VAR_2 = ((void*)0);
 if (VAR_0) {
  VAR_2 = (PLIB_ITEM)VAR_0;
  while (VAR_2->hFile != ((void*)0)) {
   if (VAR_2->hFile != (HANDLE)-1)
    if (VAR_2->BaseOfDll == VAR_1)
     return ((void*)VAR_2);
   VAR_2 = (PLIB_ITEM)((ULONG_PTR)VAR_2 + sizeof (LIB_ITEM));
  }
 }
 return ((void*)0);
}
