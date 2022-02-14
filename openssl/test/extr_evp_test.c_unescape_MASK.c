
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static unsigned char* FUNC_5(const char *VAR_0, size_t VAR_1,
                               size_t *VAR_2)
{
    unsigned char *VAR_3, *VAR_4;
    size_t VAR_5;

    if (VAR_1 == 0) {
        *VAR_2 = 0;
        return FUNC_2(1);
    }


    if (!FUNC_4(VAR_3 = VAR_4 = FUNC_1(VAR_1)))
        return ((void*)0);

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        if (*VAR_0 == '\\') {
            if (VAR_5 == VAR_1 - 1 || *++VAR_0 != 'n') {
                FUNC_3("Bad escape sequence in file");
                goto err;
            }
            *VAR_4++ = '\n';
            VAR_5++;
            VAR_0++;
        } else {
            *VAR_4++ = *VAR_0++;
        }
    }

    *VAR_2 = VAR_4 - VAR_3;
    return VAR_3;

 err:
    FUNC_0(VAR_3);
    return ((void*)0);
}
