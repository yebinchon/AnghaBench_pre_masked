
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int check ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char,int) ;

__attribute__((used)) static int FUNC_7(size_t (*VAR_0)(unsigned char *, size_t),
    int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    unsigned char VAR_6[31] = {0}, VAR_7[31] = {0}, VAR_8[7];
    int VAR_9 = 0, VAR_10 = 0;

    int VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
        size_t VAR_12 = 0;

        int VAR_13;
        for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
            VAR_12 = VAR_0(VAR_7, sizeof(VAR_7));
            if (VAR_12 == sizeof(VAR_7))
                break;
            VAR_9++;
        }






        size_t VAR_14;
        for (VAR_14 = 0; VAR_14 < sizeof(VAR_7) - 1; VAR_14++) {
            if (VAR_7[VAR_14] == 0 && VAR_7[VAR_14+1] == 0) {
                VAR_10++;
            }
        }

        if (!FUNC_1(VAR_12, sizeof(VAR_7)))
            goto end;
        if (!FUNC_0(!FUNC_4(VAR_6, VAR_7, sizeof(VAR_7))))
            goto end;


        unsigned char *VAR_15 = &VAR_7[sizeof(VAR_7) - sizeof(VAR_8)];
        FUNC_6(VAR_8, VAR_15[0], 7);
        if (!FUNC_0(!FUNC_4(VAR_8, VAR_15, sizeof(VAR_8))))
            goto end;


        FUNC_5(VAR_6, VAR_7, sizeof(VAR_7));
    }

    if (!FUNC_3(VAR_10, VAR_4))
        goto end;

    if (!FUNC_2(VAR_9, VAR_2))
        goto end;

    VAR_5 = 1;
end:
    return VAR_5;
}
