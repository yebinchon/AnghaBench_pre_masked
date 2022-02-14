
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_diag_hostcond {int family; int prefix_len; } ;
struct inet_diag_bc_op {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;






__attribute__((used)) static bool FUNC_0(const struct inet_diag_bc_op *VAR_0, int VAR_1,
      int *VAR_2)
{
 struct inet_diag_hostcond *VAR_3;
 int VAR_4;


 *VAR_2 += sizeof(struct inet_diag_hostcond);
 if (VAR_1 < *VAR_2)
  return 0;
 VAR_3 = (struct inet_diag_hostcond *)(VAR_0 + 1);


 switch (VAR_3->family) {
 case 128:
  VAR_4 = 0;
  break;
 case 130:
  VAR_4 = sizeof(struct in_addr);
  break;
 case 129:
  VAR_4 = sizeof(struct in6_addr);
  break;
 default:
  return 0;
 }
 *VAR_2 += VAR_4;
 if (VAR_1 < *VAR_2)
  return 0;


 if (VAR_3->prefix_len > 8 * VAR_4)
  return 0;

 return 1;
}
