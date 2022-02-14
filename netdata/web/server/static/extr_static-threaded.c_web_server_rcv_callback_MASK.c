
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct web_client {scalar_t__ mode; scalar_t__ pollinfo_filecopy_slot; int ifd; int ofd; int id; } ;
struct TYPE_6__ {int receptions; } ;
struct TYPE_5__ {int fd; scalar_t__ slot; int port_acl; int p; scalar_t__ data; } ;
typedef TYPE_1__ POLLINFO ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int ,int,int ,int ,int ,char*,char*,char*,int ,int ,int ,int ,void*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct web_client*) ;
 scalar_t__ FUNC_5 (struct web_client*) ;
 int FUNC_6 (struct web_client*) ;
 scalar_t__ FUNC_7 (struct web_client*) ;
 int FUNC_8 (struct web_client*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;

__attribute__((used)) static int FUNC_9(POLLINFO *VAR_10, short int *VAR_11) {
    VAR_9->receptions++;

    struct web_client *VAR_12 = (struct web_client *)VAR_10->data;
    int VAR_13 = VAR_10->fd;



    if(FUNC_3(FUNC_7(VAR_12) < 0))
        return -1;

    FUNC_0(VAR_0, "%llu: processing received data on fd %d.", VAR_12->id, VAR_13);
    FUNC_6(VAR_12);

    if(FUNC_3(VAR_12->mode == VAR_4)) {
        if(VAR_12->pollinfo_filecopy_slot == 0) {
            FUNC_0(VAR_0, "%llu: FILECOPY DETECTED ON FD %d", VAR_12->id, VAR_10->fd);

            if (FUNC_3(VAR_12->ifd != -1 && VAR_12->ifd != VAR_12->ofd && VAR_12->ifd != VAR_13)) {

                FUNC_0(VAR_0, "%llu: CREATING FILECOPY SLOT ON FD %d", VAR_12->id, VAR_10->fd);

                POLLINFO *VAR_14 = FUNC_2(
                        VAR_10->p
                        , VAR_12->ifd
                        , VAR_10->port_acl
                        , 0
                        , VAR_2
                        , "FILENAME"
                        , ""
                        , ""
                        , VAR_5
                        , VAR_6
                        , VAR_7
                        , VAR_8
                        , (void *) VAR_12
                );

                if(VAR_14)
                    VAR_12->pollinfo_filecopy_slot = VAR_14->slot;
                else {
                    FUNC_1("Failed to add filecopy fd. Closing client.");
                    return -1;
                }
            }
        }
    }
    else {
        if(FUNC_3(VAR_12->ifd == VAR_13 && FUNC_4(VAR_12)))
            *VAR_11 |= VAR_1;
    }

    if(FUNC_3(VAR_12->ofd == VAR_13 && FUNC_5(VAR_12)))
        *VAR_11 |= VAR_3;

    return FUNC_8(VAR_12);
}
