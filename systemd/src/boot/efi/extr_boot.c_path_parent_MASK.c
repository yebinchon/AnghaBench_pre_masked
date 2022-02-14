
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINTN ;
typedef int UINT8 ;
typedef int EFI_DEVICE_PATH ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

EFI_DEVICE_PATH *FUNC_3(EFI_DEVICE_PATH *VAR_1, EFI_DEVICE_PATH *VAR_2) {
        EFI_DEVICE_PATH *VAR_3;
        UINTN VAR_4;

        VAR_4 = (UINT8*) FUNC_2(VAR_2) - (UINT8*) VAR_1;
        VAR_3 = (EFI_DEVICE_PATH*) FUNC_0(VAR_4 + sizeof(EFI_DEVICE_PATH));
        FUNC_1(VAR_3, VAR_1, VAR_4);
        FUNC_1((UINT8*) VAR_3 + VAR_4, VAR_0, sizeof(EFI_DEVICE_PATH));

        return VAR_3;
}
