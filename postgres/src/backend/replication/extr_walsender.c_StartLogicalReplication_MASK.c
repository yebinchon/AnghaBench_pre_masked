
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int restart_lsn; int confirmed_flush; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
struct TYPE_8__ {int mutex; int sentPtr; } ;
struct TYPE_7__ {int options; int startpoint; int slotname; } ;
typedef int StringInfoData ;
typedef TYPE_2__ StartReplicationCmd ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int *,char) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int ) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_21(StartReplicationCmd *VAR_17)
{
 StringInfoData VAR_18;


 FUNC_1();

 FUNC_0(!VAR_2);

 FUNC_6(VAR_17->slotname, 1);






 if (VAR_10 && !FUNC_5())
 {
  FUNC_13(VAR_1,
    (FUNC_14("terminating walsender process after promotion")));
  VAR_11 = 1;
 }
 VAR_12 =
  FUNC_2(VAR_17->startpoint, VAR_17->options, 0,
         VAR_13,
         VAR_6, VAR_8,
         VAR_7);


 FUNC_12(VAR_4);


 FUNC_15(&VAR_18, 'W');
 FUNC_18(&VAR_18, 0);
 FUNC_19(&VAR_18, 0);
 FUNC_16(&VAR_18);
 FUNC_17();



 VAR_14 = VAR_2->data.restart_lsn;





 VAR_16 = VAR_2->data.confirmed_flush;


 FUNC_8(&VAR_3->mutex);
 VAR_3->sentPtr = VAR_2->data.restart_lsn;
 FUNC_9(&VAR_3->mutex);

 VAR_15 = 1;

 FUNC_10();


 FUNC_11(VAR_9);

 FUNC_4(VAR_12);
 FUNC_7();

 VAR_15 = 0;
 if (VAR_11)
  FUNC_20(0);
 FUNC_12(VAR_5);


 FUNC_3("COPY 0", VAR_0);
}
