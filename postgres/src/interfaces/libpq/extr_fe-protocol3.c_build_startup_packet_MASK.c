
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* pguser; char const* dbName; char const* replication; char const* pgoptions; char* appname; char* fbappname; char const* client_encoding_initial; scalar_t__ send_appname; int pversion; } ;
struct TYPE_5__ {char* pgName; scalar_t__ envName; } ;
typedef int ProtocolVersion ;
typedef TYPE_1__ PQEnvironmentOption ;
typedef TYPE_2__ PGconn ;


 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const PGconn *VAR_0, char *VAR_1,
      const PQEnvironmentOption *VAR_2)
{
 int VAR_3 = 0;
 const PQEnvironmentOption *VAR_4;
 const char *VAR_5;


 if (VAR_1)
 {
  ProtocolVersion VAR_6 = FUNC_3(VAR_0->pversion);

  FUNC_2(VAR_1 + VAR_3, &VAR_6, sizeof(ProtocolVersion));
 }
 VAR_3 += sizeof(ProtocolVersion);
 if (VAR_0->pguser && VAR_0->pguser[0])
  do { if (VAR_1) strcpy(VAR_1 + VAR_3, "user"); VAR_3 += strlen("user") + 1; if (VAR_1) FUNC_0(VAR_1 + VAR_3, VAR_0->pguser); VAR_3 += FUNC_0(VAR_0->pguser) + 1; } while(0);
 if (VAR_0->dbName && VAR_0->dbName[0])
  do { if (VAR_1) FUNC_0(VAR_1 + VAR_3, "database"); VAR_3 += FUNC_0("database") + 1; if (VAR_1) FUNC_0(VAR_1 + VAR_3, VAR_0->dbName); VAR_3 += FUNC_0(VAR_0->dbName) + 1; } while(0);
 if (VAR_0->replication && VAR_0->replication[0])
  do { if (VAR_1) FUNC_0(VAR_1 + VAR_3, "replication"); VAR_3 += FUNC_0("replication") + 1; if (VAR_1) FUNC_0(VAR_1 + VAR_3, VAR_0->replication); VAR_3 += FUNC_0(VAR_0->replication) + 1; } while(0);
 if (VAR_0->pgoptions && VAR_0->pgoptions[0])
  do { if (VAR_1) FUNC_0(VAR_1 + VAR_3, "options"); VAR_3 += FUNC_0("options") + 1; if (VAR_1) FUNC_0(VAR_1 + VAR_3, VAR_0->pgoptions); VAR_3 += FUNC_0(VAR_0->pgoptions) + 1; } while(0);
 if (VAR_0->send_appname)
 {

  VAR_5 = VAR_0->appname ? VAR_0->appname : VAR_0->fbappname;
  if (VAR_5 && VAR_5[0])
   do { if (VAR_1) FUNC_0(VAR_1 + VAR_3, "application_name"); VAR_3 += FUNC_0("application_name") + 1; if (VAR_1) FUNC_0(VAR_1 + VAR_3, VAR_5); VAR_3 += FUNC_0(VAR_5) + 1; } while(0);
 }

 if (VAR_0->client_encoding_initial && VAR_0->client_encoding_initial[0])
  do { if (VAR_1) FUNC_0(VAR_1 + VAR_3, "client_encoding"); VAR_3 += FUNC_0("client_encoding") + 1; if (VAR_1) FUNC_0(VAR_1 + VAR_3, VAR_0->client_encoding_initial); VAR_3 += FUNC_0(VAR_0->client_encoding_initial) + 1; } while(0);


 for (VAR_4 = VAR_2; VAR_4->envName; VAR_4++)
 {
  if ((VAR_5 = FUNC_1(VAR_4->envName)) != ((void*)0))
  {
   if (FUNC_4(VAR_5, "default") != 0)
    do { if (VAR_1) FUNC_0(VAR_1 + VAR_3, VAR_4->pgName); VAR_3 += FUNC_0(VAR_4->pgName) + 1; if (VAR_1) FUNC_0(VAR_1 + VAR_3, VAR_5); VAR_3 += FUNC_0(VAR_5) + 1; } while(0);
  }
 }


 if (VAR_1)
  VAR_1[VAR_3] = '\0';
 VAR_3++;

 return VAR_3;
}
