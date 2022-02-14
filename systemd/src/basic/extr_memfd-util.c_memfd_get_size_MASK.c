
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat {int st_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,struct stat*) ;

int FUNC_2(int VAR_1, uint64_t *VAR_2) {
        struct stat VAR_3;
        int VAR_4;

        FUNC_0(VAR_1 >= 0);
        FUNC_0(*VAR_2);

        VAR_4 = FUNC_1(VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return -VAR_0;

        *VAR_2 = VAR_3.st_size;
        return 0;
}
