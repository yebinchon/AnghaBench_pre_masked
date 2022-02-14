
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum console_mode_change_type { ____Placeholder_console_mode_change_type } console_mode_change_type ;
typedef scalar_t__ UINTN ;
struct TYPE_6__ {TYPE_2__* ConOut; } ;
struct TYPE_5__ {TYPE_1__* Mode; } ;
struct TYPE_4__ {scalar_t__ MaxMode; } ;
typedef int EFI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;

EFI_STATUS FUNC_2(UINTN *VAR_3, enum console_mode_change_type VAR_4) {
        if (VAR_4 == VAR_0)
                return FUNC_1(VAR_3);

        if (VAR_4 == VAR_1) {

                if (VAR_2->ConOut->Mode->MaxMode > 0)
                        *VAR_3 = VAR_2->ConOut->Mode->MaxMode-1;
                else
                        *VAR_3 = 0;
        }

        return FUNC_0(*VAR_3);
}
