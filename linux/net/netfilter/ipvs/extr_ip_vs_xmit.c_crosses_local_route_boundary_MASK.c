
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct rt6_info {int dummy; } ;
struct TYPE_8__ {int saddr; } ;
struct TYPE_7__ {int saddr; } ;
struct TYPE_6__ {int rt_flags; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt6_info*) ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline bool FUNC_8(int VAR_7, struct sk_buff *VAR_8,
      int VAR_9,
      bool VAR_10)
{
 bool VAR_11 = !!(VAR_9 & VAR_3);
 bool VAR_12 = !!(VAR_9 & VAR_4);
 bool VAR_13 = !!(VAR_9 & VAR_5);
 bool VAR_14;
 bool VAR_15;
 {
  VAR_14 = FUNC_2(FUNC_1(VAR_8)->saddr);
  VAR_15 = FUNC_6(VAR_8)->rt_flags & VAR_6;
 }

 if (FUNC_7(VAR_10)) {
  if (!VAR_11)
   return 1;
  if (!VAR_13 && !VAR_15)
   return 1;
 } else {
  if (!VAR_12)
   return 1;
  if (VAR_14)
   return 1;
 }
 return 0;
}
