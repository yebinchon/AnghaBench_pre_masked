
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ addr_len; int flags; } ;
struct net {int dummy; } ;
struct mpls_route {int dummy; } ;
struct mpls_nh {scalar_t__ nh_via_table; scalar_t__ nh_via_alen; int nh_flags; int nh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct net*,struct mpls_route*,struct mpls_nh*,int) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_8, struct mpls_route *VAR_9,
         struct mpls_nh *VAR_10, int VAR_11)
{
 struct net_device *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_1;

 VAR_12 = FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11);
 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_1(VAR_12);
  VAR_12 = ((void*)0);
  goto errout;
 }


 VAR_13 = -VAR_0;
 if (!FUNC_5(VAR_12))
  goto errout;

 if ((VAR_10->nh_via_table == VAR_5) &&
     (VAR_12->addr_len != VAR_10->nh_via_alen))
  goto errout;

 FUNC_2(VAR_10->nh_dev, VAR_12);

 if (!(VAR_12->flags & VAR_4)) {
  VAR_10->nh_flags |= VAR_6;
 } else {
  unsigned int VAR_14;

  VAR_14 = FUNC_3(VAR_12);
  if (!(VAR_14 & (VAR_3 | VAR_2)))
   VAR_10->nh_flags |= VAR_7;
 }

 return 0;

errout:
 return VAR_13;
}
