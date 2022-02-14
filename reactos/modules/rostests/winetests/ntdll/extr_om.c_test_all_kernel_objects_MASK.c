
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int UINT ;
struct TYPE_3__ {int QuadPart; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int *,TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int *,int,int) ;
 scalar_t__ FUNC_10 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_11 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_12 (int *,int ,int *) ;
 scalar_t__ FUNC_13 (int *,int ,int *) ;
 scalar_t__ FUNC_14 (int *,int ,int *) ;
 scalar_t__ FUNC_15 (int *,int ,int *) ;
 scalar_t__ FUNC_16 (int *,int ,int *) ;
 scalar_t__ FUNC_17 (int *,int ,int *) ;
 scalar_t__ FUNC_18 (int *,int ,int *) ;
 scalar_t__ FUNC_19 (int *,int ,int *) ;
 scalar_t__ FUNC_20 (int *,int ,int *) ;
 scalar_t__ FUNC_21 (int *,int ,int *) ;
 int FUNC_22 (int *,char*) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void FUNC_24( UINT VAR_6, OBJECT_ATTRIBUTES *VAR_7,
                                     NTSTATUS VAR_8, NTSTATUS VAR_9 )
{
    UNICODE_STRING VAR_10;
    LARGE_INTEGER VAR_11;
    NTSTATUS VAR_12, VAR_13;
    HANDLE VAR_14, VAR_15;

    FUNC_22( &VAR_10, "\\DosDevices" );
    VAR_11.QuadPart = 4096;

    VAR_12 = FUNC_7( &VAR_14, VAR_1, VAR_7, VAR_0 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateMutant failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_17( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenMutant failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_9( &VAR_14, VAR_1, VAR_7, 1, 2 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateSemaphore failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_19( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenSemaphore failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_3( &VAR_14, VAR_1, VAR_7, 1, 0 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateEvent failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_13( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenEvent failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_6( &VAR_14, VAR_1, VAR_7, 0 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateKeyedEvent failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_16( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenKeyedEvent failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_11( &VAR_14, VAR_1, VAR_7, VAR_2 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateTimer failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_21( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenTimer failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_4( &VAR_14, VAR_1, VAR_7, 0 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateCompletion failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_14( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenCompletion failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_5( &VAR_14, VAR_1, VAR_7 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateJobObject failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_15( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenJobObject failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_2( &VAR_14, VAR_1, VAR_7 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateDirectoryObject failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_12( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenDirectoryObject failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_10( &VAR_14, VAR_1, VAR_7, &VAR_10 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateSymbolicLinkObject failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_20( &VAR_15, VAR_1, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenSymbolicLinkObject failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    VAR_12 = FUNC_8( &VAR_14, VAR_4, VAR_7, &VAR_11, VAR_3, VAR_5, 0 );
    FUNC_0( VAR_12 == VAR_8, "%u: NtCreateSection failed %x\n", VAR_6, VAR_12 );
    VAR_13 = FUNC_18( &VAR_15, VAR_4, VAR_7 );
    FUNC_0( VAR_13 == VAR_9, "%u: NtOpenSection failed %x\n", VAR_6, VAR_13 );
    if (!VAR_12) FUNC_1( VAR_14 );
    if (!VAR_13) FUNC_1( VAR_15 );
    FUNC_23( &VAR_10 );
}
