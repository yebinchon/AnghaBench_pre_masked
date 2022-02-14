
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_1, const char *VAR_2)
{
    char *VAR_3;
    const char *VAR_4, *VAR_5;
    int VAR_6;

    if (VAR_2 == ((void*)0)) {
        FUNC_1(VAR_0, "no filename extension; cannot create output filename!\n");
        FUNC_0(1);
    }

    if (VAR_1 == ((void*)0))
        VAR_4 = "out";
    else {

        VAR_4 = FUNC_5(VAR_1, '/');
        if (VAR_4 == ((void*)0))
            VAR_4 = FUNC_5(VAR_1, '\\');
        if (VAR_4 != ((void*)0))
            VAR_4++;
        else
            VAR_4 = VAR_1;
    }


    if (*VAR_4 == '\0')
        VAR_4 = "out";


    VAR_6 = FUNC_3(VAR_4);
    VAR_5 = FUNC_5(VAR_4, '.');
    if (VAR_5 != ((void*)0))
        VAR_6 -= FUNC_3(VAR_5);


    VAR_3 = (char *)FUNC_2(VAR_6 + FUNC_3(VAR_2) + 1);
    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_0, "failed to allocate memory for output filename\n");
        FUNC_0(1);
    }

    FUNC_4(VAR_3, VAR_4, VAR_6);
    FUNC_4(VAR_3 + VAR_6, VAR_2, FUNC_3(VAR_2));
    *(VAR_3 + VAR_6 + FUNC_3(VAR_2)) = '\0';


    return (VAR_3);
}
