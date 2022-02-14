
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* header_output; void* header; void* data; } ;
struct web_client {TYPE_1__ response; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct web_client* FUNC_1 (int,int) ;

__attribute__((used)) static struct web_client *FUNC_2(void) {
    struct web_client *VAR_2 = FUNC_1(1, sizeof(struct web_client));
    VAR_2->response.data = FUNC_0(VAR_1);
    VAR_2->response.header = FUNC_0(VAR_0);
    VAR_2->response.header_output = FUNC_0(VAR_0);
    return VAR_2;
}
