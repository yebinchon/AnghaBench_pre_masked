
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINTN ;
typedef int UINT64 ;
struct TYPE_6__ {TYPE_2__* ConOut; } ;
struct TYPE_5__ {TYPE_1__* Mode; int QueryMode; } ;
struct TYPE_4__ {int Mode; } ;
typedef int EFI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,TYPE_2__*,int ,int*,int*) ;

__attribute__((used)) static UINT64 FUNC_2(void) {
        EFI_STATUS VAR_3;
        UINT64 VAR_4;
        UINTN VAR_5, VAR_6;

        VAR_3 = FUNC_1(VAR_0->ConOut->QueryMode, 4, VAR_0->ConOut, VAR_0->ConOut->Mode->Mode, &VAR_6, &VAR_5);
        if (FUNC_0(VAR_3)) {
                VAR_6 = 80;
                VAR_5 = 25;
        }

        VAR_4 = VAR_2 * VAR_1 * (UINT64)VAR_5 * (UINT64)VAR_6;

        return VAR_4;
}
