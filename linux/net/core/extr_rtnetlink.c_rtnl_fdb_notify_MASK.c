
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int *,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_6 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_4, u8 *VAR_5, u16 VAR_6, int VAR_7,
       u16 VAR_8)
{
 struct net *VAR_9 = FUNC_0(VAR_4);
 struct sk_buff *VAR_10;
 int VAR_11 = -VAR_0;

 VAR_10 = FUNC_2(FUNC_4(), VAR_1);
 if (!VAR_10)
  goto errout;

 VAR_11 = FUNC_3(VAR_10, VAR_4, VAR_5, VAR_6,
          0, 0, VAR_7, VAR_2, 0, VAR_8);
 if (VAR_11 < 0) {
  FUNC_1(VAR_10);
  goto errout;
 }

 FUNC_5(VAR_10, VAR_9, 0, VAR_3, ((void*)0), VAR_1);
 return;
errout:
 FUNC_6(VAR_9, VAR_3, VAR_11);
}
