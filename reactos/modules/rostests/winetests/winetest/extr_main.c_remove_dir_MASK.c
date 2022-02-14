
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* cFileName; char* cAlternateFileName; int dwFileAttributes; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,size_t) ;
 int FUNC_8 (int ,char*,char const*,int ) ;
 int FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11 (const char *VAR_4)
{
    HANDLE VAR_5;
    WIN32_FIND_DATA VAR_6;
    char VAR_7[VAR_2];
    size_t VAR_8 = FUNC_10 (VAR_4);


    FUNC_7 (VAR_7, VAR_4, VAR_8);
    FUNC_9 (VAR_7 + VAR_8++, "\\*");
    VAR_5 = FUNC_2 (VAR_7, &VAR_6);
    if (VAR_5 == VAR_1) return;

    do {
        char *VAR_9 = VAR_6.cFileName;

        if (!VAR_9[0]) VAR_9 = VAR_6.cAlternateFileName;
        if (FUNC_6 (VAR_9)) continue;
        FUNC_9 (VAR_7 + VAR_8, VAR_9);
        if (VAR_0 & VAR_6.dwFileAttributes)
            FUNC_11(VAR_7);
        else if (!FUNC_0 (VAR_7))
            FUNC_8 (VAR_3, "Can't delete file %s: error %d",
                    VAR_7, FUNC_4 ());
    } while (FUNC_3 (VAR_5, &VAR_6));
    FUNC_1 (VAR_5);
    if (!FUNC_5 (VAR_4))
        FUNC_8 (VAR_3, "Can't remove directory %s: error %d",
                VAR_4, FUNC_4 ());
}
