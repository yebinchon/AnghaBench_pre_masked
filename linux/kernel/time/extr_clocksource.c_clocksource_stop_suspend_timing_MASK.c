
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct clocksource {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* read ) (TYPE_1__*) ;int (* disable ) (TYPE_1__*) ;int shift; int mult; int mask; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct clocksource*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

u64 FUNC_5(struct clocksource *VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6 = 0;

 if (!VAR_0)
  return 0;






 if (FUNC_1(VAR_2))
  VAR_4 = VAR_3;
 else
  VAR_4 = VAR_0->read(VAR_0);

 if (VAR_4 > VAR_1) {
  VAR_5 = FUNC_0(VAR_4, VAR_1,
       VAR_0->mask);
  VAR_6 = FUNC_2(VAR_5, VAR_0->mult,
           VAR_0->shift);
 }





 if (!FUNC_1(VAR_2) && VAR_0->disable)
  VAR_0->disable(VAR_0);

 return VAR_6;
}
