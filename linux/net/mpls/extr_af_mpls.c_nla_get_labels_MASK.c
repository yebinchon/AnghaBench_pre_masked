
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct mpls_shim_hdr {int dummy; } ;
struct mpls_entry_decoded {int bos; int label; scalar_t__ tc; scalar_t__ ttl; } ;


 int VAR_0 ;

 int FUNC_0 (struct netlink_ext_ack*,struct nlattr const*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct netlink_ext_ack*,struct nlattr const*,char*) ;
 struct mpls_entry_decoded FUNC_3 (struct mpls_shim_hdr*) ;
 struct mpls_shim_hdr* FUNC_4 (struct nlattr const*) ;
 unsigned int FUNC_5 (struct nlattr const*) ;

int FUNC_6(const struct nlattr *VAR_1, u8 VAR_2, u8 *VAR_3,
     u32 VAR_4[], struct netlink_ext_ack *VAR_5)
{
 unsigned VAR_6 = FUNC_5(VAR_1);
 struct mpls_shim_hdr *VAR_7;
 u8 VAR_8;
 bool VAR_9;
 int VAR_10;




 if (VAR_6 & 3 || VAR_6 / 4 > 255) {
  FUNC_2(VAR_5, VAR_1,
        "Invalid length for labels attribute");
  return -VAR_0;
 }


 VAR_8 = VAR_6/4;
 if (VAR_8 > VAR_2) {
  FUNC_1(VAR_5, "Too many labels");
  return -VAR_0;
 }


 if (!VAR_4)
  goto out;

 VAR_7 = FUNC_4(VAR_1);
 VAR_9 = 1;
 for (VAR_10 = VAR_8 - 1; VAR_10 >= 0; VAR_10--, VAR_9 = 0) {
  struct mpls_entry_decoded VAR_11;
  VAR_11 = FUNC_3(VAR_7 + VAR_10);




  if (VAR_11.ttl) {
   FUNC_2(VAR_5, VAR_1,
         "TTL in label must be 0");
   return -VAR_0;
  }

  if (VAR_11.tc) {
   FUNC_2(VAR_5, VAR_1,
         "Traffic class in label must be 0");
   return -VAR_0;
  }

  if (VAR_11.bos != VAR_9) {
   FUNC_0(VAR_5, VAR_1);
   if (VAR_9) {
    FUNC_1(VAR_5,
            "BOS bit must be set in first label");
   } else {
    FUNC_1(VAR_5,
            "BOS bit can only be set in first label");
   }
   return -VAR_0;
  }

  switch (VAR_11.label) {
  case 128:




   FUNC_2(VAR_5, VAR_1,
         "Implicit NULL Label (3) can not be used in encapsulation");
   return -VAR_0;
  }

  VAR_4[VAR_10] = VAR_11.label;
 }
out:
 *VAR_3 = VAR_8;
 return 0;
}
