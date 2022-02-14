
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int FileOffset; int FileObject; } ;
typedef int PVOID ;
typedef TYPE_1__* PROSSYM_KM_OWN_CONTEXT ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static BOOLEAN
FUNC_2(PVOID VAR_1, PVOID VAR_2, ULONG VAR_3)
{
    PROSSYM_KM_OWN_CONTEXT VAR_4 = (PROSSYM_KM_OWN_CONTEXT)VAR_1;
    IO_STATUS_BLOCK VAR_5;
    NTSTATUS VAR_6 = FUNC_0
        (VAR_4->FileObject,
         &VAR_4->FileOffset,
         VAR_2,
         VAR_3,
         VAR_0,
         &VAR_5);
    return FUNC_1(VAR_6);
}
