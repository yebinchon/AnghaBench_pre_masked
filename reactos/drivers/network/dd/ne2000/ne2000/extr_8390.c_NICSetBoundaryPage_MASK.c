
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int UCHAR ;
struct TYPE_3__ {int NextPacket; int PageStart; int PageStop; scalar_t__ IOBase; } ;
typedef TYPE_1__* PNIC_ADAPTER ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static VOID FUNC_1(
    PNIC_ADAPTER VAR_1)





{
    if (VAR_1->NextPacket == VAR_1->PageStart) {
        FUNC_0(VAR_1->IOBase + VAR_0,
            (UCHAR)(VAR_1->PageStop - 1));
    } else {
        FUNC_0(VAR_1->IOBase + VAR_0,
            (UCHAR)(VAR_1->NextPacket - 1));
    }
}
