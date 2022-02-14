
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct web_client {int flags; TYPE_1__ response; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int,size_t) ;
 int FUNC_2 (struct web_client*) ;
 struct web_client* FUNC_3 () ;
 int FUNC_4 (struct web_client*) ;

__attribute__((used)) static void FUNC_5(void **VAR_2)
{
    for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        struct web_client *VAR_4 = FUNC_3();
        FUNC_1(VAR_4->response.data, "/api/v1/info", 1, VAR_3);
        FUNC_4(VAR_4);
        FUNC_0(VAR_4->flags & VAR_1, 0);
        FUNC_2(VAR_4);
    }
}
