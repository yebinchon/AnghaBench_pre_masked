
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int nexthdr; int payload_len; } ;
struct ipv6_opt_hdr {int nexthdr; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct ipv6_opt_hdr*) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ipv6_opt_hdr*,unsigned int,unsigned int*) ;
 int FUNC_7 (struct sk_buff*,unsigned int,unsigned int) ;
 int FUNC_8 (struct sk_buff*,unsigned int,unsigned int) ;
 int FUNC_9 (struct sk_buff*,unsigned int,unsigned int,int) ;
 int FUNC_10 (struct sk_buff*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_5, u32 VAR_6)
{
 struct ipv6hdr *VAR_7;
 struct ipv6_opt_hdr *VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11;
 int VAR_12;
 u8 VAR_13;

 VAR_12 = FUNC_5(VAR_5);

 VAR_9 = sizeof(*VAR_7);

 if (!FUNC_3(VAR_5, VAR_9 + VAR_12))
  goto fail;

 VAR_7 = FUNC_0(VAR_5);

 VAR_11 = FUNC_2(VAR_7->payload_len);
 VAR_13 = VAR_7->nexthdr;

 do {
  switch (VAR_13) {
  case 130:
   goto ignore_skb;
  case 128:
  case 129:
  case 131:
   if (!FUNC_3(VAR_5, VAR_9 + sizeof(*VAR_8) + VAR_12))
    goto fail;
   VAR_8 = (void *)(FUNC_4(VAR_5) + VAR_9);
   VAR_10 = FUNC_1(VAR_8);
   if (!FUNC_3(VAR_5, VAR_9 + VAR_10 + VAR_12))
    goto fail;
   VAR_8 = (void *)(FUNC_4(VAR_5) + VAR_9);
   if ((VAR_13 == 129) &&
       !(FUNC_6(VAR_8, VAR_10, &VAR_11)))
    goto fail;
   VAR_13 = VAR_8->nexthdr;
   VAR_9 += VAR_10;
   break;
  case 136:
   if (VAR_6 & VAR_0)
    if (!FUNC_7(VAR_5,
       VAR_9, VAR_11 + sizeof(*VAR_7)))
     goto fail;
   goto done;
  case 134:
   if (VAR_6 & VAR_2)
    if (!FUNC_8(VAR_5,
             VAR_9, VAR_11 + sizeof(*VAR_7)))
     goto fail;
   goto done;
  case 133:
   if (VAR_6 & VAR_3)
    if (!FUNC_9(VAR_5, VAR_9,
             VAR_11 + sizeof(*VAR_7), 0))
     goto fail;
   goto done;
  case 132:
   if (VAR_6 & VAR_4)
    if (!FUNC_9(VAR_5, VAR_9,
             VAR_11 + sizeof(*VAR_7), 1))
     goto fail;
   goto done;
  case 135:
   if ((VAR_6 & VAR_1) &&
       !FUNC_10(VAR_5, VAR_9, VAR_11 + sizeof(*VAR_7)))
    goto fail;
   goto done;
  default:
   goto ignore_skb;
  }
 } while (FUNC_3(VAR_5, VAR_9 + 1 + VAR_12));

done:
ignore_skb:
 return 1;

fail:
 return 0;
}
