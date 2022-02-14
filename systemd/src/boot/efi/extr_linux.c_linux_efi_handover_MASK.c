
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ handover_offset; int code32_start; } ;
struct boot_params {TYPE_1__ hdr; } ;
typedef int (* handover_f ) (int ,int ,struct boot_params*) ;
typedef int VOID ;
typedef scalar_t__ UINTN ;
typedef int EFI_HANDLE ;


 int VAR_0 ;

__attribute__((used)) static VOID FUNC_0(EFI_HANDLE VAR_1, struct boot_params *VAR_2) {
        handover_f VAR_3;
        UINTN VAR_4 = (UINTN)VAR_2->hdr.code32_start;


        asm volatile ("cli");
        VAR_4 += 512;

        VAR_3 = (handover_f)(VAR_4 + VAR_2->hdr.handover_offset);
        VAR_3(VAR_1, VAR_0, VAR_2);
}
