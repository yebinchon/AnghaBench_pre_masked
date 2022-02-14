
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_6__ {TYPE_1__* as_snap; } ;
struct TYPE_5__ {scalar_t__ lsn; } ;
typedef TYPE_1__* Snapshot ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

Snapshot
FUNC_4(void)
{
 Snapshot VAR_5 = ((void*)0);
 XLogRecPtr VAR_6 = VAR_0;

 if (!FUNC_3(&VAR_2))
 {
  VAR_5 = FUNC_1(VAR_3, VAR_4,
               FUNC_2(&VAR_2));
  VAR_6 = VAR_5->lsn;
 }

 if (VAR_1 != ((void*)0))
 {
  XLogRecPtr VAR_7 = VAR_1->as_snap->lsn;

  if (FUNC_0(VAR_6) || VAR_6 > VAR_7)
   return VAR_1->as_snap;
 }

 return VAR_5;
}
