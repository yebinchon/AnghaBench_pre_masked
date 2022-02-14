
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_connection {int dummy; } ;
struct TYPE_4__ {int p; scalar_t__ len; } ;
struct http_message {TYPE_2__ body; } ;
struct TYPE_3__ {char* setting1; char* setting2; char* setting3; } ;


 int FUNC_0 (TYPE_2__*,char*,char*,int) ;
 int FUNC_1 (struct mg_connection*,char*,unsigned long,int,int ) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_1, struct http_message *VAR_2) {

  FUNC_0(&VAR_2->body, "setting1", VAR_0.setting1,
                  sizeof(VAR_0.setting1));
  FUNC_0(&VAR_2->body, "setting2", VAR_0.setting2,
                  sizeof(VAR_0.setting2));
  FUNC_0(&VAR_2->body, "setting3", VAR_0.setting3,
                  sizeof(VAR_0.setting3));

  FUNC_2("Settings updated to '%s' '%s' '%s'\n", VAR_0.setting1,
         VAR_0.setting2, VAR_0.setting3);

  FUNC_1(VAR_1, "HTTP/1.1 200 OK\r\nContent-Length: %lu\r\n\r\n%.*s",
            (unsigned long) VAR_2->body.len, (int) VAR_2->body.len, VAR_2->body.p);
}
