
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned char*,size_t) ;
 unsigned char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (char const*,size_t,unsigned char const*,int,int,int *,size_t,unsigned char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (unsigned char*,int,int,int *,int *,int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_9, size_t VAR_10,
                      const unsigned char *VAR_11, size_t VAR_12,
                      uint64_t VAR_13, uint64_t VAR_14, uint64_t VAR_15, uint64_t VAR_16,
                      unsigned char *VAR_17, size_t VAR_18, EVP_MD *VAR_19)
{
    int VAR_20 = 0;
    unsigned char *VAR_21;
    uint32_t *VAR_22, *VAR_23, *VAR_24;
    uint64_t VAR_25, VAR_26, VAR_27;



    if (VAR_14 == 0 || VAR_15 == 0 || VAR_13 < 2 || (VAR_13 & (VAR_13 - 1)))
        return 0;

    if (VAR_15 > VAR_6 / VAR_14) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }






    if (16 * VAR_14 <= VAR_5) {
        if (VAR_13 >= (((uint64_t)1) << (16 * VAR_14))) {
            FUNC_0(VAR_1, VAR_2);
            return 0;
        }
    }
    VAR_26 = VAR_15 * 128 * VAR_14;




    if (VAR_26 > VAR_4) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }





    VAR_25 = VAR_8 / (32 * sizeof(uint32_t));
    if (VAR_13 + 2 > VAR_25 / VAR_14) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }
    VAR_27 = 32 * VAR_14 * (VAR_13 + 2) * sizeof(uint32_t);


    if (VAR_26 > VAR_8 - VAR_27) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }


    if (VAR_16 > VAR_7)
        VAR_16 = VAR_7;

    if (VAR_26 + VAR_27 > VAR_16) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }


    if (VAR_17 == ((void*)0))
        return 1;

    VAR_21 = FUNC_2((size_t)(VAR_26 + VAR_27));
    if (VAR_21 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }
    VAR_22 = (uint32_t *)(VAR_21 + VAR_26);
    VAR_24 = VAR_22 + 32 * VAR_14;
    VAR_23 = VAR_24 + 32 * VAR_14;
    if (FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12, 1, VAR_19,
                          (int)VAR_26, VAR_21) == 0)
        goto err;

    for (VAR_25 = 0; VAR_25 < VAR_15; VAR_25++)
        FUNC_4(VAR_21 + 128 * VAR_14 * VAR_25, VAR_14, VAR_13, VAR_22, VAR_24, VAR_23);

    if (FUNC_3(VAR_9, VAR_10, VAR_21, (int)VAR_26, 1, VAR_19,
                          VAR_18, VAR_17) == 0)
        goto err;
    VAR_20 = 1;
 err:
    if (VAR_20 == 0)
        FUNC_0(VAR_1, VAR_3);

    FUNC_1(VAR_21, (size_t)(VAR_26 + VAR_27));
    return VAR_20;
}
