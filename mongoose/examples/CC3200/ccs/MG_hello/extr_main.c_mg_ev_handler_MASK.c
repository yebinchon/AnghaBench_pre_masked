
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_str {int len; int p; } ;
struct mg_serve_http_opts {char* document_root; } ;
struct mg_http_multipart_part {int file_name; } ;
struct mg_connection {void* user_data; int flags; int sa; } ;
struct TYPE_4__ {int p; scalar_t__ len; } ;
struct TYPE_3__ {int p; scalar_t__ len; } ;
struct http_message {TYPE_2__ uri; TYPE_1__ method; } ;
typedef int opts ;
typedef int cs_stat_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 intptr_t FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct mg_serve_http_opts*,int ,int) ;
 int FUNC_4 (struct mg_connection*,int,void*,int ) ;
 struct mg_str* FUNC_5 (struct http_message*,char*) ;
 int FUNC_6 (struct mg_connection*,int ,int ) ;
 int FUNC_7 (struct mg_connection*,struct http_message*,struct mg_serve_http_opts) ;
 int FUNC_8 (int *,char*,int,int) ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_12(struct mg_connection *VAR_7, int VAR_8, void *VAR_9) {
  FUNC_0(VAR_0, ("%p ev %d", VAR_7, VAR_8));

  switch (VAR_8) {
    case 134: {
      char VAR_10[32];
      FUNC_8(&VAR_7->sa, VAR_10, sizeof(VAR_10),
                          VAR_3 | VAR_4);
      FUNC_0(VAR_1, ("Connection %p from %s", VAR_7, VAR_10));
      break;
    }
    case 128: {
      char VAR_11[32];
      struct http_message *VAR_12 = (struct http_message *) VAR_9;
      cs_stat_t VAR_13;
      FUNC_8(&VAR_7->sa, VAR_11, sizeof(VAR_11),
                          VAR_3 | VAR_4);
      FUNC_0(VAR_1,
          ("HTTP request from %s: %.*s %.*s", VAR_11, (int) VAR_12->method.len,
           VAR_12->method.p, (int) VAR_12->uri.len, VAR_12->uri.p));
      if (FUNC_10(&VAR_12->uri, "/upload") == 0 ||
          (FUNC_10(&VAR_12->uri, "/") == 0 && FUNC_9("SL:index.html", &VAR_13) != 0)) {
        FUNC_6(VAR_7, VAR_6, FUNC_11(VAR_6));
        VAR_7->flags |= VAR_2;
        break;
      }
      struct mg_serve_http_opts VAR_14;
      FUNC_3(&VAR_14, 0, sizeof(VAR_14));
      VAR_14.document_root = "SL:";
      FUNC_7(VAR_7, VAR_12, VAR_14);
      break;
    }
    case 133: {
      FUNC_0(VAR_1, ("Connection %p closed", VAR_7));
      break;
    }



    case 132: {
      struct http_message *VAR_15 = (struct http_message *) VAR_9;
      struct mg_str *VAR_16 = FUNC_5(VAR_15, "Content-Length");
      intptr_t VAR_17 = -1;
      if (VAR_16 != ((void*)0) && VAR_16->len < 20) {
        char VAR_18[20];
        FUNC_2(VAR_18, VAR_16->p, VAR_16->len);
        VAR_18[VAR_16->len] = '\0';
        VAR_17 = FUNC_1(VAR_18);
        if (VAR_17 < 0) VAR_17 = -1;
      }
      VAR_7->user_data = (void *) VAR_17;
      break;
    }
    case 131:
    case 130:
    case 129: {
      struct mg_http_multipart_part *VAR_19 =
          (struct mg_http_multipart_part *) VAR_9;
      if (VAR_8 == 131) {
        FUNC_0(VAR_1, ("Begin file upload: %s", VAR_19->file_name));
      } else if (VAR_8 == 129) {
        FUNC_0(VAR_1, ("End file upload: %s", VAR_19->file_name));
      }
      FUNC_4(VAR_7, VAR_8, VAR_9, VAR_5);
    }
  }
}
