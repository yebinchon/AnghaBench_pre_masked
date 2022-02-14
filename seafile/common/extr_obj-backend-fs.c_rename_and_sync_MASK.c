
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,int,int *,int *,int *) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char*,char const*,...) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int
FUNC_11 (const char *VAR_5, const char *VAR_6)
{

    char *VAR_7;
    int VAR_8 = 0;

    if (FUNC_8 (VAR_5, VAR_6) < 0) {
        FUNC_9 ("Failed to rename from %s to %s: %s.\n",
                      VAR_5, VAR_6, FUNC_10(VAR_4));
        return -1;
    }

    VAR_7 = FUNC_5 (VAR_6);
    int VAR_9 = FUNC_7 (VAR_7, VAR_3);
    if (VAR_9 < 0) {
        FUNC_9 ("Failed to open dir %s: %s.\n", VAR_7, FUNC_10(VAR_4));
        goto out;
    }



    if (FUNC_3 (VAR_9) < 0) {
        if (VAR_4 != VAR_0) {
            FUNC_9 ("Failed to fsync dir %s: %s.\n",
                          VAR_7, FUNC_10(VAR_4));
            VAR_8 = -1;
        }
        goto out;
    }

out:
    FUNC_4 (VAR_7);
    if (VAR_9 >= 0)
        FUNC_2 (VAR_9);
    return VAR_8;
}
