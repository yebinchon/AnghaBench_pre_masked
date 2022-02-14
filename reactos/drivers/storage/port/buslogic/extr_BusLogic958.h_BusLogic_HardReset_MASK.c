
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int HardReset; } ;
struct TYPE_7__ {scalar_t__ All; TYPE_1__ Bits; } ;
struct TYPE_6__ {scalar_t__ IO_Address; } ;
typedef TYPE_2__ BusLogic_HostAdapter_T ;
typedef TYPE_3__ BusLogic_ControlRegister_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(BusLogic_HostAdapter_T *VAR_2)
{
  BusLogic_ControlRegister_T VAR_3;
  VAR_3.All = 0;
  VAR_3.Bits.HardReset = VAR_1;
  FUNC_0(VAR_3.All,
       VAR_2->IO_Address + VAR_0);
}
