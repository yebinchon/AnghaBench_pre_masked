
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low; int high; int out; scalar_t__ many; } ;
typedef TYPE_1__ cmap_splay ;



__attribute__((used)) static void
FUNC_0(cmap_splay *VAR_0, void *VAR_1)
{
 int *VAR_2 = (int *)VAR_1;

 if (VAR_0->many)
  VAR_2[2]++;
 else if (VAR_0->low <= 0xffff && VAR_0->high <= 0xFFFF && VAR_0->out <= 0xFFFF)
  VAR_2[0]++;
 else
  VAR_2[1]++;
}
