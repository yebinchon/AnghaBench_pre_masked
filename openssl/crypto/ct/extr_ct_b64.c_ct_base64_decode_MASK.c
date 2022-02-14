
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, unsigned char **VAR_4)
{
    size_t VAR_5 = FUNC_4(VAR_3);
    int VAR_6, VAR_7;
    unsigned char *VAR_8 = ((void*)0);

    if (VAR_5 == 0) {
        *VAR_4 = ((void*)0);
        return 0;
    }

    VAR_6 = (VAR_5 / 4) * 3;
    VAR_8 = FUNC_3(VAR_6);
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        goto err;
    }

    VAR_6 = FUNC_1(VAR_8, (unsigned char *)VAR_3, VAR_5);
    if (VAR_6 < 0) {
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }


    VAR_7 = 0;
    while (VAR_3[--VAR_5] == '=') {
        --VAR_6;
        if (++VAR_7 > 2)
            goto err;
    }

    *VAR_4 = VAR_8;
    return VAR_6;
err:
    FUNC_2(VAR_8);
    return -1;
}
