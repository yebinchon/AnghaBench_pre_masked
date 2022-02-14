
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct timespec {int dummy; } ;
struct stat {struct timespec st_mtim; struct timespec st_atim; } ;
typedef int CopyFlags ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,struct stat*) ;
 scalar_t__ FUNC_5 (int,struct timespec*) ;

int FUNC_6(int VAR_2, int VAR_3, CopyFlags VAR_4) {
        struct timespec VAR_5[2];
        struct stat VAR_6;

        FUNC_1(VAR_2 >= 0);
        FUNC_1(VAR_3 >= 0);

        if (FUNC_4(VAR_2, &VAR_6) < 0)
                return -VAR_1;

        VAR_5[0] = VAR_6.st_atim;
        VAR_5[1] = VAR_6.st_mtim;

        if (FUNC_5(VAR_3, VAR_5) < 0)
                return -VAR_1;

        if (FUNC_0(VAR_4, VAR_0)) {
                usec_t VAR_7;

                if (FUNC_2(VAR_2, &VAR_7) >= 0)
                        (void) FUNC_3(VAR_3, VAR_7);
        }

        return 0;
}
