
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ndmsg {int ndm_ifindex; scalar_t__ ndm_type; scalar_t__ ndm_flags; scalar_t__ ndm_state; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 struct ndmsg* FUNC_3 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int *,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_6(const struct nlmsghdr *VAR_2,
     int *VAR_3, int *VAR_4,
     struct netlink_ext_ack *VAR_5)
{
 struct nlattr *VAR_6[VAR_1 + 1];
 struct ndmsg *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2->nlmsg_len < FUNC_4(sizeof(*VAR_7))) {
  FUNC_0(VAR_5, "Invalid header for fdb dump request");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_2);
 if (VAR_7->ndm_pad1 || VAR_7->ndm_pad2 || VAR_7->ndm_state ||
     VAR_7->ndm_flags || VAR_7->ndm_type) {
  FUNC_0(VAR_5, "Invalid values in header for fdb dump request");
  return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_2, sizeof(struct ndmsg), VAR_6,
         VAR_1, ((void*)0), VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_4 = VAR_7->ndm_ifindex;
 for (VAR_9 = 0; VAR_9 <= VAR_1; ++VAR_9) {
  if (!VAR_6[VAR_9])
   continue;

  switch (VAR_9) {
  case 129:
   if (FUNC_2(VAR_6[VAR_9]) != sizeof(u32)) {
    FUNC_0(VAR_5, "Invalid IFINDEX attribute in fdb dump request");
    return -VAR_0;
   }
   *VAR_4 = FUNC_1(VAR_6[129]);
   break;
  case 128:
   if (FUNC_2(VAR_6[VAR_9]) != sizeof(u32)) {
    FUNC_0(VAR_5, "Invalid MASTER attribute in fdb dump request");
    return -VAR_0;
   }
   *VAR_3 = FUNC_1(VAR_6[128]);
   break;
  default:
   FUNC_0(VAR_5, "Unsupported attribute in fdb dump request");
   return -VAR_0;
  }
 }

 return 0;
}
