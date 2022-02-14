
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct alarm {TYPE_1__ node; } ;
typedef int s64 ;
typedef scalar_t__ ktime_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

u64 FUNC_6(struct alarm *VAR_0, ktime_t VAR_1, ktime_t VAR_2)
{
 u64 VAR_3 = 1;
 ktime_t VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0->node.expires);

 if (VAR_4 < 0)
  return 0;

 if (FUNC_5(VAR_4 >= VAR_2)) {
  s64 VAR_5 = FUNC_4(VAR_2);

  VAR_3 = FUNC_2(VAR_4, VAR_5);

  VAR_0->node.expires = FUNC_0(VAR_0->node.expires,
       VAR_5*VAR_3);

  if (VAR_0->node.expires > VAR_1)
   return VAR_3;




  VAR_3++;
 }

 VAR_0->node.expires = FUNC_1(VAR_0->node.expires, VAR_2);
 return VAR_3;
}
