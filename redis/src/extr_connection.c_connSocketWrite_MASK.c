
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; scalar_t__ last_errno; int fd; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_1(connection *VAR_3, const void *VAR_4, size_t VAR_5) {
    int VAR_6 = FUNC_0(VAR_3->fd, VAR_4, VAR_5);
    if (VAR_6 < 0 && VAR_2 != VAR_1) {
        VAR_3->last_errno = VAR_2;
        VAR_3->state = VAR_0;
    }

    return VAR_6;
}
