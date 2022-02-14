
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int a ;
typedef int ULONG ;
typedef scalar_t__ NTSTATUS ;
typedef int HANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int*,int,int*) ;

__attribute__((used)) static ULONG FUNC_2(HANDLE VAR_2)
{
    NTSTATUS VAR_3;
    ULONG VAR_4, VAR_5;

    VAR_3 = FUNC_1( VAR_2, VAR_0, &VAR_4, sizeof(VAR_4), &VAR_5 );
    FUNC_0( VAR_3 == VAR_1, "NtQueryIoCompletion failed: %x\n", VAR_3 );
    if (VAR_3 != VAR_1) return -1;
    FUNC_0( VAR_5 == sizeof(VAR_4), "Unexpected response size: %x\n", VAR_5 );
    return VAR_4;
}
