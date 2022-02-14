
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int DeviceHandle; } ;
typedef int PVOID ;
typedef TYPE_1__* PMIDIALLOC ;
typedef scalar_t__ PBYTE ;
typedef int DWORD ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static DWORD FUNC_3(PBYTE VAR_2, ULONG VAR_3, PMIDIALLOC VAR_4)
{
    DWORD VAR_5;

    FUNC_0("IOCTL_MIDI_PLAY == %d [%x]\n", VAR_0, VAR_0);

    if ( !FUNC_1(VAR_4->DeviceHandle, VAR_0, (PVOID)VAR_2,
                          VAR_3, ((void*)0), 0, &VAR_5, ((void*)0)))
        return FUNC_2();

    return VAR_1;
}
