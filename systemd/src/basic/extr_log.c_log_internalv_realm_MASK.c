
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef size_t LogRealm ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int,int,char const*,int,char const*,int *,int *,int *,int *,char*) ;
 scalar_t__* VAR_3 ;
 int FUNC_5 (char*,int,char const*,int ) ;

int FUNC_6(
                int VAR_4,
                int VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                const char *VAR_9,
                va_list VAR_10) {

        LogRealm VAR_11 = FUNC_2(VAR_4);
        char VAR_12[VAR_0];
        VAR_1;

        if (FUNC_3(FUNC_1(VAR_4) > VAR_3[VAR_11]))
                return -FUNC_0(VAR_5);


        VAR_2 = FUNC_0(VAR_5);

        (void) FUNC_5(VAR_12, sizeof VAR_12, VAR_9, VAR_10);

        return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_12);
}
