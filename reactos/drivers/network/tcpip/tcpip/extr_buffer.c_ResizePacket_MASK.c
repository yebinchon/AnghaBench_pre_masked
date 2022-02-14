
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ ByteCount; } ;
typedef int PNDIS_PACKET ;
typedef TYPE_1__* PNDIS_BUFFER ;


 int FUNC_0 (int ,int *,int *,TYPE_1__**,int *) ;

UINT FUNC_1(
    PNDIS_PACKET VAR_0,
    UINT VAR_1)
{
    PNDIS_BUFFER VAR_2;
    UINT VAR_3;

    FUNC_0(VAR_0, ((void*)0), ((void*)0), &VAR_2, ((void*)0));

    VAR_3 = VAR_2->ByteCount;

    if (VAR_1 != VAR_3)
        VAR_2->ByteCount = VAR_1;

    return VAR_3;
}
