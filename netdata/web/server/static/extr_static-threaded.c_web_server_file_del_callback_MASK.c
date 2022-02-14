
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct web_client {int ofd; int id; int pollinfo_slot; scalar_t__ pollinfo_filecopy_slot; } ;
struct TYPE_3__ {int fd; scalar_t__ data; } ;
typedef TYPE_1__ POLLINFO ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct web_client*) ;

__attribute__((used)) static void FUNC_3(POLLINFO *VAR_1) {
    struct web_client *VAR_2 = (struct web_client *)VAR_1->data;
    FUNC_0(VAR_0, "%llu: RELEASE FILE READ ON FD %d", VAR_2->id, VAR_1->fd);

    VAR_2->pollinfo_filecopy_slot = 0;

    if(FUNC_1(!VAR_2->pollinfo_slot)) {
        FUNC_0(VAR_0, "%llu: CROSS WEB CLIENT CLEANUP (iFD %d, oFD %d)", VAR_2->id, VAR_1->fd, VAR_2->ofd);
        FUNC_2(VAR_2);
    }
}
