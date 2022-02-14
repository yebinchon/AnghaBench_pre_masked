
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Stall; } ;
typedef int EFI_STATUS ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int) ;

EFI_STATUS FUNC_2(void) {
        FUNC_0(L"Out of memory.");
        (void) FUNC_1(VAR_0->Stall, 1, 3 * 1000 * 1000);
        return VAR_1;
}
