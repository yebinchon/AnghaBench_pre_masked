
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; scalar_t__ last_errno; int fd; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_1(connection *VAR_4, void *VAR_5, size_t VAR_6) {
    int VAR_7 = FUNC_0(VAR_4->fd, VAR_5, VAR_6);
    if (!VAR_7) {
        VAR_4->state = VAR_0;
    } else if (VAR_7 < 0 && VAR_3 != VAR_2) {
        VAR_4->last_errno = VAR_3;
        VAR_4->state = VAR_1;
    }

    return VAR_7;
}
