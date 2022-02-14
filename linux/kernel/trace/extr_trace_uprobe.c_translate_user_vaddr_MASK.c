
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uprobe_dispatch_data {unsigned long bp_addr; TYPE_2__* tu; } ;
struct TYPE_6__ {TYPE_1__* utask; } ;
struct TYPE_5__ {unsigned long offset; } ;
struct TYPE_4__ {scalar_t__ vaddr; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct uprobe_dispatch_data *VAR_3;

 VAR_3 = (void *) VAR_0->utask->vaddr;

 VAR_2 = VAR_3->bp_addr - VAR_3->tu->offset;
 return VAR_2 + VAR_1;
}
