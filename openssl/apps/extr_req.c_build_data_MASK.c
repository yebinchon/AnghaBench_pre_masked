
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int const,int ) ;
 int FUNC_4 (char*,int const,char const*,char*,char const*) ;
 int FUNC_5 (int,int,int) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(char *VAR_3, const char *VAR_4,
                         char *VAR_5, int VAR_6, int VAR_7,
                         char *VAR_8, const int VAR_9,
                         const char *VAR_10, const char *VAR_11
                         )
{
    int VAR_12;
 start:
    if (!VAR_0)
        FUNC_1(VAR_1, "%s [%s]:", VAR_3, VAR_4);
    (void)FUNC_0(VAR_1);
    if (VAR_5 != ((void*)0)) {
        if (!FUNC_4(VAR_8, VAR_9, VAR_5, "\n", VAR_10))
            return 0;
        FUNC_1(VAR_1, "%s\n", VAR_5);
    } else {
        VAR_8[0] = '\0';
        if (!VAR_0) {
            if (!FUNC_3(VAR_8, VAR_9, VAR_2))
                return 0;
        } else {
            VAR_8[0] = '\n';
            VAR_8[1] = '\0';
        }
    }

    if (VAR_8[0] == '\0')
        return 0;
    if (VAR_8[0] == '\n') {
        if ((VAR_4 == ((void*)0)) || (VAR_4[0] == '\0'))
            return 1;
        if (!FUNC_4(VAR_8, VAR_9, VAR_4, "\n", VAR_11))
            return 0;
    } else if ((VAR_8[0] == '.') && (VAR_8[1] == '\n')) {
        return 1;
    }

    VAR_12 = FUNC_6(VAR_8);
    if (VAR_8[VAR_12 - 1] != '\n') {
        FUNC_1(VAR_1, "weird input :-(\n");
        return 0;
    }
    VAR_8[--VAR_12] = '\0';



    if (!FUNC_5(VAR_12, VAR_6, VAR_7)) {
        if (VAR_0 || VAR_5)
            return 0;
        goto start;
    }
    return 2;
}
