
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int attr ;
typedef int UNICODE_STRING ;
struct TYPE_6__ {scalar_t__ Data; } ;
struct TYPE_5__ {int Length; int * SecurityQualityOfService; int * SecurityDescriptor; int * ObjectName; int Attributes; int RootDirectory; } ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_2__ KEY_VALUE_PARTIAL_INFORMATION ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int,TYPE_1__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,TYPE_2__*,int,int*) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;

__attribute__((used)) static DWORD FUNC_6( HANDLE VAR_6, const char *VAR_7, DWORD VAR_8 )
{
    char VAR_9[32];
    NTSTATUS VAR_10;
    OBJECT_ATTRIBUTES VAR_11;
    UNICODE_STRING VAR_12;
    HANDLE VAR_13;
    KEY_VALUE_PARTIAL_INFORMATION *VAR_14 = (KEY_VALUE_PARTIAL_INFORMATION *)VAR_9;
    DWORD VAR_15, VAR_16 = sizeof(VAR_9);

    VAR_11.Length = sizeof(VAR_11);
    VAR_11.RootDirectory = VAR_6;
    VAR_11.Attributes = VAR_2;
    VAR_11.ObjectName = &VAR_12;
    VAR_11.SecurityDescriptor = ((void*)0);
    VAR_11.SecurityQualityOfService = ((void*)0);
    FUNC_4( &VAR_12, VAR_7 );

    VAR_10 = FUNC_2( &VAR_13, VAR_8 | VAR_0, &VAR_11, 0, 0, 0, 0 );
    if (VAR_10 == VAR_3) return 0;
    FUNC_0( VAR_10 == VAR_4, "%08x: NtCreateKey failed: 0x%08x\n", VAR_8, VAR_10 );

    VAR_10 = FUNC_3( VAR_13, &VAR_5, VAR_1, VAR_14, VAR_16, &VAR_16 );
    if (VAR_10 == VAR_3)
        VAR_15 = 0;
    else
    {
        FUNC_0( VAR_10 == VAR_4, "%08x: NtQueryValueKey failed: 0x%08x\n", VAR_8, VAR_10 );
        VAR_15 = *(DWORD *)VAR_14->Data;
    }
    FUNC_1( VAR_13 );
    FUNC_5( &VAR_12 );
    return VAR_15;
}
