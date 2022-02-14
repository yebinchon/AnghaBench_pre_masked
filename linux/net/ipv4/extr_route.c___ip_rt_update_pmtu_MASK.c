
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dst_entry {int dev; scalar_t__ expires; } ;
struct rtable {scalar_t__ rt_pmtu; struct dst_entry dst; } ;
struct flowi4 {int daddr; } ;
struct fib_result {int dummy; } ;
struct fib_nh_common {int dummy; } ;


 struct fib_nh_common* FUNC_0 (struct fib_result) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct flowi4*,struct fib_result*,int ) ;
 scalar_t__ FUNC_3 (struct dst_entry*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct dst_entry*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct fib_nh_common*,int ,int ,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct rtable *VAR_3, struct flowi4 *VAR_4, u32 VAR_5)
{
 struct dst_entry *VAR_6 = &VAR_3->dst;
 u32 VAR_7 = FUNC_4(VAR_6);
 struct fib_result VAR_8;
 bool VAR_9 = 0;

 if (FUNC_3(VAR_6))
  return;

 if (VAR_7 < VAR_5)
  return;

 if (VAR_5 < VAR_0) {
  VAR_9 = 1;
  VAR_5 = FUNC_5(VAR_7, VAR_0);
 }

 if (VAR_3->rt_pmtu == VAR_5 && !VAR_9 &&
     FUNC_8(VAR_2, VAR_6->expires - VAR_1 / 2))
  return;

 FUNC_6();
 if (FUNC_2(FUNC_1(VAR_6->dev), VAR_4, &VAR_8, 0) == 0) {
  struct fib_nh_common *VAR_10 = FUNC_0(VAR_8);

  FUNC_9(VAR_10, VAR_4->daddr, 0, VAR_5, VAR_9,
          VAR_2 + VAR_1);
 }
 FUNC_7();
}
