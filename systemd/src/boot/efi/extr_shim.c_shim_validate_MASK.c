
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ShimLock {scalar_t__ (* shim_verify ) (int *,int ) ;} ;
typedef int VOID ;
typedef int UINT32 ;
struct TYPE_2__ {int LocateProtocol; } ;
typedef int EFI_GUID ;
typedef int BOOLEAN ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int,int *,int *,int **) ;

__attribute__((used)) static BOOLEAN FUNC_2(VOID *VAR_4, UINT32 VAR_5) {
        struct ShimLock *VAR_6;

        if (!VAR_4)
                return VAR_2;

        if (FUNC_1(VAR_0->LocateProtocol, 3, (EFI_GUID*) &VAR_3, ((void*)0), (VOID**) &VAR_6) != VAR_1)
                return VAR_2;

        if (!VAR_6)
                return VAR_2;

        return VAR_6->shim_verify(VAR_4, VAR_5) == VAR_1;
}
