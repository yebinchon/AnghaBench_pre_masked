
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nhmsg {scalar_t__ nh_flags; scalar_t__ nh_scope; scalar_t__ resvd; scalar_t__ nh_protocol; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_callback {struct netlink_ext_ack* extack; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct nlattr*) ;
 struct nhmsg* FUNC_2 (struct nlmsghdr const*) ;
 int FUNC_3 (struct nlmsghdr const*,int,struct nlattr**,int,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(const struct nlmsghdr *VAR_4, int *VAR_5,
        int *VAR_6, bool *VAR_7,
        struct netlink_callback *VAR_8)
{
 struct netlink_ext_ack *VAR_9 = VAR_8->extack;
 struct nlattr *VAR_10[VAR_2 + 1];
 struct nhmsg *VAR_11;
 int VAR_12, VAR_13;
 u32 VAR_14;

 VAR_12 = FUNC_3(VAR_4, sizeof(*VAR_11), VAR_10, VAR_2, VAR_3,
     ((void*)0));
 if (VAR_12 < 0)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 <= VAR_2; ++VAR_13) {
  if (!VAR_10[VAR_13])
   continue;

  switch (VAR_13) {
  case 128:
   VAR_14 = FUNC_1(VAR_10[VAR_13]);
   if (VAR_14 > VAR_1) {
    FUNC_0(VAR_9, "Invalid device index");
    return -VAR_0;
   }
   *VAR_5 = VAR_14;
   break;
  case 129:
   VAR_14 = FUNC_1(VAR_10[VAR_13]);
   if (VAR_14 > VAR_1) {
    FUNC_0(VAR_9, "Invalid master device index");
    return -VAR_0;
   }
   *VAR_6 = VAR_14;
   break;
  case 130:
   *VAR_7 = 1;
   break;
  default:
   FUNC_0(VAR_9, "Unsupported attribute in dump request");
   return -VAR_0;
  }
 }

 VAR_11 = FUNC_2(VAR_4);
 if (VAR_11->nh_protocol || VAR_11->resvd || VAR_11->nh_scope || VAR_11->nh_flags) {
  FUNC_0(VAR_9, "Invalid values in header for nexthop dump request");
  return -VAR_0;
 }

 return 0;
}
