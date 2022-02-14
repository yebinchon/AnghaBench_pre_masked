
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct web_client {int pollinfo_slot; int port_acl; int * client_port; int * client_ip; int * client_host; int ofd; int ifd; } ;
struct TYPE_3__ {int slot; int port_acl; int client_host; int client_port; int client_ip; int fd; } ;
typedef TYPE_1__ POLLINFO ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 struct web_client* FUNC_3 () ;
 int FUNC_4 (struct web_client*) ;

__attribute__((used)) static struct web_client *FUNC_5(POLLINFO *VAR_0) {
    struct web_client *VAR_1;

    VAR_1 = FUNC_3();
    VAR_1->ifd = VAR_1->ofd = VAR_0->fd;

    FUNC_1(VAR_1->client_ip, VAR_0->client_ip, sizeof(VAR_1->client_ip) - 1);
    FUNC_1(VAR_1->client_port, VAR_0->client_port, sizeof(VAR_1->client_port) - 1);
    FUNC_1(VAR_1->client_host, VAR_0->client_host, sizeof(VAR_1->client_host) - 1);

    if(FUNC_2(!*VAR_1->client_ip)) FUNC_0(VAR_1->client_ip, "-");
    if(FUNC_2(!*VAR_1->client_port)) FUNC_0(VAR_1->client_port, "-");
 VAR_1->port_acl = VAR_0->port_acl;

    FUNC_4(VAR_1);
    VAR_1->pollinfo_slot = VAR_0->slot;
    return(VAR_1);
}
