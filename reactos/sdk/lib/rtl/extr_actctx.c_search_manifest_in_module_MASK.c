
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct assembly_identity {int dummy; } ;
struct actctx_loader {int dummy; } ;
typedef int ULONG ;
struct TYPE_3__ {int Size; } ;
typedef void* PVOID ;
typedef scalar_t__ NTSTATUS ;
typedef int LPCWSTR ;
typedef int IMAGE_RESOURCE_DIRECTORY ;
typedef TYPE_1__ IMAGE_RESOURCE_DATA_ENTRY ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,void**,int *) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int ,int ,int ,int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int *,int ,void*,int) ;
 void* FUNC_3 (int *,void*,int ) ;
 void* FUNC_4 (int *,void*,int) ;
 scalar_t__ FUNC_5 (struct actctx_loader*,struct assembly_identity*,int ,int ,int ,void*,int ) ;

__attribute__((used)) static NTSTATUS FUNC_6( struct actctx_loader* VAR_6, struct assembly_identity* VAR_7,
                                       LPCWSTR VAR_8, LPCWSTR VAR_9, BOOL VAR_10,
                                       HANDLE VAR_11, ULONG VAR_12 )
{
    ULONG VAR_13;
    PVOID VAR_14, VAR_15;
    IMAGE_RESOURCE_DIRECTORY *VAR_16;
    IMAGE_RESOURCE_DATA_ENTRY *VAR_17;
    NTSTATUS VAR_18;

    VAR_14 = FUNC_1(VAR_11, VAR_5, VAR_0, &VAR_13);
    if (!VAR_14) return VAR_2;
    if (VAR_13 < sizeof(*VAR_16)) return VAR_2;
    VAR_16 = VAR_14;

    if (!(VAR_15 = FUNC_2(VAR_16, (LPCWSTR)VAR_1, VAR_14, 1)))
        return VAR_3;

    VAR_16 = VAR_15;
    if (!(VAR_15 = FUNC_4(VAR_16, VAR_14, 1)))
        return VAR_3;

    VAR_16 = VAR_15;
    if (!(VAR_15 = FUNC_3(VAR_16, VAR_14, 0)))
        return VAR_3;

    VAR_17 = VAR_15;
    VAR_18 = FUNC_0(VAR_11, VAR_17, &VAR_15, ((void*)0));

    if (VAR_18 == VAR_4)
        VAR_18 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_15, VAR_17->Size);

    return VAR_18;
}
