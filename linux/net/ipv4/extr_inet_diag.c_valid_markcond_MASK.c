
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_diag_markcond {int dummy; } ;
struct inet_diag_bc_op {int dummy; } ;



__attribute__((used)) static bool FUNC_0(const struct inet_diag_bc_op *VAR_0, int VAR_1,
      int *VAR_2)
{
 *VAR_2 += sizeof(struct inet_diag_markcond);
 return VAR_1 >= *VAR_2;
}
