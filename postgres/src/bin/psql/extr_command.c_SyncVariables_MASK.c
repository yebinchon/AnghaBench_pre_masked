
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vbuf ;
struct TYPE_4__ {int encoding; } ;
struct TYPE_5__ {TYPE_1__ topt; } ;
struct TYPE_6__ {int sversion; int show_context; int db; int verbosity; int vars; int encoding; TYPE_2__ popt; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ,char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,char const*) ;
 int FUNC_10 (int,int,char*,int) ;
 char* FUNC_11 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_12 (char*,int,char*,int) ;

void
FUNC_13(void)
{
 char VAR_1[32];
 const char *VAR_2;


 VAR_0.encoding = FUNC_0(VAR_0.db);
 VAR_0.popt.topt.encoding = VAR_0.encoding;
 VAR_0.sversion = FUNC_5(VAR_0.db);

 FUNC_9(VAR_0.vars, "DBNAME", FUNC_1(VAR_0.db));
 FUNC_9(VAR_0.vars, "USER", FUNC_8(VAR_0.db));
 FUNC_9(VAR_0.vars, "HOST", FUNC_2(VAR_0.db));
 FUNC_9(VAR_0.vars, "PORT", FUNC_4(VAR_0.db));
 FUNC_9(VAR_0.vars, "ENCODING", FUNC_11(VAR_0.encoding));



 VAR_2 = FUNC_3(VAR_0.db, "server_version");

 if (!VAR_2)
 {
  FUNC_10(VAR_0.sversion, 1, VAR_1, sizeof(VAR_1));
  VAR_2 = VAR_1;
 }
 FUNC_9(VAR_0.vars, "SERVER_VERSION_NAME", VAR_2);

 FUNC_12(VAR_1, sizeof(VAR_1), "%d", VAR_0.sversion);
 FUNC_9(VAR_0.vars, "SERVER_VERSION_NUM", VAR_1);


 FUNC_7(VAR_0.db, VAR_0.verbosity);
 FUNC_6(VAR_0.db, VAR_0.show_context);
}
