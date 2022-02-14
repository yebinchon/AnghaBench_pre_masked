
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct mpls_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct mpls_dev*,int ,int ,int,int ,int) ;
 int FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_6 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct net *VAR_4, int VAR_5,
     int VAR_6, struct mpls_dev *VAR_7)
{
 struct sk_buff *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_8 = FUNC_4(FUNC_3(VAR_6), VAR_2);
 if (!VAR_8)
  goto errout;

 VAR_9 = FUNC_2(VAR_8, VAR_7, 0, 0, VAR_5, 0, VAR_6);
 if (VAR_9 < 0) {

  FUNC_0(VAR_9 == -VAR_0);
  FUNC_1(VAR_8);
  goto errout;
 }

 FUNC_5(VAR_8, VAR_4, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 if (VAR_9 < 0)
  FUNC_6(VAR_4, VAR_3, VAR_9);
}
