
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ Index; } ;
typedef int TDI_STATUS ;
typedef int TDIEntityID ;
typedef int* PUINT ;
typedef int PNDIS_BUFFER ;
typedef TYPE_1__* PIP_INTERFACE ;
typedef int PCHAR ;
typedef int ATInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;

TDI_STATUS
FUNC_2(
    TDIEntityID VAR_3,
    PIP_INTERFACE VAR_4,
    PNDIS_BUFFER VAR_5,
    PUINT VAR_6)
{
    ULONG VAR_7[2];
    TDI_STATUS VAR_8;

    FUNC_1(VAR_0, ("Called.\n"));

    if (!VAR_4)
        return VAR_2;

    if (*VAR_6 < sizeof(VAR_7))
        return VAR_1;


    VAR_7[0] = 0;
    VAR_7[1] = VAR_4->Index;

    VAR_8 = FUNC_0((PCHAR)VAR_7,
                         sizeof(VAR_7),
                         VAR_5,
                         VAR_6);

    FUNC_1(VAR_0, ("Returning %08x\n", VAR_8));

    return VAR_8;
}
