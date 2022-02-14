
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int ctr_mask; } ;



__attribute__((used)) static int FUNC_0(struct gcov_info *VAR_0, unsigned int VAR_1)
{
 return (1 << VAR_1) & VAR_0->ctr_mask;
}
