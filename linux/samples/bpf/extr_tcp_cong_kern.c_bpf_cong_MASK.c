
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock_ops {scalar_t__ remote_port; int local_port; int reply; scalar_t__ family; scalar_t__* local_ip6; scalar_t__* remote_ip6; scalar_t__ op; } ;
typedef int cong ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct bpf_sock_ops*,int ,int ,char*,int) ;

int FUNC_3(struct bpf_sock_ops *VAR_3)
{
 char VAR_4[] = "dctcp";
 int VAR_5 = 0;
 int VAR_6;




 if (FUNC_0(VAR_3->remote_port) != 55601 &&
     VAR_3->local_port != 55601) {
  VAR_3->reply = -1;
  return 1;
 }

 VAR_6 = (int) VAR_3->op;
 if (VAR_3->family == VAR_0 &&
     VAR_3->local_ip6[0] == VAR_3->remote_ip6[0] &&
     (FUNC_0(VAR_3->local_ip6[1]) & 0xfff00000) ==
     (FUNC_0(VAR_3->remote_ip6[1]) & 0xfff00000)) {
  switch (VAR_6) {
  case 129:
   VAR_5 = 1;
   break;
  case 130:
   VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_2,
         VAR_4, sizeof(VAR_4));
   break;
  case 128:
   VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_2,
         VAR_4, sizeof(VAR_4));
   break;
  default:
   VAR_5 = -1;
  }
 } else {
  VAR_5 = -1;
 }



 VAR_3->reply = VAR_5;
 return 1;
}
