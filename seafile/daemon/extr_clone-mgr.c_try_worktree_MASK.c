
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static char *
FUNC_3 (const char *VAR_1)
{
    char *VAR_2;
    unsigned int VAR_3;


    VAR_3 = 1;
    while (1) {
        VAR_2 = FUNC_2("%s-%d", VAR_1, VAR_3++);
        if (FUNC_0(VAR_2, VAR_0) < 0) {
            return VAR_2;
        }

        if (VAR_3 == -1U) {

            FUNC_1(VAR_2);
            return ((void*)0);
        }

        FUNC_1(VAR_2);
    }


}
