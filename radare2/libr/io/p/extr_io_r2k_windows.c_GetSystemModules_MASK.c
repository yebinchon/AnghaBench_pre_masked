
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int NumberOfModules; TYPE_2__* Modules; } ;
struct TYPE_6__ {int ImageBase; int ImageSize; scalar_t__ FullPathName; } ;
struct TYPE_5__ {int (* cb_printf ) (char*,char const*,int ,int ) ;} ;
typedef TYPE_1__ RIO ;
typedef TYPE_2__* PRTL_PROCESS_MODULE_INFORMATION ;
typedef TYPE_3__* PRTL_PROCESS_MODULES ;
typedef int * LPVOID ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int *,int,int *,int,int *,int *) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int ,int ) ;

int FUNC_5(RIO *VAR_2) {
 DWORD VAR_3 = 0;
 int VAR_4;
 LPVOID VAR_5 = ((void*)0);
 int VAR_6 = 1024 * 1024;
 if(VAR_1) {
  if (!(VAR_5 = FUNC_3 (VAR_6))) {
   FUNC_2 ("[r2k] GetSystemModules: Error can't allocate %i bytes of memory.\n", VAR_6);
   return -1;
  }
  if (FUNC_0 (VAR_1, VAR_0, VAR_5, VAR_6, VAR_5, VAR_6, &VAR_3, ((void*)0))) {
   PRTL_PROCESS_MODULES VAR_7 = (PRTL_PROCESS_MODULES)VAR_5;
   PRTL_PROCESS_MODULE_INFORMATION VAR_8 = VAR_7->Modules;
   for (VAR_4 = 0; VAR_4 < VAR_7->NumberOfModules; VAR_4++) {
    const char *VAR_9 = FUNC_1((const char*)VAR_8[VAR_4].FullPathName);
    VAR_2->cb_printf ("f nt.%s 0x%x @ 0x%p\n", VAR_9, VAR_8[VAR_4].ImageSize, VAR_8[VAR_4].ImageBase);
   }
  }
 } else {
  FUNC_2 ("Driver not initialized.\n");
 }
 return 1;
}
