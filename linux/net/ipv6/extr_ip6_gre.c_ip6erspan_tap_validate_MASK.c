
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nlattr *VAR_18[], struct nlattr *VAR_19[],
      struct netlink_ext_ack *VAR_20)
{
 __be16 VAR_21 = 0;
 int VAR_22, VAR_23 = 0;

 if (!VAR_19)
  return 0;

 VAR_22 = FUNC_0(VAR_18, VAR_19, VAR_20);
 if (VAR_22)
  return VAR_22;


 if (VAR_19[VAR_15])
  VAR_21 |= FUNC_1(VAR_19[VAR_15]);
 if (VAR_19[VAR_13])
  VAR_21 |= FUNC_1(VAR_19[VAR_13]);
 if (!VAR_19[VAR_8] &&
     VAR_21 != (VAR_4 | VAR_3))
  return -VAR_2;




 if (VAR_19[VAR_14] &&
     (FUNC_6(FUNC_2(VAR_19[VAR_14])) & ~VAR_7))
  return -VAR_2;

 if (VAR_19[VAR_16] &&
     (FUNC_6(FUNC_2(VAR_19[VAR_16])) & ~VAR_7))
  return -VAR_2;

 if (VAR_19[VAR_12]) {
  VAR_23 = FUNC_5(VAR_19[VAR_12]);
  if (VAR_23 != 1 && VAR_23 != 2)
   return -VAR_2;
 }

 if (VAR_23 == 1) {
  if (VAR_19[VAR_11]) {
   u32 VAR_24 = FUNC_4(VAR_19[VAR_11]);

   if (VAR_24 & ~VAR_17)
    return -VAR_2;
  }
 } else if (VAR_23 == 2) {
  if (VAR_19[VAR_9]) {
   u16 VAR_25 = FUNC_5(VAR_19[VAR_9]);

   if (VAR_25 & ~(VAR_0 >> VAR_1))
    return -VAR_2;
  }

  if (VAR_19[VAR_10]) {
   u16 VAR_26 = FUNC_3(VAR_19[VAR_10]);

   if (VAR_26 & ~(VAR_5 >> VAR_6))
    return -VAR_2;
  }
 }

 return 0;
}
