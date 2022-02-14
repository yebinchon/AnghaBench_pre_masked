
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock_addr {scalar_t__ type; int msg_src_ip4; int user_ip4; scalar_t__ user_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct bpf_sock_addr *VAR_8)
{
 if (VAR_8->type != VAR_4)
  return 0;


 if (VAR_8->msg_src_ip4 == FUNC_0(VAR_5) ||
     VAR_8->msg_src_ip4 == FUNC_0(VAR_6)) {
  VAR_8->msg_src_ip4 = FUNC_0(VAR_7);
 } else {

  return 0;
 }


 if ((VAR_8->user_ip4 >> 24) == (FUNC_0(VAR_0) >> 24) &&
      VAR_8->user_port == FUNC_1(VAR_1)) {
  VAR_8->user_ip4 = FUNC_0(VAR_2);
  VAR_8->user_port = FUNC_1(VAR_3);
 } else {

  return 0;
 }

 return 1;
}
