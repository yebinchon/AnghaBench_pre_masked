
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pollfd {int events; int revents; int fd; } ;
struct TYPE_5__ {int buf; scalar_t__ c; int sfd; } ;
typedef TYPE_1__ crawler_client_t ;
struct TYPE_6__ {int (* read ) (scalar_t__,char*,int) ;int (* write ) (scalar_t__,unsigned char*,unsigned int) ;} ;
typedef TYPE_2__ conn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char* FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (scalar_t__,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(crawler_client_t *VAR_7) {
    unsigned char *VAR_8;
    unsigned int VAR_9 = 0;
    struct pollfd VAR_10[1];
    VAR_10[0].fd = VAR_7->sfd;
    VAR_10[0].events = VAR_5;

    int VAR_11 = FUNC_3(VAR_10, 1, 1000);

    if (VAR_11 < 0) {

        return -1;
    }

    if (VAR_11 == 0) return 0;

    if (VAR_10[0].revents & VAR_4) {
        char VAR_12[1];
        int VAR_13 = ((conn*)VAR_7->c)->read(VAR_7->c, VAR_12, 1);
        if (VAR_13 == 0 || (VAR_13 == -1 && (VAR_6 != VAR_0 && VAR_6 != VAR_1))) {
            FUNC_2(VAR_7);
            return -1;
        }
    }
    if ((VAR_8 = FUNC_0(VAR_7->buf, &VAR_9)) != ((void*)0)) {
        if (VAR_10[0].revents & (VAR_3|VAR_2)) {
            FUNC_2(VAR_7);
            return -1;
        } else if (VAR_10[0].revents & VAR_5) {
            int VAR_14 = ((conn*)VAR_7->c)->write(VAR_7->c, VAR_8, VAR_9);
            if (VAR_14 == -1) {
                if (VAR_6 != VAR_0 && VAR_6 != VAR_1) {
                    FUNC_2(VAR_7);
                    return -1;
                }
            } else if (VAR_14 == 0) {
                FUNC_2(VAR_7);
                return -1;
            } else {
                FUNC_1(VAR_7->buf, VAR_14);
            }
        }
    }
    return 0;
}
