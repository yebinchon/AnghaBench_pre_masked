
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct stat {int st_uid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;

char* FUNC_4(void) {
        uid_t VAR_1;
        struct stat VAR_2;

        if (FUNC_2(VAR_0) && FUNC_0(VAR_0, &VAR_2) >= 0)
                VAR_1 = VAR_2.st_uid;
        else
                VAR_1 = FUNC_1();

        return FUNC_3(VAR_1);
}
