
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int chkpnt_nxtoid; } ;
struct TYPE_10__ {int pgdata; int bindir; TYPE_1__ controldata; int dbarr; } ;
struct TYPE_9__ {scalar_t__ transfer_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char**) ;
 int FUNC_12 (char**) ;
 int FUNC_13 () ;
 int VAR_4 ;
 int FUNC_14 (int ,int *,int,int,char*,int ,int ,...) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 () ;
 TYPE_3__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_18 (int) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (int,char**) ;
 int FUNC_21 (char*,int ,int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (char*) ;
 int VAR_7 ;
 int FUNC_25 (char*) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 (char*,int ) ;
 int FUNC_30 (char*,int*) ;
 int FUNC_31 (TYPE_3__*,int) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int *,int *,int ,int ) ;
 int FUNC_35 (int ) ;
 TYPE_2__ VAR_8 ;

int
FUNC_36(int VAR_9, char **VAR_10)
{
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 bool VAR_13 = 0;

 FUNC_24(VAR_10[0]);
 FUNC_29(VAR_10[0], FUNC_1("pg_upgrade"));


 FUNC_35(VAR_0);

 FUNC_20(VAR_9, VAR_10);

 FUNC_15();

 FUNC_2(&VAR_6);
 FUNC_2(&VAR_5);

 FUNC_30(VAR_10[0], &VAR_13);

 FUNC_18(VAR_13);

 FUNC_5();

 FUNC_16(&VAR_6, VAR_13);
 FUNC_16(&VAR_5, 0);

 FUNC_4(VAR_13);


 if (!FUNC_0(VAR_5.pgdata))
  FUNC_21("could not read permissions of directory \"%s\": %s\n",
     VAR_5.pgdata, FUNC_33(VAR_4));

 FUNC_35(VAR_7);

 FUNC_3(VAR_13);



 FUNC_31(&VAR_5, 1);

 FUNC_6();
 FUNC_28();

 FUNC_23(VAR_1,
     "\n"
     "Performing Upgrade\n"
     "------------------\n");

 FUNC_26();

 FUNC_32(0);





 FUNC_9();




 FUNC_31(&VAR_5, 1);

 FUNC_27();

 FUNC_10();

 FUNC_32(0);







 if (VAR_8.transfer_mode == VAR_2)
  FUNC_13();

 FUNC_34(&VAR_6.dbarr, &VAR_5.dbarr,
         VAR_6.pgdata, VAR_5.pgdata);







 FUNC_25("Setting next OID for new cluster");
 FUNC_14(VAR_3, ((void*)0), 1, 1,
     "\"%s/pg_resetwal\" -o %u \"%s\"",
     VAR_5.bindir, VAR_6.controldata.chkpnt_nxtoid,
     VAR_5.pgdata);
 FUNC_7();

 FUNC_25("Sync data directory to disk");
 FUNC_14(VAR_3, ((void*)0), 1, 1,
     "\"%s/initdb\" --sync-only \"%s\"", VAR_5.bindir,
     VAR_5.pgdata);
 FUNC_7();

 FUNC_11(&VAR_11);
 FUNC_12(&VAR_12);

 FUNC_17();

 FUNC_23(VAR_1,
     "\n"
     "Upgrade Complete\n"
     "----------------\n");

 FUNC_19(VAR_11,
        VAR_12);

 FUNC_22(VAR_11);
 FUNC_22(VAR_12);

 FUNC_8();

 return 0;
}
