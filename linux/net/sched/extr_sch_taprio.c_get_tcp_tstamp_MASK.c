
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {int tk_offset; } ;
struct sk_buff {int skb_mstamp_ns; } ;
struct ipv6hdr {int version; scalar_t__ nexthdr; } ;
struct iphdr {int ihl; scalar_t__ protocol; } ;
typedef int ktime_t ;
typedef int _ipv6h ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff*,unsigned int,int,struct ipv6hdr*) ;
 unsigned int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static ktime_t FUNC_3(struct taprio_sched *VAR_2, struct sk_buff *VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_3);
 const struct ipv6hdr *VAR_5;
 const struct iphdr *VAR_6;
 struct ipv6hdr VAR_7;

 VAR_5 = FUNC_1(VAR_3, VAR_4, sizeof(VAR_7), &VAR_7);
 if (!VAR_5)
  return 0;

 if (VAR_5->version == 4) {
  VAR_6 = (struct iphdr *)VAR_5;
  VAR_4 += VAR_6->ihl * 4;




  if (VAR_6->protocol == VAR_0) {
   VAR_5 = FUNC_1(VAR_3, VAR_4,
         sizeof(VAR_7), &VAR_7);

   if (!VAR_5 || VAR_5->nexthdr != VAR_1)
    return 0;
  } else if (VAR_6->protocol != VAR_1) {
   return 0;
  }
 } else if (VAR_5->version == 6 && VAR_5->nexthdr != VAR_1) {
  return 0;
 }

 return FUNC_0(VAR_3->skb_mstamp_ns, VAR_2->tk_offset);
}
