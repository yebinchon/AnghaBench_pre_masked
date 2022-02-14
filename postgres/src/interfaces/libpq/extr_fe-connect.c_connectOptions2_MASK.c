
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* hostaddr; char* host; char* port; int password; void* type; } ;
typedef TYPE_1__ pg_conn_host ;
typedef int homedir ;
struct TYPE_5__ {char* pghostaddr; int nconnhost; char* pghost; char* pgport; char* pguser; char* dbName; char* pgpass; char* pgpassfile; char* channel_binding; char* sslmode; char* gssencmode; char* client_encoding_initial; char* target_session_attrs; int options_valid; int errorMessage; void* status; TYPE_1__* connhost; scalar_t__ whichhost; } ;
typedef TYPE_2__ PGconn ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_1 (int,int) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 void* FUNC_7 (char**,int*) ;
 int FUNC_8 (char const*,char*,char*,char*,char*) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (char*,int) ;
 int FUNC_13 (int *,int ,...) ;
 int FUNC_14 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 void* FUNC_16 (char*) ;

__attribute__((used)) static bool
FUNC_17(PGconn *VAR_11)
{
 int VAR_12;






 VAR_11->whichhost = 0;
 if (VAR_11->pghostaddr && VAR_11->pghostaddr[0] != '\0')
  VAR_11->nconnhost = FUNC_2(VAR_11->pghostaddr);
 else if (VAR_11->pghost && VAR_11->pghost[0] != '\0')
  VAR_11->nconnhost = FUNC_2(VAR_11->pghost);
 else
  VAR_11->nconnhost = 1;
 VAR_11->connhost = (pg_conn_host *)
  FUNC_1(VAR_11->nconnhost, sizeof(pg_conn_host));
 if (VAR_11->connhost == ((void*)0))
  goto oom_error;





 if (VAR_11->pghostaddr != ((void*)0) && VAR_11->pghostaddr[0] != '\0')
 {
  char *VAR_13 = VAR_11->pghostaddr;
  bool VAR_14 = 1;

  for (VAR_12 = 0; VAR_12 < VAR_11->nconnhost && VAR_14; VAR_12++)
  {
   VAR_11->connhost[VAR_12].hostaddr = FUNC_7(&VAR_13, &VAR_14);
   if (VAR_11->connhost[VAR_12].hostaddr == ((void*)0))
    goto oom_error;
  }






  FUNC_0(!VAR_14);
  FUNC_0(VAR_12 == VAR_11->nconnhost);
 }

 if (VAR_11->pghost != ((void*)0) && VAR_11->pghost[0] != '\0')
 {
  char *VAR_15 = VAR_11->pghost;
  bool VAR_16 = 1;

  for (VAR_12 = 0; VAR_12 < VAR_11->nconnhost && VAR_16; VAR_12++)
  {
   VAR_11->connhost[VAR_12].host = FUNC_7(&VAR_15, &VAR_16);
   if (VAR_11->connhost[VAR_12].host == ((void*)0))
    goto oom_error;
  }


  if (VAR_16 || VAR_12 != VAR_11->nconnhost)
  {
   VAR_11->status = VAR_3;
   FUNC_13(&VAR_11->errorMessage,
         FUNC_5("could not match %d host names to %d hostaddr values\n"),
         FUNC_2(VAR_11->pghost), VAR_11->nconnhost);
   return 0;
  }
 }





 for (VAR_12 = 0; VAR_12 < VAR_11->nconnhost; VAR_12++)
 {
  pg_conn_host *VAR_17 = &VAR_11->connhost[VAR_12];

  if (VAR_17->hostaddr != ((void*)0) && VAR_17->hostaddr[0] != '\0')
   VAR_17->type = VAR_0;
  else if (VAR_17->host != ((void*)0) && VAR_17->host[0] != '\0')
  {
   VAR_17->type = VAR_1;




  }
  else
  {
   if (VAR_17->host)
    FUNC_3(VAR_17->host);




   VAR_17->host = FUNC_16(VAR_7);
   VAR_17->type = VAR_1;

   if (VAR_17->host == ((void*)0))
    goto oom_error;
  }
 }
 if (VAR_11->pgport != ((void*)0) && VAR_11->pgport[0] != '\0')
 {
  char *VAR_18 = VAR_11->pgport;
  bool VAR_19 = 1;

  for (VAR_12 = 0; VAR_12 < VAR_11->nconnhost && VAR_19; VAR_12++)
  {
   VAR_11->connhost[VAR_12].port = FUNC_7(&VAR_18, &VAR_19);
   if (VAR_11->connhost[VAR_12].port == ((void*)0))
    goto oom_error;
  }





  if (VAR_12 == 1 && !VAR_19)
  {
   for (VAR_12 = 1; VAR_12 < VAR_11->nconnhost; VAR_12++)
   {
    VAR_11->connhost[VAR_12].port = FUNC_16(VAR_11->connhost[0].port);
    if (VAR_11->connhost[VAR_12].port == ((void*)0))
     goto oom_error;
   }
  }
  else if (VAR_19 || VAR_12 != VAR_11->nconnhost)
  {
   VAR_11->status = VAR_3;
   FUNC_13(&VAR_11->errorMessage,
         FUNC_5("could not match %d port numbers to %d hosts\n"),
         FUNC_2(VAR_11->pgport), VAR_11->nconnhost);
   return 0;
  }
 }






 if (VAR_11->pguser == ((void*)0) || VAR_11->pguser[0] == '\0')
 {
  if (VAR_11->pguser)
   FUNC_3(VAR_11->pguser);
  VAR_11->pguser = FUNC_10(&VAR_11->errorMessage);
  if (!VAR_11->pguser)
  {
   VAR_11->status = VAR_3;
   return 0;
  }
 }




 if (VAR_11->dbName == ((void*)0) || VAR_11->dbName[0] == '\0')
 {
  if (VAR_11->dbName)
   FUNC_3(VAR_11->dbName);
  VAR_11->dbName = FUNC_16(VAR_11->pguser);
  if (!VAR_11->dbName)
   goto oom_error;
 }





 if (VAR_11->pgpass == ((void*)0) || VAR_11->pgpass[0] == '\0')
 {

  if (VAR_11->pgpassfile == ((void*)0) || VAR_11->pgpassfile[0] == '\0')
  {
   char VAR_20[VAR_9];

   if (FUNC_12(VAR_20, sizeof(VAR_20)))
   {
    if (VAR_11->pgpassfile)
     FUNC_3(VAR_11->pgpassfile);
    VAR_11->pgpassfile = FUNC_6(VAR_9);
    if (!VAR_11->pgpassfile)
     goto oom_error;
    FUNC_14(VAR_11->pgpassfile, VAR_9, "%s/%s",
       VAR_20, VAR_10);
   }
  }

  if (VAR_11->pgpassfile != ((void*)0) && VAR_11->pgpassfile[0] != '\0')
  {
   for (VAR_12 = 0; VAR_12 < VAR_11->nconnhost; VAR_12++)
   {





    const char *VAR_21 = VAR_11->connhost[VAR_12].host;

    if (VAR_21 == ((void*)0) || VAR_21[0] == '\0')
     VAR_21 = VAR_11->connhost[VAR_12].hostaddr;

    VAR_11->connhost[VAR_12].password =
     FUNC_8(VAR_21,
          VAR_11->connhost[VAR_12].port,
          VAR_11->dbName,
          VAR_11->pguser,
          VAR_11->pgpassfile);
   }
  }
 }




 if (VAR_11->channel_binding)
 {
  if (FUNC_15(VAR_11->channel_binding, "disable") != 0
   && FUNC_15(VAR_11->channel_binding, "prefer") != 0
   && FUNC_15(VAR_11->channel_binding, "require") != 0)
  {
   VAR_11->status = VAR_3;
   FUNC_13(&VAR_11->errorMessage,
         FUNC_5("invalid channel_binding value: \"%s\"\n"),
         VAR_11->channel_binding);
   return 0;
  }
 }
 else
 {
  VAR_11->channel_binding = FUNC_16(VAR_5);
  if (!VAR_11->channel_binding)
   goto oom_error;
 }




 if (VAR_11->sslmode)
 {
  if (FUNC_15(VAR_11->sslmode, "disable") != 0
   && FUNC_15(VAR_11->sslmode, "allow") != 0
   && FUNC_15(VAR_11->sslmode, "prefer") != 0
   && FUNC_15(VAR_11->sslmode, "require") != 0
   && FUNC_15(VAR_11->sslmode, "verify-ca") != 0
   && FUNC_15(VAR_11->sslmode, "verify-full") != 0)
  {
   VAR_11->status = VAR_3;
   FUNC_13(&VAR_11->errorMessage,
         FUNC_5("invalid sslmode value: \"%s\"\n"),
         VAR_11->sslmode);
   return 0;
  }


  switch (VAR_11->sslmode[0])
  {
   case 'a':
   case 'p':





    break;

   case 'r':
   case 'v':
    VAR_11->status = VAR_3;
    FUNC_13(&VAR_11->errorMessage,
          FUNC_5("sslmode value \"%s\" invalid when SSL support is not compiled in\n"),
          VAR_11->sslmode);
    return 0;
  }

 }
 else
 {
  VAR_11->sslmode = FUNC_16(VAR_8);
  if (!VAR_11->sslmode)
   goto oom_error;
 }




 if (VAR_11->gssencmode)
 {
  if (FUNC_15(VAR_11->gssencmode, "disable") != 0 &&
   FUNC_15(VAR_11->gssencmode, "prefer") != 0 &&
   FUNC_15(VAR_11->gssencmode, "require") != 0)
  {
   VAR_11->status = VAR_3;
   FUNC_13(&VAR_11->errorMessage,
         FUNC_5("invalid gssencmode value: \"%s\"\n"),
         VAR_11->gssencmode);
   return 0;
  }

  if (FUNC_15(VAR_11->gssencmode, "require") == 0)
  {
   VAR_11->status = VAR_3;
   FUNC_13(&VAR_11->errorMessage,
         FUNC_5("gssencmode value \"%s\" invalid when GSSAPI support is not compiled in\n"),
         VAR_11->gssencmode);
   return 0;
  }

 }
 else
 {
  VAR_11->gssencmode = FUNC_16(VAR_6);
  if (!VAR_11->gssencmode)
   goto oom_error;
 }




 if (VAR_11->client_encoding_initial &&
  FUNC_15(VAR_11->client_encoding_initial, "auto") == 0)
 {
  FUNC_3(VAR_11->client_encoding_initial);
  VAR_11->client_encoding_initial = FUNC_16(FUNC_9(FUNC_11(((void*)0), 1)));
  if (!VAR_11->client_encoding_initial)
   goto oom_error;
 }




 if (VAR_11->target_session_attrs)
 {
  if (FUNC_15(VAR_11->target_session_attrs, "any") != 0
   && FUNC_15(VAR_11->target_session_attrs, "read-write") != 0)
  {
   VAR_11->status = VAR_3;
   FUNC_13(&VAR_11->errorMessage,
         FUNC_5("invalid target_session_attrs value: \"%s\"\n"),
         VAR_11->target_session_attrs);
   return 0;
  }
 }






 VAR_11->options_valid = 1;

 return 1;

oom_error:
 VAR_11->status = VAR_3;
 FUNC_13(&VAR_11->errorMessage,
       FUNC_5("out of memory\n"));
 return 0;
}
