
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * conn; } ;
struct TYPE_3__ {int data; int header; int header_output; } ;
struct web_client {TYPE_2__ ssl; struct web_client* user_agent; TYPE_1__ response; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct web_client*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct web_client*) ;

__attribute__((used)) static void FUNC_4(struct web_client *VAR_1) {
    FUNC_1(VAR_1->response.header_output);
    FUNC_1(VAR_1->response.header);
    FUNC_1(VAR_1->response.data);
    FUNC_2(VAR_1->user_agent);
    FUNC_2(VAR_1);
}
