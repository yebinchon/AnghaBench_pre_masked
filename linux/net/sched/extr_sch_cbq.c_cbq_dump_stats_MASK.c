
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gnet_dump {int dummy; } ;
struct TYPE_4__ {int avgidle; } ;
struct TYPE_3__ {TYPE_2__ xstats; int avgidle; } ;
struct cbq_sched_data {TYPE_1__ link; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct gnet_dump*,TYPE_2__*,int) ;
 struct cbq_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_2(struct Qdisc *VAR_0, struct gnet_dump *VAR_1)
{
 struct cbq_sched_data *VAR_2 = FUNC_1(VAR_0);

 VAR_2->link.xstats.avgidle = VAR_2->link.avgidle;
 return FUNC_0(VAR_1, &VAR_2->link.xstats, sizeof(VAR_2->link.xstats));
}
