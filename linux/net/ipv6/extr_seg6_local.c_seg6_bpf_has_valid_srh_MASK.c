
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct seg6_bpf_srh_state {int valid; int hdrlen; struct ipv6_sr_hdr* srh; } ;
struct ipv6_sr_hdr {int hdrlen; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipv6_sr_hdr*,int) ;
 struct seg6_bpf_srh_state* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

bool FUNC_3(struct sk_buff *VAR_1)
{
 struct seg6_bpf_srh_state *VAR_2 =
  FUNC_1(&VAR_0);
 struct ipv6_sr_hdr *VAR_3 = VAR_2->srh;

 if (FUNC_2(VAR_3 == ((void*)0)))
  return 0;

 if (FUNC_2(!VAR_2->valid)) {
  if ((VAR_2->hdrlen & 7) != 0)
   return 0;

  VAR_3->hdrlen = (u8)(VAR_2->hdrlen >> 3);
  if (!FUNC_0(VAR_3, (VAR_3->hdrlen + 1) << 3))
   return 0;

  VAR_2->valid = 1;
 }

 return 1;
}
