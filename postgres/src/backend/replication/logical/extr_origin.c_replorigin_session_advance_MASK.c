
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_2__ {scalar_t__ roident; scalar_t__ local_lsn; scalar_t__ remote_lsn; int lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_3(XLogRecPtr VAR_3, XLogRecPtr VAR_4)
{
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->roident != VAR_0);

 FUNC_1(&VAR_2->lock, VAR_1);
 if (VAR_2->local_lsn < VAR_4)
  VAR_2->local_lsn = VAR_4;
 if (VAR_2->remote_lsn < VAR_3)
  VAR_2->remote_lsn = VAR_3;
 FUNC_2(&VAR_2->lock);
}
