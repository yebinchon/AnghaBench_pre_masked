
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * End; int * Execute; int * Launch; int * Sync; int * Reset; int * Init; } ;
typedef TYPE_1__ WebPWorkerInterface ;


 TYPE_1__ VAR_0 ;

int FUNC_0(const WebPWorkerInterface* const VAR_1) {
  if (VAR_1 == ((void*)0) ||
      VAR_1->Init == ((void*)0) || VAR_1->Reset == ((void*)0) ||
      VAR_1->Sync == ((void*)0) || VAR_1->Launch == ((void*)0) ||
      VAR_1->Execute == ((void*)0) || VAR_1->End == ((void*)0)) {
    return 0;
  }
  VAR_0 = *VAR_1;
  return 1;
}
