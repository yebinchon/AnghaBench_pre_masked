
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ lastImportantAt; int lock; } ;
struct TYPE_4__ {TYPE_1__ l; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

XLogRecPtr
FUNC_2(void)
{
 XLogRecPtr VAR_4 = VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  XLogRecPtr VAR_6;






  FUNC_0(&VAR_3[VAR_5].l.lock, VAR_1);
  VAR_6 = VAR_3[VAR_5].l.lastImportantAt;
  FUNC_1(&VAR_3[VAR_5].l.lock);

  if (VAR_4 < VAR_6)
   VAR_4 = VAR_6;
 }

 return VAR_4;
}
