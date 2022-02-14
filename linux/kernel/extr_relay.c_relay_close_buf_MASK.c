
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rchan_buf {int finalized; int kref; int dentry; TYPE_2__* chan; int wakeup_work; } ;
struct TYPE_4__ {TYPE_1__* cb; } ;
struct TYPE_3__ {int (* remove_buf_file ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rchan_buf *VAR_1)
{
 VAR_1->finalized = 1;
 FUNC_0(&VAR_1->wakeup_work);
 VAR_1->chan->cb->remove_buf_file(VAR_1->dentry);
 FUNC_1(&VAR_1->kref, VAR_0);
}
