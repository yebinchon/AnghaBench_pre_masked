
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct net* FUNC_1 (struct net_device*) ;
 size_t FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,struct net*,int,int ,int ,unsigned int,int ,int ,int ,int*,int,int,int ) ;
 int FUNC_6 (struct net*,int ,int) ;

struct sk_buff *FUNC_7(int VAR_3, struct net_device *VAR_4,
           unsigned int VAR_5,
           u32 VAR_6, gfp_t VAR_7, int *VAR_8,
           int VAR_9)
{
 struct net *VAR_10 = FUNC_1(VAR_4);
 struct sk_buff *VAR_11;
 int VAR_12 = -VAR_1;
 size_t VAR_13;

 VAR_11 = FUNC_4((VAR_13 = FUNC_2(VAR_4, 0)), VAR_7);
 if (VAR_11 == ((void*)0))
  goto errout;

 VAR_12 = FUNC_5(VAR_11, VAR_4, FUNC_1(VAR_4),
          VAR_3, 0, 0, VAR_5, 0, 0, VAR_6,
          VAR_8, VAR_9, -1, VAR_7);
 if (VAR_12 < 0) {

  FUNC_0(VAR_12 == -VAR_0);
  FUNC_3(VAR_11);
  goto errout;
 }
 return VAR_11;
errout:
 if (VAR_12 < 0)
  FUNC_6(VAR_10, VAR_2, VAR_12);
 return ((void*)0);
}
