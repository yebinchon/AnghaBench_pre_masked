
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct geneve_opt {int length; int type; int opt_class; int opt_data; scalar_t__ r3; scalar_t__ r2; scalar_t__ r1; } ;
struct TYPE_2__ {size_t len; int * data; } ;
struct fl_flow_key {TYPE_1__ enc_opts; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct geneve_opt*,int,int) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr**,int ,struct nlattr const*,int ,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_9 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_10(const struct nlattr *VAR_10, struct fl_flow_key *VAR_11,
        int VAR_12, int VAR_13,
        struct netlink_ext_ack *VAR_14)
{
 struct nlattr *VAR_15[VAR_7 + 1];
 struct nlattr *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 struct geneve_opt *VAR_19;
 int VAR_20, VAR_21 = 0;

 if (VAR_13 > sizeof(struct geneve_opt))
  VAR_21 = VAR_13 - sizeof(struct geneve_opt);

 VAR_19 = (struct geneve_opt *)&VAR_11->enc_opts.data[VAR_11->enc_opts.len];
 FUNC_3(VAR_19, 0xff, VAR_13);
 VAR_19->length = VAR_21 / 4;
 VAR_19->r1 = 0;
 VAR_19->r2 = 0;
 VAR_19->r3 = 0;


 if (!VAR_12)
  return sizeof(struct geneve_opt) + VAR_21;

 if (FUNC_9(VAR_10) != VAR_4) {
  FUNC_1(VAR_14, "Non-geneve option type for mask");
  return -VAR_0;
 }

 VAR_20 = FUNC_8(VAR_15,
       VAR_7,
       VAR_10, VAR_9, VAR_14);
 if (VAR_20 < 0)
  return VAR_20;




 if (!VAR_13 &&
     (!VAR_15[VAR_5] ||
      !VAR_15[VAR_8] ||
      !VAR_15[VAR_6])) {
  FUNC_1(VAR_14, "Missing tunnel key geneve option class, type or data");
  return -VAR_0;
 }




 if (VAR_15[VAR_6]) {
  int VAR_22 = VAR_11->enc_opts.len;

  VAR_18 = VAR_15[VAR_6];
  VAR_21 = FUNC_7(VAR_18);
  if (VAR_21 < 4) {
   FUNC_1(VAR_14, "Tunnel key geneve option data is less than 4 bytes long");
   return -VAR_1;
  }
  if (VAR_21 % 4) {
   FUNC_1(VAR_14, "Tunnel key geneve option data is not a multiple of 4 bytes long");
   return -VAR_1;
  }

  VAR_22 += sizeof(struct geneve_opt) + VAR_21;
  FUNC_0(VAR_2 != VAR_3);
  if (VAR_22 > VAR_2) {
   FUNC_1(VAR_14, "Tunnel options exceeds max size");
   return -VAR_1;
  }
  VAR_19->length = VAR_21 / 4;
  FUNC_2(VAR_19->opt_data, FUNC_4(VAR_18), VAR_21);
 }

 if (VAR_15[VAR_5]) {
  VAR_16 = VAR_15[VAR_5];
  VAR_19->opt_class = FUNC_5(VAR_16);
 }

 if (VAR_15[VAR_8]) {
  VAR_17 = VAR_15[VAR_8];
  VAR_19->type = FUNC_6(VAR_17);
 }

 return sizeof(struct geneve_opt) + VAR_21;
}
