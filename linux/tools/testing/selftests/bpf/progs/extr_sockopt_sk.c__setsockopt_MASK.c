
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_sk {int val; } ;
struct bpf_sockopt {scalar_t__ level; scalar_t__ optname; int optlen; int sk; int * optval; int * optval_end; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sockopt_sk* FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_8 ;

int FUNC_2(struct bpf_sockopt *VAR_9)
{
 __u8 *VAR_10 = VAR_9->optval_end;
 __u8 *VAR_11 = VAR_9->optval;
 struct sockopt_sk *VAR_12;

 if (VAR_9->level == VAR_3 && VAR_9->optname == VAR_1)




  return 1;

 if (VAR_9->level == VAR_4 && VAR_9->optname == VAR_6) {


  if (VAR_11 + sizeof(__u32) > VAR_10)
   return 0;

  *(__u32 *)VAR_11 = 0x55AA;
  VAR_9->optlen = 4;

  return 1;
 }

 if (VAR_9->level == VAR_5 && VAR_9->optname == VAR_7) {


  if (VAR_11 + 5 > VAR_10)
   return 0;

  FUNC_1(VAR_11, "cubic", 5);
  VAR_9->optlen = 5;

  return 1;
 }

 if (VAR_9->level != VAR_2)
  return 0;

 if (VAR_11 + 1 > VAR_10)
  return 0;

 VAR_12 = FUNC_0(&VAR_8, VAR_9->sk, 0,
         VAR_0);
 if (!VAR_12)
  return 0;

 VAR_12->val = VAR_11[0];
 VAR_9->optlen = -1;



 return 1;
}
