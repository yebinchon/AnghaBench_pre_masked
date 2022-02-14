
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock_ops {scalar_t__ remote_port; int local_port; int reply; scalar_t__ family; scalar_t__* local_ip6; scalar_t__* remote_ip6; scalar_t__ op; } ;
typedef int clamp ;
typedef int bufsize ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct bpf_sock_ops*,int ,int ,int*,int) ;

int FUNC_3(struct bpf_sock_ops *VAR_6)
{
 int VAR_7 = 150000;
 int VAR_8 = 10;
 int VAR_9 = 100;
 int VAR_10 = 0;
 int VAR_11;




 if (FUNC_0(VAR_6->remote_port) != 55601 && VAR_6->local_port != 55601) {
  VAR_6->reply = -1;
  return 0;
 }

 VAR_11 = (int) VAR_6->op;
 if (VAR_6->family == VAR_0 &&
     VAR_6->local_ip6[0] == VAR_6->remote_ip6[0] &&
     (FUNC_0(VAR_6->local_ip6[1]) & 0xfff00000) ==
     (FUNC_0(VAR_6->remote_ip6[1]) & 0xfff00000)) {
  switch (VAR_11) {
  case 128:
   VAR_10 = VAR_8;
   break;
  case 129:

   VAR_10 = FUNC_2(VAR_6, VAR_1, VAR_4,
         &VAR_7, sizeof(VAR_7));
   VAR_10 += FUNC_2(VAR_6, VAR_1,
          VAR_3, &VAR_7,
          sizeof(VAR_7));
   break;
  case 131:
   VAR_10 = FUNC_2(VAR_6, VAR_2,
         VAR_5,
         &VAR_9, sizeof(VAR_9));
   break;
  case 130:

   VAR_10 = FUNC_2(VAR_6, VAR_2,
         VAR_5,
         &VAR_9, sizeof(VAR_9));
   VAR_10 += FUNC_2(VAR_6, VAR_1,
          VAR_4, &VAR_7,
          sizeof(VAR_7));
   VAR_10 += FUNC_2(VAR_6, VAR_1,
          VAR_3, &VAR_7,
          sizeof(VAR_7));
   break;
  default:
   VAR_10 = -1;
  }
 } else {
  VAR_10 = -1;
 }



 VAR_6->reply = VAR_10;
 return 1;
}
