
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct hdac_bus {int chip_init; TYPE_1__ posbuf; scalar_t__ use_posbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_bus*) ;
 int FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (struct hdac_bus*) ;
 int FUNC_3 (struct hdac_bus*,int) ;
 int FUNC_4 (struct hdac_bus*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;

bool FUNC_6(struct hdac_bus *VAR_2, bool VAR_3)
{
 if (VAR_2->chip_init)
  return 0;


 FUNC_3(VAR_2, VAR_3);


 FUNC_0(VAR_2);


 FUNC_2(VAR_2);


 FUNC_1(VAR_2);


 if (VAR_2->use_posbuf && VAR_2->posbuf.addr) {
  FUNC_4(VAR_2, VAR_0, (u32)VAR_2->posbuf.addr);
  FUNC_4(VAR_2, VAR_1, FUNC_5(VAR_2->posbuf.addr));
 }

 VAR_2->chip_init = 1;
 return 1;
}
