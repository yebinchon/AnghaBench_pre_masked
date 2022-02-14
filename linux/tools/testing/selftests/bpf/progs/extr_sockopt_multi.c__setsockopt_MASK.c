
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sockopt {int* optval_end; int* optval; scalar_t__ level; scalar_t__ optname; int optlen; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct bpf_sockopt *VAR_2)
{
 __u8 *VAR_3 = VAR_2->optval_end;
 __u8 *VAR_4 = VAR_2->optval;

 if (VAR_2->level != VAR_1 || VAR_2->optname != VAR_0)
  return 1;

 if (VAR_4 + 1 > VAR_3)
  return 0;

 VAR_4[0] += 0x10;
 VAR_2->optlen = 1;

 return 1;
}
