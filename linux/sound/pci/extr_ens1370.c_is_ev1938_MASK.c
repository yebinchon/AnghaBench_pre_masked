
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ensoniq {TYPE_1__* pci; } ;
struct TYPE_2__ {int device; } ;



__attribute__((used)) static inline bool FUNC_0(struct ensoniq *VAR_0)
{
 return VAR_0->pci->device == 0x8938;
}
