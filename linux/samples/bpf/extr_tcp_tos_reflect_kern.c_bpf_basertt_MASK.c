
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tos ;
struct ipv6hdr {int priority; int* flow_lbl; } ;
struct iphdr {int tos; } ;
struct bpf_sock_ops {int reply; int family; scalar_t__ op; } ;
typedef int save_syn ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bpf_sock_ops*,int ,int ,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct bpf_sock_ops*,int ,int ,int*,int) ;

int FUNC_3(struct bpf_sock_ops *VAR_8)
{
 char VAR_9[sizeof(struct ipv6hdr)];
 struct ipv6hdr *VAR_10;
 struct iphdr *VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 1;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;

 VAR_16 = (int) VAR_8->op;




 switch (VAR_16) {
 case 128:
  VAR_15 = FUNC_2(VAR_8, VAR_5, VAR_7,
       &VAR_13, sizeof(VAR_13));
  break;
 case 129:
  if (VAR_8->family == VAR_0)
   VAR_12 = sizeof(struct iphdr);
  else
   VAR_12 = sizeof(struct ipv6hdr);
  VAR_15 = FUNC_0(VAR_8, VAR_5, VAR_6,
        VAR_9, VAR_12);
  if (!VAR_15) {
   if (VAR_8->family == VAR_0) {
    VAR_11 = (struct iphdr *) VAR_9;
    VAR_14 = VAR_11->tos;
    if (VAR_14 != 0)
     FUNC_2(VAR_8, VAR_3, VAR_2,
             &VAR_14, sizeof(VAR_14));
   } else {
    VAR_10 = (struct ipv6hdr *) VAR_9;
    VAR_14 = ((VAR_10->priority) << 4 |
           (VAR_10->flow_lbl[0]) >> 4);
    if (VAR_14)
     FUNC_2(VAR_8, VAR_4,
             VAR_1,
             &VAR_14, sizeof(VAR_14));
   }
   VAR_15 = 0;
  }
  break;
 default:
  VAR_15 = -1;
 }



 VAR_8->reply = VAR_15;
 return 1;
}
