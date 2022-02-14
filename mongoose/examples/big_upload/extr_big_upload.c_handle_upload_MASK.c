
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int p; } ;
struct mg_http_multipart_part {TYPE_1__ data; } ;
struct mg_connection {int * user_data; int flags; } ;
struct file_writer_data {int * fp; int bytes_written; } ;





 int VAR_0 ;
 struct file_writer_data* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file_writer_data*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ,int *) ;
 int FUNC_5 (struct mg_connection*,char*,...) ;
 int * FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct file_writer_data *VAR_4 = (struct file_writer_data *) VAR_1->user_data;
  struct mg_http_multipart_part *VAR_5 = (struct mg_http_multipart_part *) VAR_3;

  switch (VAR_2) {
    case 130: {
      if (VAR_4 == ((void*)0)) {
        VAR_4 = FUNC_0(1, sizeof(struct file_writer_data));
        VAR_4->fp = FUNC_6();
        VAR_4->bytes_written = 0;

        if (VAR_4->fp == ((void*)0)) {
          FUNC_5(VAR_1, "%s",
                    "HTTP/1.1 500 Failed to open a file\r\n"
                    "Content-Length: 0\r\n\r\n");
          VAR_1->flags |= VAR_0;
          FUNC_2(VAR_4);
          return;
        }
        VAR_1->user_data = (void *) VAR_4;
      }
      break;
    }
    case 129: {
      if (FUNC_4(VAR_5->data.p, 1, VAR_5->data.len, VAR_4->fp) != VAR_5->data.len) {
        FUNC_5(VAR_1, "%s",
                  "HTTP/1.1 500 Failed to write to a file\r\n"
                  "Content-Length: 0\r\n\r\n");
        VAR_1->flags |= VAR_0;
        return;
      }
      VAR_4->bytes_written += VAR_5->data.len;
      break;
    }
    case 128: {
      FUNC_5(VAR_1,
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: text/plain\r\n"
                "Connection: close\r\n\r\n"
                "Written %ld of POST data to a temp file\n\n",
                (long) FUNC_3(VAR_4->fp));
      VAR_1->flags |= VAR_0;
      FUNC_1(VAR_4->fp);
      FUNC_2(VAR_4);
      VAR_1->user_data = ((void*)0);
      break;
    }
  }
}
