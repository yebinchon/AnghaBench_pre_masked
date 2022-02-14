
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msr; } ;
struct srcimp {int mapped; int * imappers; TYPE_2__* mgr; TYPE_1__ rsc; } ;
struct TYPE_4__ {int (* imap_delete ) (TYPE_2__*,int *) ;} ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(struct srcimp *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->rsc.msr; VAR_1++) {
  if (VAR_0->mapped & (0x1 << VAR_1)) {
   VAR_0->mgr->imap_delete(VAR_0->mgr,
       &VAR_0->imappers[VAR_1]);
   VAR_0->mapped &= ~(0x1 << VAR_1);
  }
 }

 return 0;
}
