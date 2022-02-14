
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int fd; } ;
typedef TYPE_1__ redisContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,size_t,int ) ;

int FUNC_2(redisContext *VAR_8, char *VAR_9, size_t VAR_10) {
    int VAR_11 = FUNC_1(VAR_8->fd, VAR_9, VAR_10, 0);
    if (VAR_11 == -1) {
        if ((VAR_7 == VAR_2 && !(VAR_8->flags & VAR_3)) || (VAR_7 == VAR_0)) {

            return 0;
        } else if(VAR_7 == VAR_1 && (VAR_8->flags & VAR_3)) {

            FUNC_0(VAR_8, VAR_6, "recv timeout");
            return -1;
        } else {
            FUNC_0(VAR_8, VAR_5, ((void*)0));
            return -1;
        }
    } else if (VAR_11 == 0) {
        FUNC_0(VAR_8, VAR_4, "Server closed the connection");
        return -1;
    } else {
        return VAR_11;
    }
}
