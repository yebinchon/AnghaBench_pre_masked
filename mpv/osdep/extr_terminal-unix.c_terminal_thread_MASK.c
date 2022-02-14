
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {scalar_t__ revents; int fd; int events; } ;
struct mp_cmd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 struct mp_cmd* FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,struct mp_cmd*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct pollfd*,int,int) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void *FUNC_8(void *VAR_5)
{
    FUNC_5("terminal");
    bool VAR_6 = VAR_3;
    while (1) {
        FUNC_2();
        struct pollfd VAR_7[2] = {
            { .events = VAR_0, .fd = VAR_1[0] },
            { .events = VAR_0, .fd = VAR_4 }
        };
        FUNC_6(VAR_7, VAR_6 ? 2 : 1, -1);
        if (VAR_7[0].revents)
            break;
        if (VAR_7[1].revents) {
            if (!FUNC_1(VAR_2))
                break;
        }
    }
    char VAR_8;
    bool VAR_9 = FUNC_7(VAR_1[0], &VAR_8, 1) == 1 && VAR_8 == 1;

    if (VAR_9) {
        struct mp_cmd *VAR_10 = FUNC_3(VAR_2, FUNC_0("quit 4"), "");
        if (VAR_10)
            FUNC_4(VAR_2, VAR_10);
    }
    return ((void*)0);
}
