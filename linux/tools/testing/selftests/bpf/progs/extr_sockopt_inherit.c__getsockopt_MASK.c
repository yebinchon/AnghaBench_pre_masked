
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_inherit {int val; } ;
struct bpf_sockopt {scalar_t__ level; int optlen; scalar_t__ retval; int * optval; int * optval_end; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 struct sockopt_inherit* FUNC_0 (struct bpf_sockopt*) ;

int FUNC_1(struct bpf_sockopt *VAR_1)
{
 __u8 *VAR_2 = VAR_1->optval_end;
 struct sockopt_inherit *VAR_3;
 __u8 *VAR_4 = VAR_1->optval;

 if (VAR_1->level != VAR_0)
  return 1;

 if (VAR_4 + 1 > VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return 0;

 VAR_1->retval = 0;

 VAR_4[0] = VAR_3->val;
 VAR_1->optlen = 1;

 return 1;
}
