
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_hdr_fc {scalar_t__ dest_addr_mode; scalar_t__ source_addr_mode; int intra_pan; int version; scalar_t__ security_enabled; } ;
typedef struct ieee802154_hdr_fc u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ pan_id; } ;
struct ieee802154_hdr {int sec; TYPE_1__ source; TYPE_1__ dest; struct ieee802154_hdr_fc seq; struct ieee802154_hdr_fc fc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee802154_hdr_fc*,TYPE_1__*,int) ;
 int FUNC_1 (struct ieee802154_hdr_fc*,int *) ;
 int FUNC_2 (struct ieee802154_hdr_fc*,struct ieee802154_hdr_fc*,int) ;
 struct ieee802154_hdr_fc* FUNC_3 (struct sk_buff*,int) ;

int
FUNC_4(struct sk_buff *VAR_3, struct ieee802154_hdr *VAR_4)
{
 u8 VAR_5[VAR_2];
 int VAR_6 = 2;
 int VAR_7;
 struct ieee802154_hdr_fc *VAR_8 = &VAR_4->fc;

 VAR_5[VAR_6++] = VAR_4->seq;

 VAR_8->dest_addr_mode = VAR_4->dest.mode;

 VAR_7 = FUNC_0(VAR_5 + VAR_6, &VAR_4->dest, 0);
 if (VAR_7 < 0)
  return -VAR_0;
 VAR_6 += VAR_7;

 VAR_8->source_addr_mode = VAR_4->source.mode;

 if (VAR_4->source.pan_id == VAR_4->dest.pan_id &&
     VAR_4->dest.mode != VAR_1)
  VAR_8->intra_pan = 1;

 VAR_7 = FUNC_0(VAR_5 + VAR_6, &VAR_4->source, VAR_8->intra_pan);
 if (VAR_7 < 0)
  return -VAR_0;
 VAR_6 += VAR_7;

 if (VAR_8->security_enabled) {
  VAR_8->version = 1;

  VAR_7 = FUNC_1(VAR_5 + VAR_6, &VAR_4->sec);
  if (VAR_7 < 0)
   return -VAR_0;

  VAR_6 += VAR_7;
 }

 FUNC_2(VAR_5, VAR_8, 2);

 FUNC_2(FUNC_3(VAR_3, VAR_6), VAR_5, VAR_6);

 return VAR_6;
}
