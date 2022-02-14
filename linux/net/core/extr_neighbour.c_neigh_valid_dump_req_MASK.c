
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct neigh_dump_filter {void* master_idx; void* dev_idx; } ;
struct ndmsg {int ndm_flags; scalar_t__ ndm_type; scalar_t__ ndm_state; scalar_t__ ndm_ifindex; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (struct nlattr*) ;
 struct ndmsg* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_6(const struct nlmsghdr *VAR_4,
    bool VAR_5,
    struct neigh_dump_filter *VAR_6,
    struct netlink_ext_ack *VAR_7)
{
 struct nlattr *VAR_8[VAR_1 + 1];
 int VAR_9, VAR_10;

 if (VAR_5) {
  struct ndmsg *VAR_11;

  if (VAR_4->nlmsg_len < FUNC_3(sizeof(*VAR_11))) {
   FUNC_0(VAR_7, "Invalid header for neighbor dump request");
   return -VAR_0;
  }

  VAR_11 = FUNC_2(VAR_4);
  if (VAR_11->ndm_pad1 || VAR_11->ndm_pad2 || VAR_11->ndm_ifindex ||
      VAR_11->ndm_state || VAR_11->ndm_type) {
   FUNC_0(VAR_7, "Invalid values in header for neighbor dump request");
   return -VAR_0;
  }

  if (VAR_11->ndm_flags & ~VAR_2) {
   FUNC_0(VAR_7, "Invalid flags in header for neighbor dump request");
   return -VAR_0;
  }

  VAR_9 = FUNC_5(VAR_4, sizeof(struct ndmsg),
          VAR_8, VAR_1, VAR_3,
          VAR_7);
 } else {
  VAR_9 = FUNC_4(VAR_4, sizeof(struct ndmsg), VAR_8,
          VAR_1, VAR_3, VAR_7);
 }
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 <= VAR_1; ++VAR_10) {
  if (!VAR_8[VAR_10])
   continue;


  switch (VAR_10) {
  case 129:
   VAR_6->dev_idx = FUNC_1(VAR_8[VAR_10]);
   break;
  case 128:
   VAR_6->master_idx = FUNC_1(VAR_8[VAR_10]);
   break;
  default:
   if (VAR_5) {
    FUNC_0(VAR_7, "Unsupported attribute in neighbor dump request");
    return -VAR_0;
   }
  }
 }

 return 0;
}
