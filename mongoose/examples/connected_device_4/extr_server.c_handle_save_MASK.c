
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_connection {int dummy; } ;
struct http_message {int body; } ;
struct TYPE_2__ {int setting2; int setting1; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct mg_connection*,int,int ,int ) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_1, struct http_message *VAR_2) {

  FUNC_0(&VAR_2->body, "setting1", VAR_0.setting1,
                  sizeof(VAR_0.setting1));
  FUNC_0(&VAR_2->body, "setting2", VAR_0.setting2,
                  sizeof(VAR_0.setting2));


  FUNC_1(VAR_1, 302, FUNC_2("/"), FUNC_2(((void*)0)));
}
