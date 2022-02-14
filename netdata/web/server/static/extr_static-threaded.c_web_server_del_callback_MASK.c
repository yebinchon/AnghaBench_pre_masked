
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct web_client {int id; int pollinfo_filecopy_slot; scalar_t__ pollinfo_slot; } ;
struct TYPE_6__ {int disconnected; } ;
struct TYPE_5__ {int fd; int flags; int p; scalar_t__ data; } ;
typedef TYPE_1__ POLLINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct web_client*,int ) ;
 int FUNC_4 (struct web_client*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_5(POLLINFO *VAR_4) {
    VAR_3->disconnected++;

    struct web_client *VAR_5 = (struct web_client *)VAR_4->data;

    VAR_5->pollinfo_slot = 0;
    if(FUNC_2(VAR_5->pollinfo_filecopy_slot)) {
        POLLINFO *VAR_6 = FUNC_1(VAR_4->p, VAR_5->pollinfo_filecopy_slot);
        (void)VAR_6;

        FUNC_0(VAR_0, "%llu: THE CLIENT WILL BE FRED BY READING FILE JOB ON FD %d", VAR_5->id, VAR_6->fd);
    }
    else {
        if(FUNC_3(VAR_5, VAR_2))
            VAR_4->flags |= VAR_1;

        FUNC_0(VAR_0, "%llu: CLOSING CLIENT FD %d", VAR_5->id, VAR_4->fd);
        FUNC_4(VAR_5);
    }
}
