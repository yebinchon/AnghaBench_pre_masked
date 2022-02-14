
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINTN ;
typedef int EFI_STATUS ;
typedef int CHAR16 ;
typedef int BOOLEAN ;


 int FUNC_0 (int *,int,char*,int ) ;
 int FUNC_1 (int *,int *,int ) ;

EFI_STATUS FUNC_2(CHAR16 *VAR_0, UINTN VAR_1, BOOLEAN VAR_2) {
        CHAR16 VAR_3[32];

        FUNC_0(VAR_3, 32, L"%u", VAR_1);
        return FUNC_1(VAR_0, VAR_3, VAR_2);
}
