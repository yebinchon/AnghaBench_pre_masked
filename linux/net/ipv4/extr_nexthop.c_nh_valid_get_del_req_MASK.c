
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nhmsg {scalar_t__ nh_flags; scalar_t__ nh_scope; scalar_t__ resvd; scalar_t__ nh_protocol; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct nlattr*) ;
 struct nhmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct nlmsghdr *VAR_4, u32 *VAR_5,
    struct netlink_ext_ack *VAR_6)
{
 struct nhmsg *VAR_7 = FUNC_3(VAR_4);
 struct nlattr *VAR_8[VAR_1 + 1];
 int VAR_9, VAR_10;

 VAR_9 = FUNC_4(VAR_4, sizeof(*VAR_7), VAR_8, VAR_1, VAR_3,
     VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = -VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) {
  if (!VAR_8[VAR_10])
   continue;

  switch (VAR_10) {
  case 128:
   break;
  default:
   FUNC_1(VAR_6, VAR_8[VAR_10],
         "Unexpected attribute in request");
   goto out;
  }
 }
 if (VAR_7->nh_protocol || VAR_7->resvd || VAR_7->nh_scope || VAR_7->nh_flags) {
  FUNC_0(VAR_6, "Invalid values in header");
  goto out;
 }

 if (!VAR_8[128]) {
  FUNC_0(VAR_6, "Nexthop id is missing");
  goto out;
 }

 *VAR_5 = FUNC_2(VAR_8[128]);
 if (!(*VAR_5))
  FUNC_0(VAR_6, "Invalid nexthop id");
 else
  VAR_9 = 0;
out:
 return VAR_9;
}
