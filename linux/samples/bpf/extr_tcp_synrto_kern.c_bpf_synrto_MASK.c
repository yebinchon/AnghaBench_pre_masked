
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock_ops {scalar_t__ remote_port; int local_port; int reply; scalar_t__ family; scalar_t__* local_ip6; scalar_t__* remote_ip6; scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct bpf_sock_ops *VAR_2)
{
 int VAR_3 = -1;
 int VAR_4;




 if (FUNC_0(VAR_2->remote_port) != 55601 &&
     VAR_2->local_port != 55601) {
  VAR_2->reply = -1;
  return 1;
 }

 VAR_4 = (int) VAR_2->op;






 if (VAR_4 == VAR_1 &&
  VAR_2->family == VAR_0) {





  if (VAR_2->local_ip6[0] == VAR_2->remote_ip6[0] &&
      (FUNC_0(VAR_2->local_ip6[1]) & 0xfff00000) ==
      (FUNC_0(VAR_2->remote_ip6[1]) & 0xfff00000))
   VAR_3 = 10;
 }



 VAR_2->reply = VAR_3;
 return 1;
}
