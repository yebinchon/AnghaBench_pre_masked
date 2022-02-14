
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct dst_metrics {int refcnt; int metrics; } ;


 int VAR_0 ;
 struct dst_metrics* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net*,struct nlattr*,int,int ,struct netlink_ext_ack*) ;
 int FUNC_2 (struct dst_metrics*) ;
 struct dst_metrics* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int) ;

struct dst_metrics *FUNC_6(struct net *VAR_3, struct nlattr *VAR_4,
     int VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 struct dst_metrics *VAR_7;
 int VAR_8;

 if (!VAR_4)
  return (struct dst_metrics *)&VAR_2;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (FUNC_5(!VAR_7))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7->metrics,
     VAR_6);
 if (!VAR_8) {
  FUNC_4(&VAR_7->refcnt, 1);
 } else {
  FUNC_2(VAR_7);
  VAR_7 = FUNC_0(VAR_8);
 }

 return VAR_7;
}
