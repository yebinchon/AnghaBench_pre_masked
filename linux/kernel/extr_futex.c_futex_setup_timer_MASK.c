
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hrtimer_sleeper {int timer; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hrtimer_sleeper*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static inline struct hrtimer_sleeper *
FUNC_2(ktime_t *VAR_4, struct hrtimer_sleeper *VAR_5,
    int VAR_6, u64 VAR_7)
{
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(VAR_5, (VAR_6 & VAR_2) ?
          VAR_1 : VAR_0,
          VAR_3);




 FUNC_1(&VAR_5->timer, *VAR_4, VAR_7);

 return VAR_5;
}
