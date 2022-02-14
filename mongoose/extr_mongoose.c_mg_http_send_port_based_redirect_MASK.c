
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_str {int p; scalar_t__ len; } ;
struct mg_serve_http_opts {char* url_rewrites; } ;
struct mg_connection {int dummy; } ;
struct TYPE_4__ {int p; } ;
struct TYPE_3__ {int p; } ;
struct http_message {TYPE_2__ uri; TYPE_1__ proto; } ;
typedef int local_port ;


 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,char*,int,int ) ;
 char* FUNC_1 (char const*,struct mg_str*,struct mg_str*) ;
 int FUNC_2 (struct mg_connection*,char*,int,int ,int,int) ;
 int FUNC_3 (struct mg_connection*,int,int *) ;
 scalar_t__ FUNC_4 (struct mg_str*,char*) ;

__attribute__((used)) static int FUNC_5(
    struct mg_connection *VAR_1, struct http_message *VAR_2,
    const struct mg_serve_http_opts *VAR_3) {
  const char *VAR_4 = VAR_3->url_rewrites;
  struct mg_str VAR_5, VAR_6;
  char VAR_7[20] = {'%'};

  FUNC_0(VAR_1, VAR_7 + 1, sizeof(VAR_7) - 1,
                      VAR_0);

  while ((VAR_4 = FUNC_1(VAR_4, &VAR_5, &VAR_6)) != ((void*)0)) {
    if (FUNC_4(&VAR_5, VAR_7) == 0) {
      FUNC_3(VAR_1, 301, ((void*)0));
      FUNC_2(VAR_1, "Content-Length: 0\r\nLocation: %.*s%.*s\r\n\r\n",
                (int) VAR_6.len, VAR_6.p, (int) (VAR_2->proto.p - VAR_2->uri.p - 1),
                VAR_2->uri.p);
      return 1;
    }
  }

  return 0;
}
