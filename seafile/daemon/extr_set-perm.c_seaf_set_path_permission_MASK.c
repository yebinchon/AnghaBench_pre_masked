
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;
typedef int gboolean ;
typedef scalar_t__ SeafPathPerm ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*,int ,...) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (int ) ;

int
FUNC_4 (const char *VAR_4, SeafPathPerm VAR_5, gboolean VAR_6)
{
    struct stat VAR_7;
    mode_t VAR_8;

    if (FUNC_2 (VAR_4, &VAR_7) < 0) {
        FUNC_1 ("Failed to stat %s: %s\n", VAR_4, FUNC_3(VAR_3));
        return -1;
    }

    VAR_8 = VAR_7.st_mode;
    if (VAR_5 == VAR_0)
        VAR_8 &= ~(VAR_2);
    else if (VAR_5 == VAR_1)
        VAR_8 |= VAR_2;

    if (FUNC_0 (VAR_4, VAR_8) < 0) {
        FUNC_1 ("Failed to chmod %s to %d: %s\n", VAR_4, VAR_8, FUNC_3(VAR_3));
        return -1;
    }

    return 0;
}
