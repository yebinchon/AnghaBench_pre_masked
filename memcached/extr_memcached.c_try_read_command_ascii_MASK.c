
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rbytes; char* rcurr; char* rbuf; int rsize; int last_cmd_time; } ;
typedef TYPE_1__ conn ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 char* FUNC_2 (char*,char,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(conn *VAR_2) {
    char *VAR_3, *VAR_4;

    if (VAR_2->rbytes == 0)
        return 0;

    VAR_3 = FUNC_2(VAR_2->rcurr, '\n', VAR_2->rbytes);
    if (!VAR_3) {
        if (VAR_2->rbytes > 1024) {




            char *VAR_5 = VAR_2->rcurr;
            while (*VAR_5 == ' ') {
                ++VAR_5;
            }

            if (VAR_5 - VAR_2->rcurr > 100 ||
                (FUNC_4(VAR_5, "get ", 4) && FUNC_4(VAR_5, "gets ", 5))) {

                FUNC_1(VAR_2, VAR_0);
                return 1;
            }
        }

        return 0;
    }
    VAR_4 = VAR_3 + 1;
    if ((VAR_3 - VAR_2->rcurr) > 1 && *(VAR_3 - 1) == '\r') {
        VAR_3--;
    }
    *VAR_3 = '\0';

    FUNC_0(VAR_4 <= (VAR_2->rcurr + VAR_2->rbytes));

    VAR_2->last_cmd_time = VAR_1;
    FUNC_3(VAR_2, VAR_2->rcurr);

    VAR_2->rbytes -= (VAR_4 - VAR_2->rcurr);
    VAR_2->rcurr = VAR_4;

    FUNC_0(VAR_2->rcurr <= (VAR_2->rbuf + VAR_2->rsize));

    return 1;
}
