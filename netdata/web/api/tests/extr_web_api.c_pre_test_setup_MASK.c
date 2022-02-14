
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* header_output; void* header; void* data; } ;
struct web_client {scalar_t__* cookie2; scalar_t__* cookie1; int origin; TYPE_1__ response; } ;
typedef int RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static struct web_client *FUNC_3()
{
    VAR_2 = FUNC_1(sizeof(RRDHOST));
    struct web_client *VAR_3 = (struct web_client *)FUNC_1(sizeof(struct web_client));
    VAR_3->response.data = FUNC_0(VAR_1);
    VAR_3->response.header = FUNC_0(VAR_0);
    VAR_3->response.header_output = FUNC_0(VAR_0);
    FUNC_2(VAR_3->origin, "*");
    VAR_3->cookie1[0] = 0;
    VAR_3->cookie2[0] = 0;
    return VAR_3;
}
