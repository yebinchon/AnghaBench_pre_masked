
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef scalar_t__ WalSndState ;
struct TYPE_5__ {int pid; scalar_t__ state; scalar_t__ sync_standby_priority; int mutex; int flush; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_7__ {scalar_t__ syncrep_method; } ;
struct TYPE_6__ {TYPE_1__* walsnds; } ;
typedef int List ;


 int FUNC_0 (int) ;
 TYPE_1__ volatile* VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,int) ;
 int VAR_7 ;

__attribute__((used)) static List *
FUNC_5(bool *VAR_8)
{
 List *VAR_9 = VAR_1;
 int VAR_10;
 volatile WalSnd *VAR_11;


 FUNC_0(VAR_3->syncrep_method == VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
 {
  XLogRecPtr VAR_12;
  WalSndState VAR_13;
  int VAR_14;

  VAR_11 = &VAR_6->walsnds[VAR_10];

  FUNC_1(&VAR_11->mutex);
  VAR_14 = VAR_11->pid;
  VAR_12 = VAR_11->flush;
  VAR_13 = VAR_11->state;
  FUNC_2(&VAR_11->mutex);


  if (VAR_14 == 0)
   continue;


  if (VAR_13 != VAR_5 &&
   VAR_13 != VAR_4)
   continue;


  if (VAR_11->sync_standby_priority == 0)
   continue;


  if (FUNC_3(VAR_12))
   continue;





  VAR_9 = FUNC_4(VAR_9, VAR_10);
  if (VAR_8 != ((void*)0) && VAR_11 == VAR_0)
   *VAR_8 = 1;
 }

 return VAR_9;
}
