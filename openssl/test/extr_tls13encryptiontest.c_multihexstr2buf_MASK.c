
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char const) ;
 unsigned char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static unsigned char *FUNC_4(const char *VAR_0[3], size_t *VAR_1)
{
    size_t VAR_2, VAR_3, VAR_4 = 0;
    unsigned char *VAR_5;
    size_t VAR_6 = 0;


    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        VAR_6 += FUNC_3(VAR_0[VAR_2]);
        if ((VAR_6 & 1) != 0)
            return ((void*)0);
    }

    VAR_6 /= 2;
    VAR_5 = FUNC_2(VAR_6);
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        for (VAR_3 = 0; VAR_0[VAR_2][VAR_3] != 0; VAR_3 += 2) {
            int VAR_7, VAR_8;

            VAR_7 = FUNC_1(VAR_0[VAR_2][VAR_3]);
            VAR_8 = FUNC_1(VAR_0[VAR_2][VAR_3 + 1]);

            if (VAR_7 < 0 || VAR_8 < 0) {
                FUNC_0(VAR_5);
                return ((void*)0);
            }
            VAR_5[VAR_4++] = (VAR_7 << 4) | VAR_8;
        }
    }

    *VAR_1 = VAR_6;
    return VAR_5;
}
