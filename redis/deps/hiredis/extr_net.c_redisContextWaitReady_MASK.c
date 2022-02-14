
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct pollfd {int events; int fd; } ;
struct TYPE_7__ {int fd; } ;
typedef TYPE_1__ redisContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct pollfd*,int,long) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(redisContext *VAR_7, long VAR_8) {
    struct pollfd VAR_9[1];

    VAR_9[0].fd = VAR_7->fd;
    VAR_9[0].events = VAR_2;

    if (VAR_6 == VAR_0) {
        int VAR_10;

        if ((VAR_10 = FUNC_1(VAR_9, 1, VAR_8)) == -1) {
            FUNC_0(VAR_7, VAR_4, "poll(2)");
            FUNC_4(VAR_7);
            return VAR_3;
        } else if (VAR_10 == 0) {
            VAR_6 = VAR_1;
            FUNC_0(VAR_7,VAR_4,((void*)0));
            FUNC_4(VAR_7);
            return VAR_3;
        }

        if (FUNC_2(VAR_7, &VAR_10) != VAR_5 || VAR_10 == 0) {
            FUNC_3(VAR_7);
            return VAR_3;
        }

        return VAR_5;
    }

    FUNC_0(VAR_7,VAR_4,((void*)0));
    FUNC_4(VAR_7);
    return VAR_3;
}
