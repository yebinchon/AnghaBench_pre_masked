
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsmark_qdisc_data {TYPE_1__* mv; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int mask; scalar_t__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsmark_qdisc_data*,unsigned long) ;
 struct dsmark_qdisc_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_1, unsigned long VAR_2)
{
 struct dsmark_qdisc_data *VAR_3 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_3, VAR_2))
  return -VAR_0;

 VAR_3->mv[VAR_2 - 1].mask = 0xff;
 VAR_3->mv[VAR_2 - 1].value = 0;

 return 0;
}
