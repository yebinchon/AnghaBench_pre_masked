
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Qdisc {int flags; int handle; TYPE_1__* ops; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int ,int) ;

void FUNC_1(const char *VAR_1, struct Qdisc *VAR_2)
{
 if (!(VAR_2->flags & VAR_0)) {
  FUNC_0("%s: %s qdisc %X: is non-work-conserving?\n",
   VAR_1, VAR_2->ops->id, VAR_2->handle >> 16);
  VAR_2->flags |= VAR_0;
 }
}
