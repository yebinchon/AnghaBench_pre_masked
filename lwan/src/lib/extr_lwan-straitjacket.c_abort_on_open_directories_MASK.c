
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef size_t ssize_t ;
typedef int path ;
typedef int own_fd ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 size_t FUNC_7 (int,char*,char*,int) ;
 int FUNC_8 (char*,int,char*,int) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static void FUNC_11(void)
{




    DIR *VAR_1 = FUNC_5("/proc/self/fd");
    struct dirent *VAR_2;
    char VAR_3[3 * sizeof(int)];
    int VAR_4;

    if (!VAR_1) {
        FUNC_4(
            "Could not determine if there are open directory fds");
    }

    VAR_4 = FUNC_8(VAR_3, sizeof(VAR_3), "%d", FUNC_2(VAR_1));
    if (VAR_4 < 0 || VAR_4 >= (int)sizeof(VAR_3)) {
        FUNC_3("Could not get descriptor of /proc/self/fd");
    }

    while ((VAR_2 = FUNC_6(VAR_1))) {
        char VAR_5[VAR_0];
        struct stat VAR_6;
        ssize_t VAR_7;

        if (FUNC_10(VAR_2->d_name, VAR_3))
            continue;
        if (FUNC_10(VAR_2->d_name, ".") || FUNC_10(VAR_2->d_name, ".."))
            continue;

        VAR_7 = FUNC_7(FUNC_2(VAR_1), VAR_2->d_name, VAR_5, sizeof(VAR_5));
        if (VAR_7 < 0) {
            FUNC_4(
                "Could not get information about fd %s", VAR_2->d_name);
        }
        VAR_5[VAR_7] = '\0';

        if (VAR_5[0] != '/') {




            continue;
        }

        if (FUNC_9(VAR_5, &VAR_6) < 0) {
            FUNC_4(
                "Could not get information about open file: %s", VAR_5);
        }

        if (FUNC_0(VAR_6.st_mode)) {
            FUNC_1(VAR_1);

            FUNC_3(
                "The directory '%s' is open (fd %s), can't chroot",
                VAR_5, VAR_2->d_name);
            return;
        }
    }

    FUNC_1(VAR_1);
}
