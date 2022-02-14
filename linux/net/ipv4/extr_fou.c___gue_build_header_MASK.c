
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct sk_buff {scalar_t__ ip_summed; size_t csum_offset; scalar_t__ encapsulation; scalar_t__ data; int dev; } ;
struct ip_tunnel_encap {int flags; scalar_t__ sport; } ;
struct guehdr {size_t hlen; int flags; int proto_ctype; scalar_t__ version; scalar_t__ control; } ;
typedef int __be32 ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct sk_buff*,int) ;
 size_t FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,size_t) ;
 int FUNC_6 (int ,struct sk_buff*,int ,int ,int) ;

int FUNC_7(struct sk_buff *VAR_9, struct ip_tunnel_encap *VAR_10,
         u8 *VAR_11, __be16 *VAR_12, int VAR_13)
{
 struct guehdr *VAR_14;
 size_t VAR_15, VAR_16 = 0;
 void *VAR_17;
 bool VAR_18 = 0;
 int VAR_19;

 if ((VAR_10->flags & VAR_8) &&
     VAR_9->ip_summed == VAR_1) {
  VAR_16 += VAR_6;
  VAR_13 |= VAR_7;
  VAR_18 = 1;
 }

 VAR_16 += VAR_18 ? VAR_4 : 0;

 VAR_19 = FUNC_2(VAR_9, VAR_13);
 if (VAR_19)
  return VAR_19;


 *VAR_12 = VAR_10->sport ? : FUNC_6(FUNC_0(VAR_9->dev),
      VAR_9, 0, 0, 0);

 VAR_15 = sizeof(struct guehdr) + VAR_16;

 FUNC_5(VAR_9, VAR_15);

 VAR_14 = (struct guehdr *)VAR_9->data;

 VAR_14->control = 0;
 VAR_14->version = 0;
 VAR_14->hlen = VAR_16 >> 2;
 VAR_14->flags = 0;
 VAR_14->proto_ctype = *VAR_11;

 VAR_17 = &VAR_14[1];

 if (VAR_18) {
  __be32 *VAR_20 = VAR_17;

  VAR_14->flags |= VAR_3;
  *VAR_20 = 0;
  VAR_17 += VAR_4;

  if (VAR_13 & VAR_7) {
   u16 VAR_21 = FUNC_3(VAR_9);
   __be16 *VAR_22 = VAR_17;

   if (VAR_21 < VAR_15)
    return -VAR_2;

   VAR_21 -= VAR_15;
   VAR_22[0] = FUNC_1(VAR_21);
   VAR_22[1] = FUNC_1(VAR_21 + VAR_9->csum_offset);

   if (!FUNC_4(VAR_9)) {
    VAR_9->ip_summed = VAR_0;
    VAR_9->encapsulation = 0;
   }

   *VAR_20 |= VAR_5;
   VAR_17 += VAR_6;
  }

 }

 return 0;
}
