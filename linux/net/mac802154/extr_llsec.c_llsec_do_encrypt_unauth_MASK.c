
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int mac_len; } ;
struct scatterlist {int dummy; } ;
struct mac802154_llsec_key {int tfm0; } ;
struct TYPE_2__ {int hwaddr; } ;
struct mac802154_llsec {TYPE_1__ params; } ;
struct ieee802154_hdr {int sec; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct scatterlist*,unsigned char*,int) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int *,int *) ;
 int FUNC_7 (int ,struct scatterlist*,struct scatterlist*,int,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_1, const struct mac802154_llsec *VAR_2,
   const struct ieee802154_hdr *VAR_3,
   struct mac802154_llsec_key *VAR_4)
{
 u8 VAR_5[16];
 struct scatterlist VAR_6;
 FUNC_0(VAR_0, VAR_4->tfm0);
 int VAR_7, VAR_8;
 unsigned char *VAR_9;

 FUNC_2(VAR_5, VAR_2->params.hwaddr, &VAR_3->sec);

 VAR_9 = FUNC_4(VAR_1) + VAR_1->mac_len;
 VAR_8 = FUNC_5(VAR_1) - VAR_9;
 FUNC_3(&VAR_6, VAR_9, VAR_8);

 FUNC_8(VAR_0, VAR_4->tfm0);
 FUNC_6(VAR_0, 0, ((void*)0), ((void*)0));
 FUNC_7(VAR_0, &VAR_6, &VAR_6, VAR_8, VAR_5);
 VAR_7 = FUNC_1(VAR_0);
 FUNC_9(VAR_0);
 return VAR_7;
}
