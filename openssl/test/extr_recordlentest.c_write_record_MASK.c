
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,size_t,size_t*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_1, size_t VAR_2, int VAR_3, int VAR_4)
{
    unsigned char VAR_5[VAR_0];
    size_t VAR_6;
    unsigned char VAR_7[256];

    FUNC_1(VAR_7, 0, sizeof(VAR_7));

    VAR_5[0] = VAR_3;
    VAR_5[1] = (VAR_4 >> 8) & 0xff;
    VAR_5[2] = VAR_4 & 0xff;
    VAR_5[3] = (VAR_2 >> 8) & 0xff;
    VAR_5[4] = VAR_2 & 0xff;

    if (!FUNC_0(VAR_1, VAR_5, VAR_0, &VAR_6)
            || VAR_6 != VAR_0)
        return 0;

    while (VAR_2 > 0) {
        size_t VAR_8;

        if (VAR_2 > sizeof(VAR_7))
            VAR_8 = sizeof(VAR_7);
        else
            VAR_8 = VAR_2;

        if (!FUNC_0(VAR_1, VAR_7, VAR_8, &VAR_6)
                || VAR_6 != VAR_8)
            return 0;

        VAR_2 -= VAR_8;
    }

    return 1;
}
