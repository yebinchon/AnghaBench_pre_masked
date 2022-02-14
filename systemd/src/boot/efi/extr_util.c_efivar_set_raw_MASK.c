
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int UINTN ;
typedef int UINT32 ;
struct TYPE_2__ {int SetVariable; } ;
typedef int EFI_STATUS ;
typedef int EFI_GUID ;
typedef int CHAR16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int,int *,int *,int,int ,int *) ;

EFI_STATUS FUNC_1(const EFI_GUID *VAR_4, const CHAR16 *VAR_5, const VOID *VAR_6, UINTN VAR_7, BOOLEAN VAR_8) {
        UINT32 VAR_9;

        VAR_9 = VAR_0|VAR_2;
        if (VAR_8)
                VAR_9 |= VAR_1;

        return FUNC_0(VAR_3->SetVariable, 5, (CHAR16*) VAR_5, (EFI_GUID *)VAR_4, VAR_9, VAR_7, (VOID*) VAR_6);
}
