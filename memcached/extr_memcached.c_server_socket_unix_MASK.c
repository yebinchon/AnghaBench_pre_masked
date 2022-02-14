
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct linger {int member_1; int member_0; } ;
typedef int ling ;
typedef int flags ;
typedef int addr ;
struct TYPE_2__ {int backlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int,int ,int,int,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (char const*,struct stat*) ;
 int VAR_11 ;
 int FUNC_9 (struct sockaddr_un*,int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,int ,int ,void*,int) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_13 (int ,char const*) ;
 int FUNC_14 (int ,char const*,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char const*) ;

__attribute__((used)) static int FUNC_17(const char *VAR_14, int VAR_15) {
    int VAR_16;
    struct linger VAR_17 = {0, 0};
    struct sockaddr_un VAR_18;
    struct stat VAR_19;
    int VAR_20 =1;
    int VAR_21;

    if (!VAR_14) {
        return 1;
    }

    if ((VAR_16 = FUNC_10()) == -1) {
        return 1;
    }




    if (FUNC_8(VAR_14, &VAR_19) == 0) {
        if (FUNC_0(VAR_19.st_mode))
            FUNC_16(VAR_14);
    }

    FUNC_12(VAR_16, VAR_4, VAR_7, (void *)&VAR_20, sizeof(VAR_20));
    FUNC_12(VAR_16, VAR_4, VAR_5, (void *)&VAR_20, sizeof(VAR_20));
    FUNC_12(VAR_16, VAR_4, VAR_6, (void *)&VAR_17, sizeof(VAR_17));





    FUNC_9(&VAR_18, 0, sizeof(VAR_18));

    VAR_18.sun_family = VAR_0;
    FUNC_14(VAR_18.sun_path, VAR_14, sizeof(VAR_18.sun_path) - 1);
    FUNC_1(FUNC_13(VAR_18.sun_path, VAR_14) == 0);
    VAR_21 = FUNC_15( ~(VAR_15&0777));
    if (FUNC_2(VAR_16, (struct sockaddr *)&VAR_18, sizeof(VAR_18)) == -1) {
        FUNC_11("bind()");
        FUNC_3(VAR_16);
        FUNC_15(VAR_21);
        return 1;
    }
    FUNC_15(VAR_21);
    if (FUNC_7(VAR_16, VAR_12.backlog) == -1) {
        FUNC_11("listen()");
        FUNC_3(VAR_16);
        return 1;
    }
    if (!(VAR_9 = FUNC_4(VAR_16, VAR_8,
                                 VAR_2 | VAR_1, 1,
                                 VAR_10, VAR_11, ((void*)0)))) {
        FUNC_6(VAR_13, "failed to create listening connection\n");
        FUNC_5(VAR_3);
    }

    return 0;
}
