
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int p; scalar_t__ len; } ;
struct TYPE_12__ {int p; scalar_t__ len; } ;
struct mg_ssi_call_ctx {TYPE_5__ arg; TYPE_4__ file; TYPE_3__* req; } ;
struct mg_connection {int flags; } ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_15__ {int p; scalar_t__ len; } ;
struct http_message {TYPE_1__ body; TYPE_7__ uri; } ;
struct TYPE_14__ {char* document_root; char* per_directory_auth_file; char* auth_domain; char* dav_document_root; char* hidden_file_pattern; char* custom_mime_types; } ;
struct TYPE_10__ {int p; scalar_t__ len; } ;
struct TYPE_11__ {TYPE_2__ uri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mg_connection*,char*,int,int ,int) ;
 int FUNC_1 (struct mg_connection*,char*,...) ;
 int FUNC_2 (struct mg_connection*,struct http_message*,TYPE_6__) ;
 scalar_t__ FUNC_3 (TYPE_7__*,char*) ;
 TYPE_6__ VAR_4 ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_5, int VAR_6, void *VAR_7) {
  if (VAR_6 == VAR_0) {
    struct http_message *VAR_8 = (struct http_message *) VAR_7;
    if (FUNC_3(&VAR_8->uri, "/foo") == 0) {
      FUNC_0(VAR_5, "HTTP/1.0 200 OK\r\n\r\n[%.*s %d]", (int) VAR_8->uri.len,
                VAR_8->uri.p, (int) VAR_8->body.len);
      VAR_5->flags |= VAR_3;
    } else {
      VAR_4.document_root = ".";
      VAR_4.per_directory_auth_file = "passwords.txt";
      VAR_4.auth_domain = "foo.com";
      VAR_4.dav_document_root = "./data/dav";
      VAR_4.hidden_file_pattern = "hidden_file.*$";
      VAR_4.custom_mime_types =
          ".txt=text/plain; charset=windows-1251,"
          ".c=text/plain; charset=utf-8";
      FUNC_2(VAR_5, VAR_8, VAR_4);
    }
  } else if (VAR_6 == VAR_1) {
    FUNC_1(VAR_5, "[ssi call: %s]", (char *) VAR_7);
  } else if (VAR_6 == VAR_2) {
    struct mg_ssi_call_ctx *VAR_9 = (struct mg_ssi_call_ctx *) VAR_7;
    FUNC_1(VAR_5, "[ssi call w/ ctx: %.*s %.*s %.*s]",
                          (int) VAR_9->req->uri.len, VAR_9->req->uri.p,
                          (int) VAR_9->file.len, VAR_9->file.p,
                          (int) VAR_9->arg.len, VAR_9->arg.p);
  }
}
