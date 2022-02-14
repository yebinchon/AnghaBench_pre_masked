
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_connection {int flags; } ;
struct TYPE_4__ {int len; int p; } ;
struct TYPE_3__ {int len; int p; } ;
struct http_message {TYPE_2__ body; TYPE_1__ message; } ;





 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_5, int VAR_6, void *VAR_7) {
  struct http_message *VAR_8 = (struct http_message *) VAR_7;

  switch (VAR_6) {
    case 129:
      if (*(int *) VAR_7 != 0) {
        FUNC_0(VAR_3, "connect() failed: %s\n", FUNC_4(*(int *) VAR_7));
        VAR_1 = 1;
      }
      break;
    case 128:
      VAR_5->flags |= VAR_0;
      if (VAR_2) {
        FUNC_1(VAR_8->message.p, 1, VAR_8->message.len, VAR_4);
      } else {
        FUNC_1(VAR_8->body.p, 1, VAR_8->body.len, VAR_4);
      }
      FUNC_3('\n');
      VAR_1 = 1;
      break;
    case 130:
      if (VAR_1 == 0) {
        FUNC_2("Server closed connection\n");
        VAR_1 = 1;
      }
      break;
    default:
      break;
  }
}
