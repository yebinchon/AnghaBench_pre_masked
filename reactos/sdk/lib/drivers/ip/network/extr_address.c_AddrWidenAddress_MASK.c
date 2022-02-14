
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int IPv4Address; } ;
struct TYPE_7__ {scalar_t__ Type; TYPE_1__ Address; } ;
typedef TYPE_2__* PIP_ADDRESS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

VOID FUNC_1( PIP_ADDRESS VAR_2, PIP_ADDRESS VAR_3,
         PIP_ADDRESS VAR_4 ) {
    if( VAR_4->Type == VAR_1 ) {
        VAR_2->Type = VAR_4->Type;
 VAR_2->Address.IPv4Address =
     VAR_3->Address.IPv4Address & VAR_4->Address.IPv4Address;
    } else {
 FUNC_0(VAR_0, ("Don't know address type %d\n",
         VAR_4->Type));
 *VAR_2 = *VAR_3;
    }
}
