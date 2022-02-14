
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ do_fsync; TYPE_1__* shared; } ;
struct TYPE_9__ {int num_files; int* segno; int * fd; } ;
struct TYPE_8__ {int num_slots; scalar_t__* page_status; int ControlLock; int * page_dirty; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__ SlruFlushData ;
typedef TYPE_3__* SlruCtl ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_9(SlruCtl VAR_11, bool VAR_12)
{
 SlruShared VAR_13 = VAR_11->shared;
 SlruFlushData VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 bool VAR_18;




 VAR_14.num_files = 0;

 FUNC_2(VAR_13->ControlLock, VAR_1);

 for (VAR_15 = 0; VAR_15 < VAR_13->num_slots; VAR_15++)
 {
  FUNC_4(VAR_11, VAR_15, &VAR_14);






  FUNC_0(VAR_12 ||
      VAR_13->page_status[VAR_15] == VAR_5 ||
      (VAR_13->page_status[VAR_15] == VAR_6 &&
    !VAR_13->page_dirty[VAR_15]));
 }

 FUNC_3(VAR_13->ControlLock);




 VAR_18 = 1;
 for (VAR_17 = 0; VAR_17 < VAR_14.num_files; VAR_17++)
 {
  FUNC_8(VAR_7);
  if (VAR_11->do_fsync && FUNC_6(VAR_14.fd[VAR_17]) != 0)
  {
   VAR_9 = VAR_3;
   VAR_10 = VAR_8;
   VAR_16 = VAR_14.segno[VAR_17] * VAR_4;
   VAR_18 = 0;
  }
  FUNC_7();

  if (FUNC_1(VAR_14.fd[VAR_17]) != 0)
  {
   VAR_9 = VAR_2;
   VAR_10 = VAR_8;
   VAR_16 = VAR_14.segno[VAR_17] * VAR_4;
   VAR_18 = 0;
  }
 }
 if (!VAR_18)
  FUNC_5(VAR_11, VAR_16, VAR_0);
}
