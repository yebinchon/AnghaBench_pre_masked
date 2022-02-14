
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct simple_data {char* to_send; int fail; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mg_connection {TYPE_1__ send_mbuf; } ;


 int FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct simple_data *VAR_0, struct mg_connection *VAR_1,
                       void *VAR_2) {
  if (*((int *) VAR_2) != (int) FUNC_2(VAR_0->to_send)) {
    char VAR_3[100];
    FUNC_0(VAR_3, "(num sent wrong: %d vs %d)", *((int *) VAR_2),
            (int) FUNC_2(VAR_0->to_send));
    FUNC_1(VAR_0->fail, VAR_3);
  } else {
    VAR_0->to_send[0] = '\0';
  }
  if (VAR_1->send_mbuf.len != 0) FUNC_1(VAR_0->fail, "(send buf not empty)");
}
