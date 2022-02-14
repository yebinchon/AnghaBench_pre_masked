
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
typedef int SeafStat ;


 int FUNC_0 (struct index_state*,char*,int *) ;
 char* FUNC_1 (char const*,char*,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int * FUNC_4 (struct index_state*,char const*,int ,int ) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8 (const char *VAR_0,
                                struct index_state *VAR_1,
                                const char *VAR_2)
{
    if (FUNC_4 (VAR_1, VAR_2, FUNC_7(VAR_2), 0) != ((void*)0))
        return;

    char *VAR_3 = FUNC_3 (VAR_2);


    if (FUNC_6 (VAR_3, ".") == 0) {
        FUNC_2 (VAR_3);
        return;
    }

    char *VAR_4 = FUNC_1 (VAR_0, VAR_3, ((void*)0));
    SeafStat VAR_5;
    if (FUNC_5 (VAR_4, &VAR_5) < 0) {
        goto out;
    }

    FUNC_0 (VAR_1, VAR_3, &VAR_5);

out:
    FUNC_2 (VAR_3);
    FUNC_2 (VAR_4);
}
