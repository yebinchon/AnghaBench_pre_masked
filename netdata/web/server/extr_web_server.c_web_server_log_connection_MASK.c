
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_client {int client_port; int client_ip; int id; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int ,int ,int ,char const*) ;

void FUNC_2(struct web_client *VAR_0, const char *VAR_1) {
    FUNC_1("%llu: %d '[%s]:%s' '%s'", VAR_0->id, FUNC_0(), VAR_0->client_ip, VAR_0->client_port, VAR_1);
}
