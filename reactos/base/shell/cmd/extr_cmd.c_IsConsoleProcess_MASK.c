
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {scalar_t__ ImageSubsystem; } ;
struct TYPE_5__ {int PebBaseAddress; } ;
typedef TYPE_1__ PROCESS_BASIC_INFORMATION ;
typedef TYPE_2__ PEB ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int,int *) ;
 int FUNC_2 (int ,int ,TYPE_2__*,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,...) ;

__attribute__((used)) static BOOL FUNC_4(HANDLE VAR_3)
{
    NTSTATUS VAR_4;
    PROCESS_BASIC_INFORMATION VAR_5;
    PEB VAR_6;
    ULONG VAR_7;

    if (((void*)0) == &FUNC_1 || ((void*)0) == &FUNC_2)
    {
        return VAR_2;
    }

    VAR_4 = FUNC_1 (
        VAR_3, VAR_1,
        &VAR_5, sizeof(PROCESS_BASIC_INFORMATION), ((void*)0));
    if (! FUNC_0(VAR_4))
    {
        FUNC_3 ("NtQueryInformationProcess failed with status %08x\n", VAR_4);
        return VAR_2;
    }
    VAR_4 = FUNC_2 (
        VAR_3, VAR_5.PebBaseAddress, &VAR_6,
        sizeof(PEB), &VAR_7);
    if (! FUNC_0(VAR_4) || sizeof(PEB) != VAR_7)
    {
        FUNC_3 ("Couldn't read virt mem status %08x bytes read %lu\n", VAR_4, VAR_7);
        return VAR_2;
    }

    return VAR_0 == VAR_6.ImageSubsystem;
}
