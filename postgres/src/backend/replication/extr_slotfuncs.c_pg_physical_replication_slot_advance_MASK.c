
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ restart_lsn; } ;
struct TYPE_4__ {int mutex; TYPE_1__ data; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static XLogRecPtr
FUNC_2(XLogRecPtr VAR_1)
{
 XLogRecPtr VAR_2 = VAR_0->data.restart_lsn;
 XLogRecPtr VAR_3 = VAR_2;

 if (VAR_2 < VAR_1)
 {
  FUNC_0(&VAR_0->mutex);
  VAR_0->data.restart_lsn = VAR_1;
  FUNC_1(&VAR_0->mutex);
  VAR_3 = VAR_1;
 }

 return VAR_3;
}
