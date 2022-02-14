
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint64_t ;
struct security_info {int notify_access; } ;
struct security_assessor {int dummy; } ;


 int FUNC_0 (char**) ;
 char* FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(
                const struct security_assessor *VAR_0,
                const struct security_info *VAR_1,
                const void *VAR_2,
                uint64_t *VAR_3,
                char **VAR_4) {

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        *VAR_3 = FUNC_1(VAR_1->notify_access, "all");
        *VAR_4 = ((void*)0);

        return 0;
}
