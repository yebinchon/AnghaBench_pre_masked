
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
struct Output {int dummy; } ;
typedef int fd_set ;
typedef int buf ;
typedef scalar_t__ SOCKET ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct Output*,unsigned char*,size_t) ;
 size_t FUNC_5 (scalar_t__,char*,int,int ) ;
 int FUNC_6 (int,int *,int ,int ,struct timeval*) ;

__attribute__((used)) static int
FUNC_7(struct Output *VAR_0, SOCKET VAR_1)
{
    fd_set VAR_2;
    struct timeval VAR_3 = {0,0};
    int VAR_4;
    int VAR_5;
    unsigned char VAR_6[1024];
    size_t VAR_7;

    FUNC_1(&VAR_2);



    FUNC_0(VAR_1, &VAR_2);
    VAR_5 = (int)VAR_1;

    VAR_4 = FUNC_6(VAR_5, &VAR_2, 0, 0, &VAR_3);
    if (VAR_4 == 0)
        return 1;
    if (VAR_4 < 0) {
        FUNC_2(0, "redis:select() failed\n");
        FUNC_3(1);
    }
    if (VAR_4 != 1) {
        FUNC_2(0, "redis:select() failed\n");
        FUNC_3(1);
    }




    VAR_7 = FUNC_5(VAR_1, (char*)VAR_6, sizeof(VAR_6), 0);
    if (VAR_7 == 0) {
        FUNC_2(0, "redis:recv() failed\n");
        FUNC_3(1);
    }

    return FUNC_4(VAR_0, VAR_6, VAR_7);
}
