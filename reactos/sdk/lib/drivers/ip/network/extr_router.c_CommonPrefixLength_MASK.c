
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {int IPv4Address; } ;
struct TYPE_6__ {scalar_t__ Type; TYPE_1__ Address; } ;
typedef size_t* PUCHAR ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef int IPv6_RAW_ADDRESS ;
typedef int IPv4_RAW_ADDRESS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

UINT FUNC_1(
    PIP_ADDRESS VAR_2,
    PIP_ADDRESS VAR_3)
{
    PUCHAR VAR_4, VAR_5;
    UINT VAR_6;
    UINT VAR_7, VAR_8;
    UINT VAR_9;

    FUNC_0(VAR_0, ("Called. Address1 (0x%X)  Address2 (0x%X).\n", VAR_2, VAR_3));




    if (VAR_2->Type == VAR_1)
        VAR_6 = sizeof(IPv4_RAW_ADDRESS);
    else
        VAR_6 = sizeof(IPv6_RAW_ADDRESS);

    VAR_4 = (PUCHAR)&VAR_2->Address.IPv4Address;
    VAR_5 = (PUCHAR)&VAR_3->Address.IPv4Address;


    for (VAR_7 = 0; VAR_7 < VAR_6 && VAR_4[VAR_7] == VAR_5[VAR_7]; VAR_7++);
    if( VAR_7 == VAR_6 ) return 8 * VAR_7;


    VAR_9 = 0x80;
    for (VAR_8 = 0; (VAR_4[VAR_7] & VAR_9) == (VAR_5[VAR_7] & VAR_9); VAR_8++)
        VAR_9 >>= 1;

    FUNC_0(VAR_0, ("Returning %d\n", 8 * VAR_7 + VAR_8));

    return 8 * VAR_7 + VAR_8;
}
