
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int retries; int fd; } ;
typedef TYPE_1__ socket_obj_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char const*,size_t) ;
 int FUNC_5 (int ) ;

int FUNC_6(socket_obj_t *VAR_3, const char *VAR_4, size_t VAR_5) {
    int VAR_6 = 0;
    for (int VAR_7=0; VAR_7<=VAR_3->retries && VAR_6 < VAR_5; VAR_7++) {
        FUNC_1();
        int VAR_8 = FUNC_4(VAR_3->fd, VAR_4+VAR_6, VAR_5-VAR_6);
        FUNC_0();
        if (VAR_8 < 0 && VAR_2 != VAR_0) FUNC_3(VAR_2);
        if (VAR_8 > 0) VAR_6 += VAR_8;
        FUNC_2();
    }
    if (VAR_6 == 0) FUNC_5(VAR_1);
    return VAR_6;
}
