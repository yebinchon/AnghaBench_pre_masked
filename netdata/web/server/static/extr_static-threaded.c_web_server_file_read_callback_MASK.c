
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct web_client {scalar_t__ mode; scalar_t__ ifd; scalar_t__ ofd; int id; int pollinfo_slot; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_11__ {int file_reads; } ;
struct TYPE_10__ {size_t slot; int fd; TYPE_2__* p; scalar_t__ data; } ;
struct TYPE_9__ {TYPE_1__* fds; } ;
struct TYPE_8__ {int events; } ;
typedef TYPE_2__ POLLJOB ;
typedef TYPE_3__ POLLINFO ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct web_client*) ;
 int FUNC_5 (struct web_client*) ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static int FUNC_6(POLLINFO *VAR_5, short int *VAR_6) {
    struct web_client *VAR_7 = (struct web_client *)VAR_5->data;



    if(FUNC_3(!VAR_7->pollinfo_slot)) {
        FUNC_0(VAR_0, "%llu: PREVENTED ATTEMPT TO READ FILE ON FD %d, ON CLOSED WEB CLIENT", VAR_7->id, VAR_5->fd);
        return -1;
    }

    if(FUNC_3(VAR_7->mode != VAR_3 || VAR_7->ifd == VAR_7->ofd)) {
        FUNC_0(VAR_0, "%llu: PREVENTED ATTEMPT TO READ FILE ON FD %d, ON NON-FILECOPY WEB CLIENT", VAR_7->id, VAR_5->fd);
        return -1;
    }

    FUNC_0(VAR_0, "%llu: READING FILE ON FD %d", VAR_7->id, VAR_5->fd);

    VAR_4->file_reads++;
    ssize_t VAR_8 = FUNC_3(FUNC_5(VAR_7));

    if(FUNC_1(FUNC_4(VAR_7))) {
        POLLJOB *VAR_9 = VAR_5->p;
        POLLINFO *VAR_10 = FUNC_2(VAR_9, VAR_7->pollinfo_slot);

        FUNC_0(VAR_0, "%llu: SIGNALING W TO SEND (iFD %d, oFD %d)", VAR_7->id, VAR_5->fd, VAR_10->fd);
        VAR_9->fds[VAR_10->slot].events |= VAR_2;
    }

    if(FUNC_3(VAR_8 <= 0 || VAR_7->ifd == VAR_7->ofd)) {
        FUNC_0(VAR_0, "%llu: DONE READING FILE ON FD %d", VAR_7->id, VAR_5->fd);
        return -1;
    }

    *VAR_6 = VAR_1;
    return 0;
}
