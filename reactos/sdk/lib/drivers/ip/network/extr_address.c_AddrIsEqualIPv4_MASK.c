
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ IPv4Address; } ;
struct TYPE_5__ {scalar_t__ Type; TYPE_1__ Address; } ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef scalar_t__ IPv4_RAW_ADDRESS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

BOOLEAN FUNC_0(
    PIP_ADDRESS VAR_2,
    IPv4_RAW_ADDRESS VAR_3)
{
    if (VAR_2->Type == VAR_1)
        return (VAR_2->Address.IPv4Address == VAR_3);

    return VAR_0;
}
