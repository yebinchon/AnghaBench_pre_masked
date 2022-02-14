
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct iphdr {int frag_off; int protocol; int ihl; int tot_len; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int,int ) ;
 int FUNC_8 (struct sk_buff*,int,int ) ;
 int FUNC_9 (struct sk_buff*,int,int ) ;
 int FUNC_10 (struct sk_buff*,int,int ,int) ;
 int FUNC_11 (struct sk_buff*,int,int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_8, u32 VAR_9)
{
 const struct iphdr *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_8);

 if (!FUNC_4(VAR_8, sizeof(*VAR_10) + VAR_11))
  goto fail;

 VAR_10 = FUNC_1(VAR_8);

 switch (VAR_10->frag_off & FUNC_0(VAR_0) ? 0 : VAR_10->protocol) {
 case 133:
  if (VAR_9 & VAR_1)
   if (!FUNC_7(VAR_8, VAR_10->ihl * 4,
      FUNC_3(VAR_10->tot_len)))
    goto fail;
  break;
 case 132:
  if (VAR_9 & VAR_2)
   if (!FUNC_8(VAR_8, VAR_10->ihl * 4,
      FUNC_3(VAR_10->tot_len)))
    goto fail;
  break;
 case 130:
  if (VAR_9 & VAR_5)
   if (!FUNC_9(VAR_8, VAR_10->ihl * 4,
            FUNC_3(VAR_10->tot_len)))
    goto fail;
  break;
 case 129:
  if (VAR_9 & VAR_6)
   if (!FUNC_10(VAR_8, VAR_10->ihl * 4,
            FUNC_3(VAR_10->tot_len), 0))
    goto fail;
  break;
 case 128:
  if (VAR_9 & VAR_7)
   if (!FUNC_10(VAR_8, VAR_10->ihl * 4,
            FUNC_3(VAR_10->tot_len), 1))
    goto fail;
  break;
 case 131:
  if ((VAR_9 & VAR_4) &&
      !FUNC_11(VAR_8, VAR_10->ihl * 4, FUNC_3(VAR_10->tot_len)))
   goto fail;
  break;
 }

 if (VAR_9 & VAR_3) {
  if (FUNC_6(VAR_8, sizeof(*VAR_10) + VAR_11))
   goto fail;

  FUNC_2(FUNC_1(VAR_8));
 }

 return 1;

fail:
 return 0;
}
