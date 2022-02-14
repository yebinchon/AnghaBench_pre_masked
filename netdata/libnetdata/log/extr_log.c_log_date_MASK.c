
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int *,struct tm*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,size_t,char*,struct tm*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(char *VAR_0, size_t VAR_1) {
    if(FUNC_3(!VAR_0 || !VAR_1))
        return;

    time_t VAR_2;
    struct tm *VAR_3, VAR_4;

    VAR_2 = FUNC_1();
    VAR_3 = FUNC_0(&VAR_2, &VAR_4);

    if (VAR_3 == ((void*)0)) {
        VAR_0[0] = '\0';
        return;
    }

    if (FUNC_3(FUNC_2(VAR_0, VAR_1, "%Y-%m-%d %H:%M:%S", VAR_3) == 0))
        VAR_0[0] = '\0';

    VAR_0[VAR_1 - 1] = '\0';
}
