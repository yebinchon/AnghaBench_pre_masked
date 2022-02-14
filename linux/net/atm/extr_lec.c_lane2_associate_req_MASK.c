
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct sk_buff {void* len; } ;
struct net_device {int dev_addr; } ;
struct lec_priv {void* sizeoftlvs; int * tlvs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (void*,int ) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int const*,void*,int ) ;
 int VAR_2 ;
 struct lec_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct lec_priv*,int ,int *,int *,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int const*,void*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, const u8 *VAR_4,
          const u8 *VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct sk_buff *VAR_8;
 struct lec_priv *VAR_9 = FUNC_4(VAR_3);

 if (!FUNC_1(VAR_4, VAR_3->dev_addr))
  return 0;

 FUNC_2(VAR_9->tlvs);

 VAR_9->tlvs = FUNC_3(VAR_5, VAR_6, VAR_1);
 if (VAR_9->tlvs == ((void*)0))
  return 0;
 VAR_9->sizeoftlvs = VAR_6;

 VAR_8 = FUNC_0(VAR_6, VAR_0);
 if (VAR_8 == ((void*)0))
  return 0;
 VAR_8->len = VAR_6;
 FUNC_7(VAR_8, VAR_5, VAR_6);
 VAR_7 = FUNC_6(VAR_9, VAR_2, ((void*)0), ((void*)0), VAR_8);
 if (VAR_7 != 0)
  FUNC_5("lec.c: lane2_associate_req() failed\n");




 return 1;
}
