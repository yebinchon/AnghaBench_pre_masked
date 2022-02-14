
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mg_connection {TYPE_3__* listener; int flags; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {scalar_t__ len; int p; } ;
struct TYPE_8__ {int p; scalar_t__ len; } ;
struct http_message {TYPE_2__ body; TYPE_1__ query_string; TYPE_4__ uri; } ;
struct TYPE_7__ {scalar_t__ user_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mg_connection*,char*,int,int ,char*,int,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,char*) ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_3, int VAR_4, void *VAR_5) {
  struct http_message *VAR_6 = (struct http_message *) VAR_5;
  (void) VAR_5;

  if (VAR_4 == VAR_1) {
    if (FUNC_2(&VAR_6->uri, "/") == 0 || FUNC_2(&VAR_6->uri, "/foo") == 0) {
      FUNC_1(VAR_3, "HTTP/1.0 200 OK\r\n\r\n[%.*s%s%.*s %d]", (int) VAR_6->uri.len,
                VAR_6->uri.p, VAR_6->query_string.len > 0 ? "?" : "",
                (int) VAR_6->query_string.len, VAR_6->query_string.p,
                (int) VAR_6->body.len);
      VAR_3->flags |= VAR_2;
    }
  } else if (VAR_4 == VAR_0) {
    if (VAR_3->listener != ((void*)0)) {
      (*(int *) VAR_3->listener->user_data) += 1;
      FUNC_0(("%p == default close", VAR_3));
    }
  }
}
