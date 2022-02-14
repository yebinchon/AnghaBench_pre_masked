
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tnl_ptk_info {scalar_t__ proto; int hdr_len; void* key; void* seq; int flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct gre_base_hdr {int flags; scalar_t__ protocol; } ;
struct erspan_base_hdr {int dummy; } ;
typedef void* __be32 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct erspan_base_hdr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct sk_buff *VAR_11, struct tnl_ptk_info *VAR_12,
       bool *VAR_13, __be16 VAR_14, int VAR_15)
{
 const struct gre_base_hdr *VAR_16;
 __be32 *VAR_17;
 int VAR_18;

 if (FUNC_8(!FUNC_5(VAR_11, VAR_15 + sizeof(struct gre_base_hdr))))
  return -VAR_0;

 VAR_16 = (struct gre_base_hdr *)(VAR_11->data + VAR_15);
 if (FUNC_8(VAR_16->flags & (VAR_8 | VAR_6)))
  return -VAR_0;

 VAR_12->flags = FUNC_3(VAR_16->flags);
 VAR_18 = FUNC_2(VAR_12->flags);

 if (!FUNC_5(VAR_11, VAR_15 + VAR_18))
  return -VAR_0;

 VAR_16 = (struct gre_base_hdr *)(VAR_11->data + VAR_15);
 VAR_12->proto = VAR_16->protocol;

 VAR_17 = (__be32 *)(VAR_16 + 1);
 if (VAR_16->flags & VAR_4) {
  if (!FUNC_6(VAR_11)) {
   FUNC_7(VAR_11, VAR_9,
       VAR_10);
  } else if (VAR_13) {
   *VAR_13 = 1;
   return -VAR_0;
  }

  VAR_17++;
 }

 if (VAR_16->flags & VAR_5) {
  VAR_12->key = *VAR_17;
  VAR_17++;
 } else {
  VAR_12->key = 0;
 }
 if (FUNC_8(VAR_16->flags & VAR_7)) {
  VAR_12->seq = *VAR_17;
  VAR_17++;
 } else {
  VAR_12->seq = 0;
 }




 if (VAR_16->flags == 0 && VAR_12->proto == FUNC_4(VAR_3)) {
  VAR_12->proto = VAR_14;
  if ((*(u8 *)VAR_17 & 0xF0) != 0x40)
   VAR_18 += 4;
 }
 VAR_12->hdr_len = VAR_18;





 if (VAR_16->protocol == FUNC_4(VAR_1) ||
     VAR_16->protocol == FUNC_4(VAR_2)) {
  struct erspan_base_hdr *VAR_19;

  if (!FUNC_5(VAR_11, VAR_15 + VAR_18 + sizeof(*VAR_19)))
   return -VAR_0;

  VAR_19 = (struct erspan_base_hdr *)VAR_17;
  VAR_12->key = FUNC_0(FUNC_1(VAR_19));
 }

 return VAR_18;
}
