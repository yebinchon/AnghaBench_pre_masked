
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tk_read_base {int clock; } ;
struct clocksource {int (* read ) (struct clocksource*) ;} ;


 struct clocksource* FUNC_0 (int ) ;
 int FUNC_1 (struct clocksource*) ;

__attribute__((used)) static inline u64 FUNC_2(const struct tk_read_base *VAR_0)
{
 struct clocksource *VAR_1 = FUNC_0(VAR_0->clock);

 return VAR_1->read(VAR_1);
}
