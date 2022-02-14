
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; scalar_t__ val; } ;
struct property {TYPE_1__ val; } ;
typedef int fdt32_t ;
typedef int cell_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

cell_t FUNC_2(struct property *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->val.len / sizeof(cell_t) >= VAR_1);
 return FUNC_1(*((fdt32_t *)VAR_0->val.val + VAR_1));
}
