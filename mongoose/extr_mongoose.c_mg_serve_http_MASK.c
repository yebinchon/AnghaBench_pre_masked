
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mg_str {int dummy; } ;
struct mg_serve_http_opts {char* document_root; char* per_directory_auth_file; char* enable_directory_listing; char* cgi_file_pattern; char* ssi_pattern; char* index_files; int ip_acl; } ;
struct TYPE_3__ {int sin_addr; } ;
struct TYPE_4__ {TYPE_1__ sin; } ;
struct mg_connection {int flags; TYPE_2__ sa; } ;
struct http_message {struct mg_str proto; int uri; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 struct mg_str* FUNC_2 (struct http_message*,char*) ;
 scalar_t__ FUNC_3 (struct mg_connection*,struct http_message*,struct mg_serve_http_opts*) ;
 int FUNC_4 (struct mg_connection*,int,int *) ;
 scalar_t__ FUNC_5 (struct mg_connection*,struct http_message*,struct mg_serve_http_opts*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct mg_connection*,char*,struct mg_str*,struct http_message*,struct mg_serve_http_opts*) ;
 scalar_t__ FUNC_8 (struct http_message*,struct mg_serve_http_opts*,char**,struct mg_str*) ;
 scalar_t__ FUNC_9 (struct mg_str*,char*) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct mg_connection *VAR_1, struct http_message *VAR_2,
                   struct mg_serve_http_opts VAR_3) {
  char *VAR_4 = ((void*)0);
  struct mg_str *VAR_5, VAR_6;
  uint32_t VAR_7 = FUNC_10(*(uint32_t *) &VAR_1->sa.sin.sin_addr);

  if (FUNC_1(VAR_3.ip_acl, VAR_7) != 1) {

    FUNC_4(VAR_1, 403, ((void*)0));
    VAR_1->flags |= VAR_0;
    return;
  }
  if (VAR_3.document_root == ((void*)0)) {
    VAR_3.document_root = ".";
  }
  if (VAR_3.per_directory_auth_file == ((void*)0)) {
    VAR_3.per_directory_auth_file = ".htpasswd";
  }
  if (VAR_3.enable_directory_listing == ((void*)0)) {
    VAR_3.enable_directory_listing = "yes";
  }
  if (VAR_3.cgi_file_pattern == ((void*)0)) {
    VAR_3.cgi_file_pattern = "**.cgi$|**.php$";
  }
  if (VAR_3.ssi_pattern == ((void*)0)) {
    VAR_3.ssi_pattern = "**.shtml$|**.shtm$";
  }
  if (VAR_3.index_files == ((void*)0)) {
    VAR_3.index_files = "index.html,index.htm,index.shtml,index.cgi,index.php";
  }

  if (!FUNC_6(&VAR_2->uri, &VAR_2->uri)) {
    FUNC_4(VAR_1, 400, ((void*)0));
    return;
  }
  if (FUNC_8(VAR_2, &VAR_3, &VAR_4, &VAR_6) == 0) {
    FUNC_4(VAR_1, 404, ((void*)0));
    return;
  }
  FUNC_7(VAR_1, VAR_4, &VAR_6, VAR_2, &VAR_3);

  FUNC_0(VAR_4);
  VAR_4 = ((void*)0);


  if (FUNC_9(&VAR_2->proto, "HTTP/1.1") != 0 ||
      ((VAR_5 = FUNC_2(VAR_2, "Connection")) != ((void*)0) &&
       FUNC_9(VAR_5, "keep-alive") != 0)) {



  }
}
