
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0) {

    const char *VAR_1, *VAR_2, *VAR_3;


    VAR_1 = FUNC_0("redis.arrays.names");
    for(VAR_2 = VAR_1; VAR_2;) {
        VAR_3 = FUNC_1(VAR_2, ',');
        if(VAR_3) {
            if(FUNC_3(VAR_2, VAR_0, VAR_3 - VAR_2) == 0) {
                return 1;
            }
        } else {
            if(FUNC_2(VAR_2, VAR_0) == 0) {
                return 1;
            }
            break;
        }
        VAR_2 = VAR_3 + 1;
    }

    return 0;
}
