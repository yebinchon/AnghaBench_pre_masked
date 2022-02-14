
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_str {int len; int p; } ;
struct mg_serve_http_opts {char* document_root; } ;
struct mg_http_multipart_part {int file_name; } ;
struct mg_connection {void* user_data; int ev_timer_time; int handler; int flags; } ;
struct TYPE_4__ {int p; scalar_t__ len; } ;
struct TYPE_3__ {int p; scalar_t__ len; } ;
struct http_message {TYPE_2__ uri; TYPE_1__ method; } ;
typedef int opts ;
typedef int cs_stat_t ;
typedef int addr ;


 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 intptr_t FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct mg_serve_http_opts*,int ,int) ;
 int FUNC_5 (struct mg_connection*,char*,int,int) ;
 int FUNC_6 (struct mg_connection*,int,void*,int ) ;
 struct mg_str* FUNC_7 (struct http_message*,char*) ;
 int FUNC_8 (struct mg_connection*,int ,int ) ;
 int FUNC_9 (struct mg_connection*,struct http_message*,struct mg_serve_http_opts) ;
 int FUNC_10 (char*,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_14(struct mg_connection *VAR_9, int VAR_10, void *VAR_11) {
  switch (VAR_10) {
    case 136: {
      char VAR_12[32];
      FUNC_5(VAR_9, VAR_12, sizeof(VAR_12), VAR_5 |
                                                      VAR_3 |
                                                      VAR_4);
      FUNC_0(VAR_1, ("%p conn from %s", VAR_9, VAR_12));
      break;
    }
    case 130: {
      char VAR_13[32];
      struct http_message *VAR_14 = (struct http_message *) VAR_11;
      cs_stat_t VAR_15;
      FUNC_5(VAR_9, VAR_13, sizeof(VAR_13), VAR_5 |
                                                      VAR_3 |
                                                      VAR_4);
      FUNC_0(VAR_1,
          ("HTTP request from %s: %.*s %.*s", VAR_13, (int) VAR_14->method.len,
           VAR_14->method.p, (int) VAR_14->uri.len, VAR_14->uri.p));
      if (FUNC_12(&VAR_14->uri, "/upload") == 0 ||
          (FUNC_12(&VAR_14->uri, "/") == 0 && FUNC_10("SL:index.html", &VAR_15) != 0)) {
        FUNC_8(VAR_9, VAR_8, FUNC_13(VAR_8));
        VAR_9->flags |= VAR_2;
        break;
      }
      struct mg_serve_http_opts VAR_16;
      FUNC_4(&VAR_16, 0, sizeof(VAR_16));
      VAR_16.document_root = "SL:";
      FUNC_9(VAR_9, VAR_14, VAR_16);
      break;
    }
    case 135: {
      FUNC_0(VAR_1, ("%p closed", VAR_9));
      break;
    }
    case 128: {
      FUNC_0(VAR_1, ("%p switching to data mode", VAR_9));
      VAR_9->handler = VAR_6;
      VAR_9->ev_timer_time = FUNC_11();
      break;
    }
    case 129: {
      FUNC_2();
      VAR_9->ev_timer_time = FUNC_11() + (VAR_0 * 0.001);
      break;
    }



    case 134: {
      struct http_message *VAR_17 = (struct http_message *) VAR_11;
      struct mg_str *VAR_18 = FUNC_7(VAR_17, "Content-Length");
      intptr_t VAR_19 = -1;
      if (VAR_18 != ((void*)0) && VAR_18->len < 20) {
        char VAR_20[20];
        FUNC_3(VAR_20, VAR_18->p, VAR_18->len);
        VAR_20[VAR_18->len] = '\0';
        VAR_19 = FUNC_1(VAR_20);
        if (VAR_19 < 0) VAR_19 = -1;
      }
      VAR_9->user_data = (void *) VAR_19;
      break;
    }
    case 133:
    case 132:
    case 131: {
      struct mg_http_multipart_part *VAR_21 =
          (struct mg_http_multipart_part *) VAR_11;
      if (VAR_10 == 133) {
        FUNC_0(VAR_1, ("Begin file upload: %s", VAR_21->file_name));
      } else if (VAR_10 == 131) {
        FUNC_0(VAR_1, ("End file upload: %s", VAR_21->file_name));
      }
      FUNC_6(VAR_9, VAR_10, VAR_11, VAR_7);
    }
  }
}
