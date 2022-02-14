
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct web_client {TYPE_1__ response; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct web_client *VAR_0) {


    FUNC_0(VAR_0->response.data);
    FUNC_1(VAR_0->response.data, "You are not permitted to access this. Check the logs for more info.");
    return 401;
}
