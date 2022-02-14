
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* res; } ;
struct hdac_bus {TYPE_1__ rirb; } ;



__attribute__((used)) static int FUNC_0(struct hdac_bus *VAR_0, unsigned int VAR_1,
       unsigned int *VAR_2)
{
 if (VAR_2)
  *VAR_2 = VAR_0->rirb.res[VAR_1];
 return 0;
}
