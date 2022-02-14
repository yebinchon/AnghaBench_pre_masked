
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; int len; } ;
struct udp_res {TYPE_1__ buf_clnt; TYPE_1__ buf_srv; } ;
struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;
typedef int res ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct udp_res*,int ,int) ;
 struct mg_connection* FUNC_5 (struct mg_mgr*,char const*,int ) ;
 struct mg_connection* FUNC_6 (struct mg_mgr*,char const*,int ) ;
 int FUNC_7 (struct mg_mgr*) ;
 int FUNC_8 (struct mg_mgr*,struct udp_res*) ;
 int FUNC_9 (struct mg_mgr*,int,int ,int *,void*) ;

__attribute__((used)) static const char *FUNC_10(void) {
  struct mg_mgr VAR_3;
  struct mg_connection *VAR_4, *VAR_5;
  const char *VAR_6 = "udp://127.0.0.1:7878";
  struct udp_res VAR_7;
  FUNC_4(&VAR_7, 0, sizeof(VAR_7));
  FUNC_3(&VAR_7.buf_srv, 100);
  FUNC_3(&VAR_7.buf_clnt, 100);

  FUNC_8(&VAR_3, &VAR_7);
  FUNC_0((VAR_4 = FUNC_5(&VAR_3, VAR_6, VAR_2)) != ((void*)0));
  FUNC_0((VAR_5 = FUNC_6(&VAR_3, VAR_6, VAR_1)) != ((void*)0));

  FUNC_9(&VAR_3, 1, VAR_0, &VAR_7.buf_clnt.len, (void *) 23);
  FUNC_1(VAR_7.buf_srv.buf, "ACCEPT+ RECV boo! CLOSE");
  FUNC_1(VAR_7.buf_clnt.buf, "CONNECT RECV boo! CLOSE");

  FUNC_2(&VAR_7.buf_srv);
  FUNC_2(&VAR_7.buf_clnt);
  FUNC_7(&VAR_3);

  return ((void*)0);
}
