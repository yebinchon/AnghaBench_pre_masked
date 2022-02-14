
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_2, int VAR_3, int VAR_4,
                    int (*VAR_5) (const char *VAR_6, int VAR_7, void *VAR_8),
                    void *VAR_9)
{
    int VAR_10;
    const char *VAR_11, *VAR_12, *VAR_13;

    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_11 = VAR_2;
    for (;;) {
        if (VAR_4) {
            while (*VAR_11 && FUNC_1((unsigned char)*VAR_11))
                VAR_11++;
        }
        VAR_13 = FUNC_2(VAR_11, VAR_3);
        if (VAR_13 == VAR_11 || *VAR_11 == '\0')
            VAR_10 = VAR_5(((void*)0), 0, VAR_9);
        else {
            if (VAR_13)
                VAR_12 = VAR_13 - 1;
            else
                VAR_12 = VAR_11 + FUNC_3(VAR_11) - 1;
            if (VAR_4) {
                while (FUNC_1((unsigned char)*VAR_12))
                    VAR_12--;
            }
            VAR_10 = VAR_5(VAR_11, VAR_12 - VAR_11 + 1, VAR_9);
        }
        if (VAR_10 <= 0)
            return VAR_10;
        if (VAR_13 == ((void*)0))
            return 1;
        VAR_11 = VAR_13 + 1;
    }
}
