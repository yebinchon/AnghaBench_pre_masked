
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int ttile_t ;
typedef int tsize_t ;
typedef int cmsHTRANSFORM ;
typedef int TIFF ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,unsigned char*,int) ;
 int FUNC_6 (unsigned char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int ,unsigned char*,unsigned char*,int) ;

__attribute__((used)) static
int FUNC_9(cmsHTRANSFORM VAR_2, TIFF* VAR_3, TIFF* VAR_4, int VAR_5)
{
    tsize_t VAR_6 = FUNC_4(VAR_3);
    tsize_t VAR_7 = FUNC_4(VAR_4);
    unsigned char *VAR_8, *VAR_9;
    ttile_t VAR_10, VAR_11 = FUNC_2(VAR_3) / VAR_5;
    uint32 VAR_12, VAR_13;
    int VAR_14, VAR_15;


    FUNC_1(VAR_3, VAR_1, &VAR_12);
    FUNC_1(VAR_3, VAR_0, &VAR_13);

    VAR_14 = (int) VAR_12 * VAR_13;

    VAR_8 = (unsigned char *) FUNC_7(VAR_6 * VAR_5);
    if (!VAR_8) FUNC_0(VAR_6 * VAR_5);

    VAR_9 = (unsigned char *) FUNC_7(VAR_7 * VAR_5);
    if (!VAR_9) FUNC_0(VAR_7 * VAR_5);


    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {

        for (VAR_15=0; VAR_15 < VAR_5; VAR_15++) {

            if (FUNC_3(VAR_3, VAR_10 + (VAR_15* VAR_11),
                VAR_8 + (VAR_15*VAR_6), VAR_6) < 0) goto cleanup;
        }

        FUNC_8(((void*)0), VAR_2, VAR_8, VAR_9, VAR_14);

        for (VAR_15=0; VAR_15 < VAR_5; VAR_15++) {

            if (FUNC_5(VAR_4, VAR_10 + (VAR_15*VAR_11),
                VAR_9 + (VAR_15*VAR_7), VAR_7) < 0) goto cleanup;
        }

    }

    FUNC_6(VAR_8);
    FUNC_6(VAR_9);
    return 1;


cleanup:

    FUNC_6(VAR_8);
    FUNC_6(VAR_9);
    return 0;
}
