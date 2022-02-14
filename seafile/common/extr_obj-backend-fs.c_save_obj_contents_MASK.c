
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gboolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*,int ) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int,void const*,int) ;

__attribute__((used)) static int
FUNC_9 (const char *VAR_2, const void *VAR_3, int VAR_4, gboolean VAR_5)
{
    char VAR_6[VAR_0];
    int VAR_7;

    FUNC_6 (VAR_6, VAR_0, "%s.XXXXXX", VAR_2);
    VAR_7 = FUNC_2 (VAR_6);
    if (VAR_7 < 0) {
        FUNC_5 ("[obj backend] Failed to open tmp file %s: %s.\n",
                      VAR_6, FUNC_7(VAR_1));
        return -1;
    }

    if (FUNC_8 (VAR_7, VAR_3, VAR_4) < 0) {
        FUNC_5 ("[obj backend] Failed to write obj %s: %s.\n",
                      VAR_6, FUNC_7(VAR_1));
        return -1;
    }

    if (VAR_5 && FUNC_1 (VAR_7) < 0)
        return -1;


    if (FUNC_0 (VAR_7) < 0) {
        FUNC_5 ("[obj backend Failed close obj %s: %s.\n",
                      VAR_6, FUNC_7(VAR_1));
        return -1;
    }

    if (VAR_5) {
        if (FUNC_4 (VAR_6, VAR_2) < 0)
            return -1;
    } else {
        if (FUNC_3 (VAR_6, VAR_2) < 0) {
            FUNC_5 ("[obj backend] Failed to rename %s: %s.\n",
                          VAR_2, FUNC_7(VAR_1));
            return -1;
        }
    }

    return 0;
}
