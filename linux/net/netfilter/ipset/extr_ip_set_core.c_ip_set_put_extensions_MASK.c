
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_set {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ip_set const*) ;
 scalar_t__ FUNC_1 (struct ip_set const*) ;
 scalar_t__ FUNC_2 (struct ip_set const*) ;
 scalar_t__ FUNC_3 (struct ip_set const*) ;
 int FUNC_4 (void const*,struct ip_set const*) ;
 int FUNC_5 (void const*,struct ip_set const*) ;
 int FUNC_6 (void const*,struct ip_set const*) ;
 unsigned long* FUNC_7 (void const*,struct ip_set const*) ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;
 unsigned long FUNC_12 (unsigned long*) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int ) ;

int
FUNC_14(struct sk_buff *VAR_2, const struct ip_set *VAR_3,
        const void *VAR_4, bool VAR_5)
{
 if (FUNC_3(VAR_3)) {
  unsigned long *VAR_6 = FUNC_7(VAR_4, VAR_3);

  if (FUNC_13(VAR_2, VAR_1,
   FUNC_8(VAR_5 ? FUNC_12(VAR_6)
    : *VAR_6)))
   return -VAR_0;
 }
 if (FUNC_1(VAR_3) &&
     FUNC_10(VAR_2, FUNC_5(VAR_4, VAR_3)))
  return -VAR_0;
 if (FUNC_0(VAR_3) &&
     FUNC_9(VAR_2, FUNC_4(VAR_4, VAR_3)))
  return -VAR_0;
 if (FUNC_2(VAR_3) &&
     FUNC_11(VAR_2, FUNC_6(VAR_4, VAR_3)))
  return -VAR_0;
 return 0;
}
