
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINTN ;
struct TYPE_4__ {TYPE_1__* ConOut; } ;
struct TYPE_3__ {int SetMode; } ;
typedef int EFI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int ,int,TYPE_1__*,int) ;

__attribute__((used)) static EFI_STATUS FUNC_2(UINTN VAR_1) {
        EFI_STATUS VAR_2;

        VAR_2 = FUNC_1(VAR_0->ConOut->SetMode, 2, VAR_0->ConOut, VAR_1);



        if (FUNC_0(VAR_2) && VAR_1 == 1)
                FUNC_1(VAR_0->ConOut->SetMode, 2, VAR_0->ConOut, (UINTN)0);

        return VAR_2;
}
