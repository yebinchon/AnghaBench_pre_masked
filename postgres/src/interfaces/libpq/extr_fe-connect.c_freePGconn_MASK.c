
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* conn; } ;
struct TYPE_8__ {int nEvents; int nconnhost; scalar_t__ gcred; int workBuffer; int errorMessage; struct TYPE_8__* target_session_attrs; struct TYPE_8__* rowBuf; struct TYPE_8__* outBuffer; struct TYPE_8__* inBuffer; struct TYPE_8__* write_err_msg; struct TYPE_8__* last_query; struct TYPE_8__* gsslib; int * gctx; struct TYPE_8__* krbsrvname; struct TYPE_8__* gssencmode; struct TYPE_8__* connip; struct TYPE_8__* requirepeer; struct TYPE_8__* sslcompression; struct TYPE_8__* sslcrl; struct TYPE_8__* sslrootcert; struct TYPE_8__* sslkey; struct TYPE_8__* sslcert; struct TYPE_8__* sslmode; struct TYPE_8__* keepalives_count; struct TYPE_8__* keepalives_interval; struct TYPE_8__* keepalives_idle; struct TYPE_8__* keepalives; struct TYPE_8__* channel_binding; struct TYPE_8__* pgpassfile; struct TYPE_8__* pgpass; struct TYPE_8__* pguser; struct TYPE_8__* replication; struct TYPE_8__* dbName; struct TYPE_8__* fbappname; struct TYPE_8__* appname; struct TYPE_8__* pgoptions; struct TYPE_8__* pgtcp_user_timeout; struct TYPE_8__* connect_timeout; struct TYPE_8__* pgtty; struct TYPE_8__* pgport; struct TYPE_8__* pghostaddr; struct TYPE_8__* pghost; struct TYPE_8__* events; struct TYPE_8__* client_encoding_initial; struct TYPE_8__* connhost; struct TYPE_8__* password; struct TYPE_8__* port; struct TYPE_8__* hostaddr; struct TYPE_8__* host; struct TYPE_8__* name; int passThrough; int (* proc ) (int ,TYPE_2__*,int ) ;} ;
typedef TYPE_1__ PGconn ;
typedef TYPE_2__ PGEventConnDestroy ;
typedef int OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int **,int ) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(PGconn *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3->nEvents; VAR_4++)
 {
  PGEventConnDestroy VAR_5;

  VAR_5.conn = VAR_3;
  (void) VAR_3->events[VAR_4].proc(VAR_2, &VAR_5,
         VAR_3->events[VAR_4].passThrough);
  FUNC_2(VAR_3->events[VAR_4].name);
 }


 if (VAR_3->connhost != ((void*)0))
 {
  for (VAR_4 = 0; VAR_4 < VAR_3->nconnhost; ++VAR_4)
  {
   if (VAR_3->connhost[VAR_4].host != ((void*)0))
    FUNC_2(VAR_3->connhost[VAR_4].host);
   if (VAR_3->connhost[VAR_4].hostaddr != ((void*)0))
    FUNC_2(VAR_3->connhost[VAR_4].hostaddr);
   if (VAR_3->connhost[VAR_4].port != ((void*)0))
    FUNC_2(VAR_3->connhost[VAR_4].port);
   if (VAR_3->connhost[VAR_4].password != ((void*)0))
   {
    FUNC_1(VAR_3->connhost[VAR_4].password, FUNC_5(VAR_3->connhost[VAR_4].password));
    FUNC_2(VAR_3->connhost[VAR_4].password);
   }
  }
  FUNC_2(VAR_3->connhost);
 }

 if (VAR_3->client_encoding_initial)
  FUNC_2(VAR_3->client_encoding_initial);
 if (VAR_3->events)
  FUNC_2(VAR_3->events);
 if (VAR_3->pghost)
  FUNC_2(VAR_3->pghost);
 if (VAR_3->pghostaddr)
  FUNC_2(VAR_3->pghostaddr);
 if (VAR_3->pgport)
  FUNC_2(VAR_3->pgport);
 if (VAR_3->pgtty)
  FUNC_2(VAR_3->pgtty);
 if (VAR_3->connect_timeout)
  FUNC_2(VAR_3->connect_timeout);
 if (VAR_3->pgtcp_user_timeout)
  FUNC_2(VAR_3->pgtcp_user_timeout);
 if (VAR_3->pgoptions)
  FUNC_2(VAR_3->pgoptions);
 if (VAR_3->appname)
  FUNC_2(VAR_3->appname);
 if (VAR_3->fbappname)
  FUNC_2(VAR_3->fbappname);
 if (VAR_3->dbName)
  FUNC_2(VAR_3->dbName);
 if (VAR_3->replication)
  FUNC_2(VAR_3->replication);
 if (VAR_3->pguser)
  FUNC_2(VAR_3->pguser);
 if (VAR_3->pgpass)
 {
  FUNC_1(VAR_3->pgpass, FUNC_5(VAR_3->pgpass));
  FUNC_2(VAR_3->pgpass);
 }
 if (VAR_3->pgpassfile)
  FUNC_2(VAR_3->pgpassfile);
 if (VAR_3->channel_binding)
  FUNC_2(VAR_3->channel_binding);
 if (VAR_3->keepalives)
  FUNC_2(VAR_3->keepalives);
 if (VAR_3->keepalives_idle)
  FUNC_2(VAR_3->keepalives_idle);
 if (VAR_3->keepalives_interval)
  FUNC_2(VAR_3->keepalives_interval);
 if (VAR_3->keepalives_count)
  FUNC_2(VAR_3->keepalives_count);
 if (VAR_3->sslmode)
  FUNC_2(VAR_3->sslmode);
 if (VAR_3->sslcert)
  FUNC_2(VAR_3->sslcert);
 if (VAR_3->sslkey)
  FUNC_2(VAR_3->sslkey);
 if (VAR_3->sslrootcert)
  FUNC_2(VAR_3->sslrootcert);
 if (VAR_3->sslcrl)
  FUNC_2(VAR_3->sslcrl);
 if (VAR_3->sslcompression)
  FUNC_2(VAR_3->sslcompression);
 if (VAR_3->requirepeer)
  FUNC_2(VAR_3->requirepeer);
 if (VAR_3->connip)
  FUNC_2(VAR_3->connip);
 if (VAR_3->gssencmode)
  FUNC_2(VAR_3->gssencmode);
 if (VAR_3->last_query)
  FUNC_2(VAR_3->last_query);
 if (VAR_3->write_err_msg)
  FUNC_2(VAR_3->write_err_msg);
 if (VAR_3->inBuffer)
  FUNC_2(VAR_3->inBuffer);
 if (VAR_3->outBuffer)
  FUNC_2(VAR_3->outBuffer);
 if (VAR_3->rowBuf)
  FUNC_2(VAR_3->rowBuf);
 if (VAR_3->target_session_attrs)
  FUNC_2(VAR_3->target_session_attrs);
 FUNC_7(&VAR_3->errorMessage);
 FUNC_7(&VAR_3->workBuffer);

 FUNC_2(VAR_3);




}
