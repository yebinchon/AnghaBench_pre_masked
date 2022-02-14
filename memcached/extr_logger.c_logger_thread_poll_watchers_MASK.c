
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int failed_flush; int t; int buf; int sfd; scalar_t__ c; } ;
typedef TYPE_1__ logger_watcher ;
struct TYPE_8__ {int (* read ) (scalar_t__,char*,int) ;int (* write ) (scalar_t__,unsigned char*,unsigned int) ;} ;
typedef TYPE_2__ conn ;
struct TYPE_9__ {int events; int revents; int fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char* FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (unsigned char*,int,unsigned int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_3__*,int,int ) ;
 int VAR_9 ;
 int FUNC_8 (scalar_t__,char*,int) ;
 int FUNC_9 (scalar_t__,unsigned char*,unsigned int) ;
 TYPE_1__** VAR_10 ;
 TYPE_3__* VAR_11 ;

__attribute__((used)) static int FUNC_10(int VAR_12, int VAR_13) {
    int VAR_14;
    int VAR_15 = 0;
    unsigned char *VAR_16;
    unsigned int VAR_17 = 0;
    int VAR_18 = 0;

    for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
        logger_watcher *VAR_19 = VAR_10[VAR_14];
        if (VAR_19 == ((void*)0) || (VAR_13 != VAR_6 && VAR_14 != VAR_13))
            continue;

        VAR_16 = FUNC_1(VAR_19->buf, &VAR_17);
        if (VAR_16 != ((void*)0)) {
            VAR_11[VAR_15].fd = VAR_19->sfd;
            VAR_11[VAR_15].events = VAR_5;
            VAR_15++;
        } else if (VAR_12) {
            VAR_11[VAR_15].fd = VAR_19->sfd;
            VAR_11[VAR_15].events = VAR_4;
            VAR_15++;
        }



        VAR_19->failed_flush = 0;
    }

    if (VAR_15 == 0)
        return 0;


    int VAR_20 = FUNC_7(VAR_11, VAR_15, 0);

    if (VAR_20 < 0) {
        FUNC_6("something failed with logger thread watcher fd polling");
        return -1;
    }

    VAR_15 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
        logger_watcher *VAR_21 = VAR_10[VAR_14];
        if (VAR_21 == ((void*)0))
            continue;

        VAR_17 = 0;



        if (VAR_11[VAR_15].revents & VAR_4) {
            char VAR_22[1];
            int VAR_23 = ((conn*)VAR_21->c)->read(VAR_21->c, VAR_22, 1);
            if (VAR_23 == 0 || (VAR_23 == -1 && (VAR_8 != VAR_0 && VAR_8 != VAR_1))) {
                FUNC_0("LOGGER: watcher closed remotely\n");
                FUNC_5(VAR_21);
                VAR_15++;
                continue;
            }
        }
        if ((VAR_16 = FUNC_1(VAR_21->buf, &VAR_17)) != ((void*)0)) {
            if (VAR_11[VAR_15].revents & (VAR_3|VAR_2)) {
                FUNC_0("LOGGER: watcher closed during poll() call\n");
                FUNC_5(VAR_21);
            } else if (VAR_11[VAR_15].revents & VAR_5) {
                int VAR_24 = 0;


                switch (VAR_21->t) {
                    case 128:
                        VAR_24 = FUNC_4(VAR_16, 1, VAR_17, VAR_9);
                        break;
                    case 129:
                        VAR_24 = ((conn*)VAR_21->c)->write(VAR_21->c, VAR_16, VAR_17);
                        break;
                }

                FUNC_0("LOGGER: poll() wrote %d to %d (data_size: %d) (bipbuf_used: %d)\n", VAR_24, VAR_21->sfd,
                        VAR_17, FUNC_3(VAR_21->buf));
                if (VAR_24 == -1) {
                    if (VAR_8 != VAR_0 && VAR_8 != VAR_1) {
                        FUNC_5(VAR_21);
                    }
                    FUNC_0("LOGGER: watcher hit EAGAIN\n");
                } else if (VAR_24 == 0) {
                    FUNC_5(VAR_21);
                } else {
                    FUNC_2(VAR_21->buf, VAR_24);
                    VAR_18 += VAR_24;
                }
            }
        }
        VAR_15++;
    }
    return VAR_18;
}
