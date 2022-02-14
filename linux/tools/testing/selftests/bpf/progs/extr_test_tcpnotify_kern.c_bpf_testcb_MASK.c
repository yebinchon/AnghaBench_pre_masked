
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpnotify_globals {int ncalls; int total_retrans; } ;
struct tcp_notifier {int type; int subtype; int source; int hash; } ;
struct bpf_sock_ops {int reply; int total_retrans; int remote_port; scalar_t__ op; } ;
typedef int msg ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;

 int VAR_3 ;




 scalar_t__ VAR_4 ;
 struct tcpnotify_globals* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,struct tcpnotify_globals*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bpf_sock_ops*,int *,int ,struct tcp_notifier*,int) ;
 int FUNC_4 (struct bpf_sock_ops*,int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct bpf_sock_ops *VAR_7)
{
 int VAR_8 = -1;
 int VAR_9;

 VAR_9 = (int) VAR_7->op;

 if (FUNC_2(VAR_7->remote_port) != VAR_4) {
  VAR_7->reply = -1;
  return 0;
 }

 switch (VAR_9) {
 case 128:
 case 131:
 case 135:
 case 136:
 case 132:
  VAR_8 = 1;
  break;

 case 130:
 case 129:
 case 137:
 case 134:
  FUNC_4(VAR_7, (VAR_2|
       VAR_3));
  VAR_8 = 1;
  break;
 case 133: {
   __u32 VAR_10 = 0;
   struct tcpnotify_globals VAR_11, *VAR_12;
   struct tcp_notifier VAR_13 = {
    .type = 0xde,
    .subtype = 0xad,
    .source = 0xbe,
    .hash = 0xef,
   };

   VAR_8 = 1;


   VAR_12 = FUNC_0(&VAR_5, &VAR_10);
   if (!VAR_12)
    break;
   VAR_11 = *VAR_12;
   VAR_11.total_retrans = VAR_7->total_retrans;
   VAR_11.ncalls++;
   FUNC_1(&VAR_5, &VAR_10, &VAR_11,
         VAR_0);
   FUNC_3(VAR_7, &VAR_6,
           VAR_1,
           &VAR_13, sizeof(VAR_13));
  }
  break;
 default:
  VAR_8 = -1;
 }
 VAR_7->reply = VAR_8;
 return 1;
}
