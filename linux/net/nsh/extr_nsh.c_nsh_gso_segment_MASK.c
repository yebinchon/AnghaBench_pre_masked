
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int network_header; int mac_header; unsigned int mac_len; scalar_t__ protocol; struct sk_buff* next; } ;
typedef int netdev_features_t ;
typedef scalar_t__ __be16 ;
struct TYPE_3__ {int np; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 unsigned int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;
 int FUNC_8 (struct sk_buff*,scalar_t__,unsigned int,int,unsigned int) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_15(struct sk_buff *VAR_6,
           netdev_features_t VAR_7)
{
 struct sk_buff *VAR_8 = FUNC_0(-VAR_0);
 unsigned int VAR_9, VAR_10;
 __be16 VAR_11;
 int VAR_12;

 FUNC_11(VAR_6);

 VAR_12 = VAR_6->network_header - VAR_6->mac_header;
 VAR_10 = VAR_6->mac_len;

 if (FUNC_14(!FUNC_7(VAR_6, VAR_5)))
  goto out;
 VAR_9 = FUNC_6(FUNC_5(VAR_6));
 if (VAR_9 < VAR_5)
  goto out;
 if (FUNC_14(!FUNC_7(VAR_6, VAR_9)))
  goto out;

 VAR_11 = FUNC_13(FUNC_5(VAR_6)->np);
 if (!VAR_11)
  goto out;

 FUNC_2(VAR_6, VAR_9);

 FUNC_10(VAR_6);
 VAR_6->mac_len = VAR_11 == FUNC_4(VAR_3) ? VAR_1 : 0;
 VAR_6->protocol = VAR_11;

 VAR_7 &= VAR_4;
 VAR_8 = FUNC_9(VAR_6, VAR_7);
 if (FUNC_1(VAR_8)) {
  FUNC_8(VAR_6, FUNC_4(VAR_2), VAR_9,
         VAR_6->network_header - VAR_12,
         VAR_10);
  goto out;
 }

 for (VAR_6 = VAR_8; VAR_6; VAR_6 = VAR_6->next) {
  VAR_6->protocol = FUNC_4(VAR_2);
  FUNC_3(VAR_6, VAR_9);
  FUNC_12(VAR_6, -VAR_12);
  VAR_6->network_header = VAR_6->mac_header + VAR_10;
  VAR_6->mac_len = VAR_10;
 }

out:
 return VAR_8;
}
