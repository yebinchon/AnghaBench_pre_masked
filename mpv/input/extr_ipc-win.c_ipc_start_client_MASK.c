
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_ipc_ctx {int client_api; } ;
struct client_arg {int client_h; int client; int log; int client_name; } ;
typedef int pthread_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ,struct client_arg*) ;
 int FUNC_5 (struct client_arg*) ;

__attribute__((used)) static void FUNC_6(struct mp_ipc_ctx *VAR_1, struct client_arg *VAR_2)
{
    VAR_2->client = FUNC_2(VAR_1->client_api, VAR_2->client_name),
    VAR_2->log = FUNC_1(VAR_2->client);

    pthread_t VAR_3;
    if (FUNC_4(&VAR_3, ((void*)0), VAR_0, VAR_2)) {
        FUNC_3(VAR_2->client);
        FUNC_0(VAR_2->client_h);
        FUNC_5(VAR_2);
    }
}
