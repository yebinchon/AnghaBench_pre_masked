
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_8__ {unsigned long address_; int address_mode_; } ;
typedef TYPE_1__ oxnas_dma_device_settings_t ;
struct TYPE_9__ {unsigned long address_; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 unsigned long FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 TYPE_1__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(const ulong* VAR_8, int VAR_9)
{

 oxnas_dma_device_settings_t VAR_10 = VAR_6;
 VAR_10.address_ = (unsigned long) VAR_8;
 VAR_10.address_mode_ = VAR_4;

 FUNC_3(FUNC_1(&VAR_10, &VAR_7),
  VAR_5 + VAR_3);
 FUNC_3(VAR_10.address_, VAR_5 + VAR_1);
 FUNC_3(VAR_7.address_,
  VAR_5 + VAR_0);
 FUNC_3(FUNC_2(&VAR_10, &VAR_7,
    VAR_9),
  VAR_5 + VAR_2);

 FUNC_0();
}
