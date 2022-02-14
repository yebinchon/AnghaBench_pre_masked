
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
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,int,unsigned char*,int) ;
 int FUNC_6 (unsigned char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int ,unsigned char*,unsigned char*,int) ;

__attribute__((used)) static
int FUNC_9(cmsHTRANSFORM VAR_3, TIFF* VAR_4, TIFF* VAR_5, int VAR_6)
{
    tsize_t VAR_7 = FUNC_4(VAR_4);
    tsize_t VAR_8 = FUNC_4(VAR_5);
    unsigned char *VAR_9, *VAR_10;
    ttile_t VAR_11, VAR_12 = FUNC_2(VAR_4) / VAR_6;
    uint32 VAR_13;
    uint32 VAR_14;
    uint32 VAR_15;
    int VAR_16;
    int VAR_17;

    FUNC_1(VAR_4, VAR_1, &VAR_13);
    FUNC_1(VAR_4, VAR_2, &VAR_14);
    FUNC_1(VAR_4, VAR_0, &VAR_15);


    if (VAR_14 == 0 || VAR_14 > VAR_15)
        VAR_14 = VAR_15;

    VAR_9 = (unsigned char *) FUNC_7(VAR_7 * VAR_6);
    if (!VAR_9) FUNC_0(VAR_7 * VAR_6);

    VAR_10 = (unsigned char *) FUNC_7(VAR_8 * VAR_6);
    if (!VAR_10) FUNC_0(VAR_8 * VAR_6);


    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {

        for (VAR_16=0; VAR_16 < VAR_6; VAR_16++) {

            if (FUNC_3(VAR_4, VAR_11 + (VAR_16 * VAR_12),
                VAR_9 + (VAR_16 * VAR_7), VAR_7) < 0) goto cleanup;
        }

        VAR_17 = (int) VAR_13 * (VAR_15 < VAR_14 ? VAR_15 : VAR_14);
        VAR_15 -= VAR_14;

        FUNC_8(((void*)0), VAR_3, VAR_9, VAR_10, VAR_17);

        for (VAR_16=0; VAR_16 < VAR_6; VAR_16++) {
            if (FUNC_5(VAR_5, VAR_11 + (VAR_16 * VAR_12),
                VAR_10 + VAR_16 * VAR_8, VAR_8) < 0) goto cleanup;
        }

    }

    FUNC_6(VAR_9);
    FUNC_6(VAR_10);
    return 1;

cleanup:

    FUNC_6(VAR_9);
    FUNC_6(VAR_10);
    return 0;
}
