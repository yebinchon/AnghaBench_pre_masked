
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cat_ver; } ;
struct TYPE_8__ {int pgdata; int bindir; TYPE_1__ controldata; int major_version; } ;
struct TYPE_6__ {scalar_t__ cat_ver; scalar_t__ nextxlogfile; scalar_t__ chkpnt_nxtmulti; int chkpnt_oldstMulti; int chkpnt_nxtmxoff; scalar_t__ chkpnt_nxtxid; scalar_t__ chkpnt_nxtepoch; } ;
struct TYPE_7__ {TYPE_2__ controldata; int major_version; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int *,int,int,char*,int ,scalar_t__,int ,...) ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(void)
{




 FUNC_2(FUNC_0(VAR_3.major_version) < 1000 ?
       "pg_clog" : "pg_xact",
       FUNC_0(VAR_2.major_version) < 1000 ?
       "pg_clog" : "pg_xact");


 FUNC_4("Setting next transaction ID and epoch for new cluster");
 FUNC_3(VAR_1, ((void*)0), 1, 1,
     "\"%s/pg_resetwal\" -f -x %u \"%s\"",
     VAR_2.bindir, VAR_3.controldata.chkpnt_nxtxid,
     VAR_2.pgdata);
 FUNC_3(VAR_1, ((void*)0), 1, 1,
     "\"%s/pg_resetwal\" -f -e %u \"%s\"",
     VAR_2.bindir, VAR_3.controldata.chkpnt_nxtepoch,
     VAR_2.pgdata);

 FUNC_3(VAR_1, ((void*)0), 1, 1,
     "\"%s/pg_resetwal\" -f -c %u,%u \"%s\"",
     VAR_2.bindir,
     VAR_3.controldata.chkpnt_nxtxid,
     VAR_3.controldata.chkpnt_nxtxid,
     VAR_2.pgdata);
 FUNC_1();







 if (VAR_3.controldata.cat_ver >= VAR_0 &&
  VAR_2.controldata.cat_ver >= VAR_0)
 {
  FUNC_2("pg_multixact/offsets", "pg_multixact/offsets");
  FUNC_2("pg_multixact/members", "pg_multixact/members");

  FUNC_4("Setting next multixact ID and offset for new cluster");





  FUNC_3(VAR_1, ((void*)0), 1, 1,
      "\"%s/pg_resetwal\" -O %u -m %u,%u \"%s\"",
      VAR_2.bindir,
      VAR_3.controldata.chkpnt_nxtmxoff,
      VAR_3.controldata.chkpnt_nxtmulti,
      VAR_3.controldata.chkpnt_oldstMulti,
      VAR_2.pgdata);
  FUNC_1();
 }
 else if (VAR_2.controldata.cat_ver >= VAR_0)
 {





  FUNC_5("pg_multixact/offsets", 0);

  FUNC_4("Setting oldest multixact ID in new cluster");
  FUNC_3(VAR_1, ((void*)0), 1, 1,
      "\"%s/pg_resetwal\" -m %u,%u \"%s\"",
      VAR_2.bindir,
      VAR_3.controldata.chkpnt_nxtmulti + 1,
      VAR_3.controldata.chkpnt_nxtmulti,
      VAR_2.pgdata);
  FUNC_1();
 }


 FUNC_4("Resetting WAL archives");
 FUNC_3(VAR_1, ((void*)0), 1, 1,

     "\"%s/pg_resetwal\" -l 00000001%s \"%s\"", VAR_2.bindir,
     VAR_3.controldata.nextxlogfile + 8,
     VAR_2.pgdata);
 FUNC_1();
}
