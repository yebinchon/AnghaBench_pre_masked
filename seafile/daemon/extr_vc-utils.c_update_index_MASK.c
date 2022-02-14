
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct index_state*,int) ;

int
FUNC_7 (struct index_state *VAR_6, const char *VAR_7)
{
    char VAR_8[VAR_4];
    int VAR_9;
    int VAR_10 = 0;

    FUNC_4 (VAR_8, VAR_4, "%s.shadow", VAR_7);
    VAR_9 = FUNC_1 (VAR_8, VAR_2 | VAR_1 | VAR_3 | VAR_0,
                                 0666);
    if (VAR_9 < 0) {
        FUNC_3 ("Failed to open shadow index: %s.\n", FUNC_5(VAR_5));
        return -1;
    }

    if (FUNC_6 (VAR_6, VAR_9) < 0) {
        FUNC_3 ("Failed to write shadow index: %s.\n", FUNC_5(VAR_5));
        FUNC_0 (VAR_9);
        return -1;
    }
    FUNC_0 (VAR_9);

    VAR_10 = FUNC_2 (VAR_8, VAR_7);
    if (VAR_10 < 0) {
        FUNC_3 ("Failed to update index errno=%d %s\n", VAR_5, FUNC_5(VAR_5));
        return -1;
    }
    return 0;
}
