
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1371_quirk {unsigned short vid; scalar_t__ did; scalar_t__ rev; } ;
struct ensoniq {scalar_t__ rev; TYPE_1__* pci; } ;
struct TYPE_2__ {unsigned short vendor; scalar_t__ device; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ensoniq *VAR_1,
    struct es1371_quirk *VAR_2)
{
 while (VAR_2->vid != (unsigned short)VAR_0) {
  if (VAR_1->pci->vendor == VAR_2->vid &&
      VAR_1->pci->device == VAR_2->did &&
      VAR_1->rev == VAR_2->rev)
   return 1;
  VAR_2++;
 }
 return 0;
}
