
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct assembly_identity {int dummy; } ;
struct actctx_loader {int dummy; } ;
typedef int info ;
typedef int attr ;
struct TYPE_9__ {scalar_t__ QuadPart; } ;
struct TYPE_12__ {TYPE_1__ EndOfFile; } ;
struct TYPE_11__ {scalar_t__ QuadPart; } ;
struct TYPE_10__ {int Length; int Attributes; int * SecurityQualityOfService; int * SecurityDescriptor; int * ObjectName; scalar_t__ RootDirectory; } ;
typedef scalar_t__ SIZE_T ;
typedef TYPE_2__ OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int LPCWSTR ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_4__ FILE_STANDARD_INFORMATION ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int,TYPE_2__*,TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,void**,int ,int ,TYPE_3__*,scalar_t__*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,TYPE_4__*,int,int ) ;
 int FUNC_6 (int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (struct actctx_loader*,struct assembly_identity*,int ,int ,int ,void*,scalar_t__) ;

__attribute__((used)) static NTSTATUS FUNC_8( struct actctx_loader* VAR_10, struct assembly_identity* VAR_11,
                                               LPCWSTR VAR_12, LPCWSTR VAR_13, BOOL VAR_14, HANDLE VAR_15 )
{
    FILE_STANDARD_INFORMATION VAR_16;
    IO_STATUS_BLOCK VAR_17;
    HANDLE VAR_18;
    OBJECT_ATTRIBUTES VAR_19;
    LARGE_INTEGER VAR_20;
    LARGE_INTEGER VAR_21;
    NTSTATUS VAR_22;
    SIZE_T VAR_23;
    void *VAR_24;

    FUNC_0( "loading manifest file %S\n", VAR_12 );

    VAR_19.Length = sizeof(VAR_19);
    VAR_19.RootDirectory = 0;
    VAR_19.ObjectName = ((void*)0);
    VAR_19.Attributes = VAR_1 | VAR_2;
    VAR_19.SecurityDescriptor = ((void*)0);
    VAR_19.SecurityQualityOfService = ((void*)0);

    VAR_20.QuadPart = 0;
    VAR_22 = FUNC_2( &VAR_18, VAR_7 | VAR_5 | VAR_4,
                              &VAR_19, &VAR_20, VAR_3, VAR_6, VAR_15 );

    if (VAR_22 != VAR_8) return VAR_22;

    VAR_21.QuadPart = 0;
    VAR_23 = 0;
    VAR_24 = ((void*)0);
    VAR_22 = FUNC_4( VAR_18, FUNC_3(), &VAR_24, 0, 0, &VAR_21,
                                 &VAR_23, VAR_9, 0, VAR_3 );
    FUNC_1( VAR_18 );
    if (VAR_22 != VAR_8) return VAR_22;


    VAR_22 = FUNC_5( VAR_15, &VAR_17, &VAR_16, sizeof(VAR_16), VAR_0);

    if (VAR_22 == VAR_8)
        VAR_22 = FUNC_7(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, (SIZE_T)VAR_16.EndOfFile.QuadPart);

    FUNC_6( FUNC_3(), VAR_24 );
    return VAR_22;
}
