
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int * FUNC_2 (struct index_state*,char*,int ,int ) ;
 int FUNC_3 (struct index_state*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;

void FUNC_6 (struct index_state *VAR_0, const char *VAR_1)
{
    char *VAR_2 = FUNC_1(VAR_1);
    char *VAR_3;


    while (1) {
        VAR_3 = FUNC_5 (VAR_2, '/');
        if (!VAR_3)
            break;

        *VAR_3 = 0;

        if (FUNC_2 (VAR_0, VAR_2, FUNC_4(VAR_2), 0) != ((void*)0)) {
            FUNC_3 (VAR_0, VAR_2);
            break;
        }
    }

    FUNC_0 (VAR_2);
}
