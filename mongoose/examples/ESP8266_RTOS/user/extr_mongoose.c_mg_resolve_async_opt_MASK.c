
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_resolve_async_request {char* name; int query; int max_retries; int timeout; void* data; int callback; } ;
struct mg_resolve_async_opts {char* nameserver; int max_retries; int timeout; struct mg_connection** dns_conn; } ;
struct mg_mgr {char* nameserver; } ;
struct mg_connection {struct mg_resolve_async_request* user_data; } ;
typedef int nameserver_url ;
typedef int mg_resolve_callback_t ;
typedef int dns_server_buff ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,int *) ;
 char* VAR_0 ;
 int FUNC_3 (struct mg_resolve_async_request*) ;
 struct mg_connection* FUNC_4 (struct mg_mgr*,char*,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_1 ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (char*,char const*,int) ;

int FUNC_8(struct mg_mgr *VAR_2, const char *VAR_3, int VAR_4,
                         mg_resolve_callback_t VAR_5, void *VAR_6,
                         struct mg_resolve_async_opts VAR_7) {
  struct mg_resolve_async_request *VAR_8;
  struct mg_connection *VAR_9;
  const char *VAR_10 = VAR_7.nameserver;
  char VAR_11[17], VAR_12[26];

  if (VAR_10 == ((void*)0)) {
    VAR_10 = VAR_2->nameserver;
  }

  FUNC_0(("%s %d %p", VAR_3, VAR_4, VAR_7.dns_conn));


  VAR_8 = (struct mg_resolve_async_request *) FUNC_1(1, sizeof(*VAR_8));
  if (VAR_8 == ((void*)0)) {
    return -1;
  }

  FUNC_7(VAR_8->name, VAR_3, sizeof(VAR_8->name));
  VAR_8->name[sizeof(VAR_8->name) - 1] = '\0';

  VAR_8->query = VAR_4;
  VAR_8->callback = VAR_5;
  VAR_8->data = VAR_6;

  VAR_8->max_retries = VAR_7.max_retries ? VAR_7.max_retries : 2;
  VAR_8->timeout = VAR_7.timeout ? VAR_7.timeout : 5;


  if (VAR_10 == ((void*)0)) {
    if (FUNC_5(VAR_11,
                                        sizeof(VAR_11)) != -1) {
      VAR_10 = VAR_11;
    } else {
      VAR_10 = VAR_0;
    }
  }

  FUNC_6(VAR_12, sizeof(VAR_12), "udp://%s:53", VAR_10);

  VAR_9 = FUNC_4(VAR_2, VAR_12, FUNC_2(VAR_1, ((void*)0)));
  if (VAR_9 == ((void*)0)) {
    FUNC_3(VAR_8);
    return -1;
  }
  VAR_9->user_data = VAR_8;
  if (VAR_7.dns_conn != ((void*)0)) {
    *VAR_7.dns_conn = VAR_9;
  }

  return 0;
}
