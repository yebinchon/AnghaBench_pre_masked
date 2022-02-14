
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrmu_sadhinfo {int sadhcnt; int sadhmcnt; } ;
struct xfrmk_sadinfo {int sadcnt; int sadhcnt; int sadhmcnt; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
typedef int sh ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct xfrmu_sadhinfo*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 int * FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_6 (struct net*,struct xfrmk_sadinfo*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4, struct net *VAR_5,
    u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct xfrmk_sadinfo VAR_9;
 struct xfrmu_sadhinfo VAR_10;
 struct nlmsghdr *VAR_11;
 int VAR_12;
 u32 *VAR_13;

 VAR_11 = FUNC_5(VAR_4, VAR_6, VAR_7, VAR_3, sizeof(u32), 0);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_11);
 *VAR_13 = VAR_8;
 FUNC_6(VAR_5, &VAR_9);

 VAR_10.sadhmcnt = VAR_9.sadhmcnt;
 VAR_10.sadhcnt = VAR_9.sadhcnt;

 VAR_12 = FUNC_1(VAR_4, VAR_1, VAR_9.sadcnt);
 if (!VAR_12)
  VAR_12 = FUNC_0(VAR_4, VAR_2, sizeof(VAR_10), &VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_4, VAR_11);
  return VAR_12;
 }

 FUNC_4(VAR_4, VAR_11);
 return 0;
}
