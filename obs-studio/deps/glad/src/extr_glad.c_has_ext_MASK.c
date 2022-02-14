
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3) {



        const char *VAR_4;
        const char *VAR_5;
        const char *VAR_6;
        VAR_4 = (const char *)FUNC_1(VAR_1);
        if(VAR_4 == ((void*)0) || VAR_3 == ((void*)0)) {
            return 0;
        }

        while(1) {
            VAR_5 = FUNC_5(VAR_4, VAR_3);
            if(VAR_5 == ((void*)0)) {
                return 0;
            }

            VAR_6 = VAR_5 + FUNC_4(VAR_3);
            if((VAR_5 == VAR_4 || *(VAR_5 - 1) == ' ') &&
                (*VAR_6 == ' ' || *VAR_6 == '\0')) {
                return 1;
            }
            VAR_4 = VAR_6;
        }
    return 0;
}
