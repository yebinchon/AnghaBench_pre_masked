
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ sk; } ;
struct ipv6hdr {int hop_limit; int payload_len; } ;
struct iphdr {int frag_off; int tot_len; int ttl; } ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct iphdr*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct iphdr*) ;
 int FUNC_8 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 unsigned int FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,unsigned int) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *
FUNC_16(struct sk_buff *VAR_5, int VAR_6,
      unsigned int VAR_7, __u8 *VAR_8,
      __u32 *VAR_9, __u8 *VAR_10, __u8 *VAR_11,
      __be16 *VAR_12)
{
 struct sk_buff *VAR_13 = ((void*)0);
 struct iphdr *VAR_14 = ((void*)0);
 __u8 VAR_15;




 FUNC_6(VAR_5);

 if (FUNC_13(VAR_5) < VAR_7 || FUNC_12(VAR_5)) {
  VAR_13 = FUNC_14(VAR_5, VAR_7);
  if (!VAR_13)
   goto error;
  if (VAR_5->sk)
   FUNC_15(VAR_13, VAR_5->sk);
  FUNC_2(VAR_5);
  VAR_5 = VAR_13;
 }
 {
  VAR_14 = FUNC_4(VAR_5);

  if (VAR_12)
   *VAR_12 = (VAR_14->frag_off & FUNC_3(VAR_4));
  *VAR_8 = VAR_2;


  FUNC_5(VAR_14);
  VAR_15 = FUNC_7(VAR_14);
  *VAR_11 = VAR_14->ttl;
  if (VAR_9)
   *VAR_9 = FUNC_11(VAR_14->tot_len);
 }


 *VAR_10 = FUNC_1(VAR_15, VAR_15);

 return VAR_5;
error:
 FUNC_10(VAR_5);
 return FUNC_0(-VAR_1);
}
