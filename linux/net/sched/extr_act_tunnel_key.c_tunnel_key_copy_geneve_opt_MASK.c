
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct geneve_opt {int length; scalar_t__ r3; scalar_t__ r2; scalar_t__ r1; int type; int opt_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (struct geneve_opt*,int *,int) ;
 int * FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr const*,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_8(const struct nlattr *VAR_7, void *VAR_8, int VAR_9,
      struct netlink_ext_ack *VAR_10)
{
 struct nlattr *VAR_11[VAR_4 + 1];
 int VAR_12, VAR_13, VAR_14;
 u8 *VAR_15;

 VAR_12 = FUNC_7(VAR_11,
       VAR_4,
       VAR_7, VAR_6, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_11[VAR_2] ||
     !VAR_11[VAR_5] ||
     !VAR_11[VAR_3]) {
  FUNC_0(VAR_10, "Missing tunnel key geneve option class, type or data");
  return -VAR_0;
 }

 VAR_15 = FUNC_3(VAR_11[VAR_3]);
 VAR_13 = FUNC_6(VAR_11[VAR_3]);
 if (VAR_13 < 4) {
  FUNC_0(VAR_10, "Tunnel key geneve option data is less than 4 bytes long");
  return -VAR_1;
 }
 if (VAR_13 % 4) {
  FUNC_0(VAR_10, "Tunnel key geneve option data is not a multiple of 4 bytes long");
  return -VAR_1;
 }

 VAR_14 = sizeof(struct geneve_opt) + VAR_13;
 if (VAR_8) {
  struct geneve_opt *VAR_16 = VAR_8;

  FUNC_1(VAR_9 < VAR_14);

  VAR_16->opt_class =
   FUNC_4(VAR_11[VAR_2]);
  VAR_16->type = FUNC_5(VAR_11[VAR_5]);
  VAR_16->length = VAR_13 / 4;
  VAR_16->r1 = 0;
  VAR_16->r2 = 0;
  VAR_16->r3 = 0;

  FUNC_2(VAR_16 + 1, VAR_15, VAR_13);
 }

 return VAR_14;
}
