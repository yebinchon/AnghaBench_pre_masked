
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int locktag_lockmethodid; } ;
struct TYPE_13__ {int pid; int lockmode; TYPE_10__ locktag; } ;
struct TYPE_12__ {int data; int len; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ DEADLOCK_INFO ;


 int FUNC_0 (TYPE_1__*,TYPE_10__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ,...) ;
 int FUNC_5 (TYPE_1__*,char) ;
 TYPE_2__* VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_13 (int,int) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;

void
FUNC_16(void)
{
 StringInfoData VAR_4;
 StringInfoData VAR_5;
 StringInfoData VAR_6;
 int VAR_7;

 FUNC_12(&VAR_4);
 FUNC_12(&VAR_5);
 FUNC_12(&VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  DEADLOCK_INFO *VAR_8 = &VAR_2[VAR_7];
  int VAR_9;


  if (VAR_7 < VAR_3 - 1)
   VAR_9 = VAR_8[1].pid;
  else
   VAR_9 = VAR_2[0].pid;


  FUNC_15(&VAR_6);

  FUNC_0(&VAR_6, &VAR_8->locktag);

  if (VAR_7 > 0)
   FUNC_5(&VAR_4, '\n');

  FUNC_4(&VAR_4,
       FUNC_2("Process %d waits for %s on %s; blocked by process %d."),
       VAR_8->pid,
       FUNC_1(VAR_8->locktag.locktag_lockmethodid,
           VAR_8->lockmode),
       VAR_6.data,
       VAR_9);
 }


 FUNC_3(&VAR_5, VAR_4.data, VAR_4.len);


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  DEADLOCK_INFO *VAR_10 = &VAR_2[VAR_7];

  FUNC_5(&VAR_5, '\n');

  FUNC_4(&VAR_5,
       FUNC_2("Process %d: %s"),
       VAR_10->pid,
       FUNC_13(VAR_10->pid, 0));
 }

 FUNC_14();

 FUNC_6(VAR_1,
   (FUNC_7(VAR_0),
    FUNC_11("deadlock detected"),
    FUNC_8("%s", VAR_4.data),
    FUNC_9("%s", VAR_5.data),
    FUNC_10("See server log for query details.")));
}
