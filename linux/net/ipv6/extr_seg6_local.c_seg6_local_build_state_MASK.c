
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_local_lwt {struct lwtunnel_state* srh; int headroom; int action; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct lwtunnel_state {int headroom; int flags; int type; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lwtunnel_state*) ;
 struct lwtunnel_state* FUNC_1 (int) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int FUNC_4 (struct nlattr**,struct seg6_local_lwt*) ;
 struct seg6_local_lwt* FUNC_5 (struct lwtunnel_state*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct nlattr *VAR_8, unsigned int VAR_9,
      const void *VAR_10, struct lwtunnel_state **VAR_11,
      struct netlink_ext_ack *VAR_12)
{
 struct nlattr *VAR_13[VAR_6 + 1];
 struct lwtunnel_state *VAR_14;
 struct seg6_local_lwt *VAR_15;
 int VAR_16;

 if (VAR_9 != VAR_0)
  return -VAR_1;

 VAR_16 = FUNC_3(VAR_13, VAR_6, VAR_8,
       VAR_7, VAR_12);

 if (VAR_16 < 0)
  return VAR_16;

 if (!VAR_13[VAR_5])
  return -VAR_1;

 VAR_14 = FUNC_1(sizeof(*VAR_15));
 if (!VAR_14)
  return -VAR_2;

 VAR_15 = FUNC_5(VAR_14);
 VAR_15->action = FUNC_2(VAR_13[VAR_5]);

 VAR_16 = FUNC_4(VAR_13, VAR_15);
 if (VAR_16 < 0)
  goto out_free;

 VAR_14->type = VAR_3;
 VAR_14->flags = VAR_4;
 VAR_14->headroom = VAR_15->headroom;

 *VAR_11 = VAR_14;

 return 0;

out_free:
 FUNC_0(VAR_15->srh);
 FUNC_0(VAR_14);
 return VAR_16;
}
