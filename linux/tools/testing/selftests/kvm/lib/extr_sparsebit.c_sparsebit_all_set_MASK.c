
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {scalar_t__ num_set; scalar_t__ root; } ;



bool FUNC_0(struct sparsebit *VAR_0)
{





 return VAR_0->root && VAR_0->num_set == 0;
}
