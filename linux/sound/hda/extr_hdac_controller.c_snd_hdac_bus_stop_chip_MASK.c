
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ addr; } ;
struct hdac_bus {int chip_init; TYPE_1__ posbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_bus*) ;
 int FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (struct hdac_bus*) ;
 int FUNC_3 (struct hdac_bus*,int ,int ) ;

void FUNC_4(struct hdac_bus *VAR_2)
{
 if (!VAR_2->chip_init)
  return;


 FUNC_1(VAR_2);
 FUNC_0(VAR_2);


 FUNC_2(VAR_2);


 if (VAR_2->posbuf.addr) {
  FUNC_3(VAR_2, VAR_0, 0);
  FUNC_3(VAR_2, VAR_1, 0);
 }

 VAR_2->chip_init = 0;
}
