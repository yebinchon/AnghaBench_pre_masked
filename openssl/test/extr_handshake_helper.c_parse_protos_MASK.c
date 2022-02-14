
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*,char const*,size_t) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, unsigned char **VAR_1, size_t *VAR_2)
{
    size_t VAR_3, VAR_4, VAR_5;

    VAR_3 = FUNC_6(VAR_0);


    if (!FUNC_4(*VAR_1)

            || !FUNC_3(*VAR_1 = FUNC_1(VAR_3 + 1)))
        return 0;
    *VAR_2 = VAR_3 + 1;





    FUNC_5(*VAR_1 + 1, VAR_0, VAR_3);

    VAR_5 = 0;
    VAR_4 = VAR_5 + 1;
    while (VAR_4 <= VAR_3) {
        if ((*VAR_1)[VAR_4] == ',') {
            if (!FUNC_2(VAR_4 - 1, VAR_5))
                goto err;
            (*VAR_1)[VAR_5] = (unsigned char)(VAR_4 - 1 - VAR_5);
            VAR_5 = VAR_4;
        }
        VAR_4++;
    }
    if (!FUNC_2(VAR_3, VAR_5))
        goto err;
    (*VAR_1)[VAR_5] = (unsigned char)(VAR_3 - VAR_5);
    return 1;

err:
    FUNC_0(*VAR_1);
    *VAR_1 = ((void*)0);
    return 0;
}
