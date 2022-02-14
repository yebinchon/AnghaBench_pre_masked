
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct assembly_identity {int dummy; } ;
struct actctx_loader {int dummy; } ;
typedef int attr ;
typedef char WCHAR ;
typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_7__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {int Length; int Attributes; int * SecurityQualityOfService; int * SecurityDescriptor; int * ObjectName; scalar_t__ RootDirectory; } ;
typedef scalar_t__ SIZE_T ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef char* LPCWSTR ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int HMODULE ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int,TYPE_1__*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,void**,int ,int ,TYPE_2__*,scalar_t__*,int ,int ,int ) ;
 int FUNC_5 (int ,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (struct actctx_loader*,struct assembly_identity*,char*,char*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_9 (struct actctx_loader*,struct assembly_identity*,char*,char*,int ,int ,int ) ;
 int FUNC_10 (char*,char*,int ) ;

__attribute__((used)) static NTSTATUS FUNC_11( struct actctx_loader* VAR_10, struct assembly_identity* VAR_11,
                                         LPCWSTR VAR_12, LPCWSTR VAR_13, BOOL VAR_14,
                                         HANDLE VAR_15, LPCWSTR VAR_16, ULONG VAR_17 )
{
    HANDLE VAR_18;
    OBJECT_ATTRIBUTES VAR_19;
    LARGE_INTEGER VAR_20;
    LARGE_INTEGER VAR_21;
    NTSTATUS VAR_22;
    SIZE_T VAR_23;
    void *VAR_24;
    WCHAR VAR_25[20];
    LPCWSTR VAR_26 = VAR_16;

    if ((!((ULONG_PTR)VAR_16 >> 16)))
    {
        FUNC_10(VAR_25, L"#%u", FUNC_6(VAR_16));
        VAR_26 = VAR_25;
    }

    FUNC_0( "looking for res %S in %S\n", VAR_26, VAR_12 ? VAR_12 : L"<NULL>");

    VAR_19.Length = sizeof(VAR_19);
    VAR_19.RootDirectory = 0;
    VAR_19.ObjectName = ((void*)0);
    VAR_19.Attributes = VAR_0 | VAR_1;
    VAR_19.SecurityDescriptor = ((void*)0);
    VAR_19.SecurityQualityOfService = ((void*)0);

    VAR_20.QuadPart = 0;
    VAR_22 = FUNC_2( &VAR_18, VAR_6 | VAR_4 | VAR_3,
                              &VAR_19, &VAR_20, VAR_2, VAR_5, VAR_15 );
    if (VAR_22 != VAR_8) return VAR_22;

    VAR_21.QuadPart = 0;
    VAR_23 = 0;
    VAR_24 = ((void*)0);
    VAR_22 = FUNC_4( VAR_18, FUNC_3(), &VAR_24, 0, 0, &VAR_21,
                                 &VAR_23, VAR_9, 0, VAR_2 );
    FUNC_1( VAR_18 );
    if (VAR_22 != VAR_8) return VAR_22;

    if (FUNC_7(VAR_24))
    {
        HANDLE VAR_27 = (HMODULE)((ULONG_PTR)VAR_24 | 1);
        if (VAR_16)
            VAR_22 = FUNC_8( VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_27, VAR_16, VAR_17 );
        else
            VAR_22 = FUNC_9(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_27, VAR_17);
    }
    else VAR_22 = VAR_7;

    FUNC_5( FUNC_3(), VAR_24 );
    return VAR_22;
}
