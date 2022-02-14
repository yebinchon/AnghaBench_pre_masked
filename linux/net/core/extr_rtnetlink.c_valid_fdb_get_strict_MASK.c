
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ndmsg {int ndm_flags; int ndm_ifindex; scalar_t__ ndm_type; scalar_t__ ndm_state; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nlattr*,int *,struct netlink_ext_ack*) ;
 int VAR_5 ;
 int* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 struct ndmsg* FUNC_5 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_8(const struct nlmsghdr *VAR_6,
    struct nlattr **VAR_7, u8 *VAR_8,
    int *VAR_9, int *VAR_10, u8 **VAR_11,
    u16 *VAR_12, struct netlink_ext_ack *VAR_13)
{
 struct ndmsg *VAR_14;
 int VAR_15, VAR_16;

 if (VAR_6->nlmsg_len < FUNC_6(sizeof(*VAR_14))) {
  FUNC_0(VAR_13, "Invalid header for fdb get request");
  return -VAR_0;
 }

 VAR_14 = FUNC_5(VAR_6);
 if (VAR_14->ndm_pad1 || VAR_14->ndm_pad2 || VAR_14->ndm_state ||
     VAR_14->ndm_type) {
  FUNC_0(VAR_13, "Invalid values in header for fdb get request");
  return -VAR_0;
 }

 if (VAR_14->ndm_flags & ~(VAR_3 | VAR_4)) {
  FUNC_0(VAR_13, "Invalid flags in header for fdb get request");
  return -VAR_0;
 }

 VAR_15 = FUNC_7(VAR_6, sizeof(struct ndmsg), VAR_7,
         VAR_2, VAR_5, VAR_13);
 if (VAR_15 < 0)
  return VAR_15;

 *VAR_8 = VAR_14->ndm_flags;
 *VAR_10 = VAR_14->ndm_ifindex;
 for (VAR_16 = 0; VAR_16 <= VAR_2; ++VAR_16) {
  if (!VAR_7[VAR_16])
   continue;

  switch (VAR_16) {
  case 130:
   *VAR_9 = FUNC_3(VAR_7[VAR_16]);
   break;
  case 131:
   if (FUNC_4(VAR_7[VAR_16]) != VAR_1) {
    FUNC_0(VAR_13, "Invalid address in fdb get request");
    return -VAR_0;
   }
   *VAR_11 = FUNC_2(VAR_7[VAR_16]);
   break;
  case 129:
   VAR_15 = FUNC_1(VAR_7[VAR_16], VAR_12, VAR_13);
   if (VAR_15)
    return VAR_15;
   break;
  case 128:
   break;
  default:
   FUNC_0(VAR_13, "Unsupported attribute in fdb get request");
   return -VAR_0;
  }
 }

 return 0;
}
