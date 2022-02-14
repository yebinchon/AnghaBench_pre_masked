
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct neigh_table {scalar_t__ key_len; } ;
struct ndmsg {int ndm_flags; int ndm_ifindex; int ndm_family; scalar_t__ ndm_type; scalar_t__ ndm_state; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct neigh_table* FUNC_1 (int ) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 struct ndmsg* FUNC_4 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_7(const struct nlmsghdr *VAR_5,
          struct neigh_table **VAR_6,
          void **VAR_7, int *VAR_8, u8 *VAR_9,
          struct netlink_ext_ack *VAR_10)
{
 struct nlattr *VAR_11[VAR_2 + 1];
 struct ndmsg *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_5->nlmsg_len < FUNC_5(sizeof(*VAR_12))) {
  FUNC_0(VAR_10, "Invalid header for neighbor get request");
  return -VAR_1;
 }

 VAR_12 = FUNC_4(VAR_5);
 if (VAR_12->ndm_pad1 || VAR_12->ndm_pad2 || VAR_12->ndm_state ||
     VAR_12->ndm_type) {
  FUNC_0(VAR_10, "Invalid values in header for neighbor get request");
  return -VAR_1;
 }

 if (VAR_12->ndm_flags & ~VAR_3) {
  FUNC_0(VAR_10, "Invalid flags in header for neighbor get request");
  return -VAR_1;
 }

 VAR_13 = FUNC_6(VAR_5, sizeof(struct ndmsg), VAR_11,
         VAR_2, VAR_4, VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 *VAR_9 = VAR_12->ndm_flags;
 *VAR_8 = VAR_12->ndm_ifindex;
 *VAR_6 = FUNC_1(VAR_12->ndm_family);
 if (*VAR_6 == ((void*)0)) {
  FUNC_0(VAR_10, "Unsupported family in header for neighbor get request");
  return -VAR_0;
 }

 for (VAR_14 = 0; VAR_14 <= VAR_2; ++VAR_14) {
  if (!VAR_11[VAR_14])
   continue;

  switch (VAR_14) {
  case 128:
   if (FUNC_3(VAR_11[VAR_14]) != (int)(*VAR_6)->key_len) {
    FUNC_0(VAR_10, "Invalid network address in neighbor get request");
    return -VAR_1;
   }
   *VAR_7 = FUNC_2(VAR_11[VAR_14]);
   break;
  default:
   FUNC_0(VAR_10, "Unsupported attribute in neighbor get request");
   return -VAR_1;
  }
 }

 return 0;
}
