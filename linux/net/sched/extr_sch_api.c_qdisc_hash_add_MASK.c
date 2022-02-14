
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Qdisc {scalar_t__ parent; int flags; int handle; int hash; } ;
struct TYPE_2__ {int qdisc_hash; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 TYPE_1__* FUNC_2 (struct Qdisc*) ;

void FUNC_3(struct Qdisc *VAR_3, bool VAR_4)
{
 if ((VAR_3->parent != VAR_2) && !(VAR_3->flags & VAR_0)) {
  FUNC_0();
  FUNC_1(FUNC_2(VAR_3)->qdisc_hash, &VAR_3->hash, VAR_3->handle);
  if (VAR_4)
   VAR_3->flags |= VAR_1;
 }
}
