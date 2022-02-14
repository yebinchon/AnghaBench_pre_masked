
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * header_output; int * header; int * data; } ;
struct web_client {TYPE_1__ response; int user_agent; } ;
typedef int BUFFER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct web_client*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct web_client *VAR_0) {



    BUFFER *VAR_1 = VAR_0->response.data;
    BUFFER *VAR_2 = VAR_0->response.header;
    BUFFER *VAR_3 = VAR_0->response.header_output;


    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    FUNC_1(VAR_0->user_agent);


    FUNC_2(VAR_0, 0, sizeof(struct web_client));


    VAR_0->response.data = VAR_1;
    VAR_0->response.header = VAR_2;
    VAR_0->response.header_output = VAR_3;
}
