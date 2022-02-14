
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock_addr {scalar_t__ type; scalar_t__* msg_src_ip6; scalar_t__* user_ip6; int user_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct bpf_sock_addr *VAR_10)
{
 if (VAR_10->type != VAR_5)
  return 0;


 if (VAR_10->msg_src_ip6[3] == FUNC_0(1) ||
     VAR_10->msg_src_ip6[3] == FUNC_0(0)) {
  VAR_10->msg_src_ip6[0] = FUNC_0(VAR_6);
  VAR_10->msg_src_ip6[1] = FUNC_0(VAR_7);
  VAR_10->msg_src_ip6[2] = FUNC_0(VAR_8);
  VAR_10->msg_src_ip6[3] = FUNC_0(VAR_9);
 } else {

  return 0;
 }


 if (VAR_10->user_ip6[0] == FUNC_0(0xFACEB00C)) {
  VAR_10->user_ip6[0] = FUNC_0(VAR_0);
  VAR_10->user_ip6[1] = FUNC_0(VAR_1);
  VAR_10->user_ip6[2] = FUNC_0(VAR_2);
  VAR_10->user_ip6[3] = FUNC_0(VAR_3);

  VAR_10->user_port = FUNC_1(VAR_4);
 } else {

  return 0;
 }

 return 1;
}
