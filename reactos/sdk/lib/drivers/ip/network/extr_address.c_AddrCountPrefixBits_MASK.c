
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int IPv4Address; } ;
struct TYPE_5__ {scalar_t__ Type; TYPE_1__ Address; } ;
typedef TYPE_2__* PIP_ADDRESS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

UINT FUNC_2( PIP_ADDRESS VAR_2 ) {
    UINT VAR_3 = 0;
    if( VAR_2->Type == VAR_1 ) {
 ULONG VAR_4 = 0x80000000;




 ULONG VAR_5 = FUNC_0(VAR_2->Address.IPv4Address);

 while( (VAR_4 & VAR_5) == VAR_4 ) {
     VAR_3++;
     VAR_4 >>= 1;
 }
 return VAR_3;
    } else {
 FUNC_1(VAR_0, ("Don't know address type %d\n",
         VAR_2->Type));
 return 0;
    }
}
