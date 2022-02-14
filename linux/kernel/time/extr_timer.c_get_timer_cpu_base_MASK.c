
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_base {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 struct timer_base* FUNC_1 (int *,int) ;
 int * VAR_4 ;

__attribute__((used)) static inline struct timer_base *FUNC_2(u32 VAR_5, u32 VAR_6)
{
 struct timer_base *VAR_7 = FUNC_1(&VAR_4[VAR_1], VAR_6);





 if (FUNC_0(VAR_2) && (VAR_5 & VAR_3))
  VAR_7 = FUNC_1(&VAR_4[VAR_0], VAR_6);
 return VAR_7;
}
