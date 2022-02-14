
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_4__ {int numPrepXacts; TYPE_1__** prepXacts; } ;
struct TYPE_3__ {int ondisk; scalar_t__ prepare_end_lsn; void* prepare_start_lsn; int xid; scalar_t__ inredo; scalar_t__ valid; } ;
typedef TYPE_1__* GlobalTransaction ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (void*,char**,int*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char*,int,int) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (char*) ;

void
FUNC_10(XLogRecPtr VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;

 if (VAR_7 <= 0)
  return;

 FUNC_4();
 FUNC_0(VAR_5, VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_4->numPrepXacts; VAR_9++)
 {




  GlobalTransaction VAR_11 = VAR_4->prepXacts[VAR_9];

  if ((VAR_11->valid || VAR_11->inredo) &&
   !VAR_11->ondisk &&
   VAR_11->prepare_end_lsn <= VAR_8)
  {
   char *VAR_12;
   int VAR_13;

   FUNC_5(VAR_11->prepare_start_lsn, &VAR_12, &VAR_13);
   FUNC_2(VAR_11->xid, VAR_12, VAR_13);
   VAR_11->ondisk = 1;
   VAR_11->prepare_start_lsn = VAR_0;
   VAR_11->prepare_end_lsn = VAR_0;
   FUNC_9(VAR_12);
   VAR_10++;
  }
 }
 FUNC_1(VAR_5);







 FUNC_8(VAR_3, 1);

 FUNC_3();

 if (VAR_6 && VAR_10 > 0)
  FUNC_6(VAR_1,
    (FUNC_7("%u two-phase state file was written "
          "for a long-running prepared transaction",
          "%u two-phase state files were written "
          "for long-running prepared transactions",
          VAR_10,
          VAR_10)));
}
