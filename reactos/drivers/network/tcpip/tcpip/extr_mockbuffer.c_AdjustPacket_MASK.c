
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ MappedSystemVa; int ByteCount; int ByteOffset; } ;
typedef scalar_t__ PVOID ;
typedef int PNDIS_PACKET ;
typedef TYPE_1__* PNDIS_BUFFER ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,TYPE_1__**,int *) ;
 int FUNC_1 (int ,char*) ;

PVOID FUNC_2(
    PNDIS_PACKET VAR_1,
    UINT VAR_2,
    UINT VAR_3)
{
    PNDIS_BUFFER VAR_4;
    INT VAR_5;

    FUNC_1(VAR_0, ("Available = %d, Needed = %d.\n", VAR_2, VAR_3));

    VAR_5 = VAR_2 - VAR_3;

    FUNC_0(VAR_1, ((void*)0), ((void*)0), &VAR_4, ((void*)0));



    if (VAR_5 != 0) {
        VAR_4->MappedSystemVa = (PVOID) ((ULONG_PTR)(VAR_4->MappedSystemVa) + VAR_5);
        VAR_4->ByteOffset += VAR_5;
        VAR_4->ByteCount -= VAR_5;
    }

    return VAR_4->MappedSystemVa;
}
