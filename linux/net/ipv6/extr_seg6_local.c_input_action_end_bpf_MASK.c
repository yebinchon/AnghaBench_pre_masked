
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int prog; } ;
struct seg6_local_lwt {TYPE_1__ bpf; } ;
struct seg6_bpf_srh_state {int hdrlen; int valid; struct ipv6_sr_hdr* srh; } ;
struct ipv6_sr_hdr {int hdrlen; } ;
struct TYPE_4__ {int daddr; } ;





 int VAR_0 ;
 int FUNC_0 (struct ipv6_sr_hdr*,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct ipv6_sr_hdr* FUNC_4 (struct sk_buff*) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_13 (struct sk_buff*,int *,int ) ;
 struct seg6_bpf_srh_state* FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_2,
    struct seg6_local_lwt *VAR_3)
{
 struct seg6_bpf_srh_state *VAR_4 =
  FUNC_14(&VAR_1);
 struct ipv6_sr_hdr *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_2);
 if (!VAR_5) {
  FUNC_6(VAR_2);
  return -VAR_0;
 }
 FUNC_0(VAR_5, &FUNC_5(VAR_2)->daddr);




 FUNC_8();
 VAR_4->srh = VAR_5;
 VAR_4->hdrlen = VAR_5->hdrlen << 3;
 VAR_4->valid = 1;

 FUNC_10();
 FUNC_1(VAR_2);
 VAR_6 = FUNC_2(VAR_3->bpf.prog, VAR_2);
 FUNC_11();

 switch (VAR_6) {
 case 129:
 case 128:
  break;
 case 130:
  goto drop;
 default:
  FUNC_7("bpf-seg6local: Illegal return value %u\n", VAR_6);
  goto drop;
 }

 if (VAR_4->srh && !FUNC_12(VAR_2))
  goto drop;

 FUNC_9();
 if (VAR_6 != 128)
  FUNC_13(VAR_2, ((void*)0), 0);

 return FUNC_3(VAR_2);

drop:
 FUNC_9();
 FUNC_6(VAR_2);
 return -VAR_0;
}
