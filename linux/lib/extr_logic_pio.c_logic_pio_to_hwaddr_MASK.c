
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logic_pio_hwaddr {scalar_t__ io_start; scalar_t__ hw_start; } ;
typedef scalar_t__ resource_size_t ;


 struct logic_pio_hwaddr* FUNC_0 (unsigned long) ;

resource_size_t FUNC_1(unsigned long VAR_0)
{
 struct logic_pio_hwaddr *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1->hw_start + VAR_0 - VAR_1->io_start;

 return (resource_size_t)~0;
}
