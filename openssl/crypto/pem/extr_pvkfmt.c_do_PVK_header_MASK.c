
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_1 (unsigned char const**) ;

__attribute__((used)) static int FUNC_2(const unsigned char **VAR_7, unsigned int VAR_8,
                         int VAR_9,
                         unsigned int *VAR_10, unsigned int *VAR_11)
{
    const unsigned char *VAR_12 = *VAR_7;
    unsigned int VAR_13, VAR_14;

    if (VAR_9) {
        if (VAR_8 < 20) {
            FUNC_0(VAR_1, VAR_4);
            return 0;
        }
    } else {
        if (VAR_8 < 24) {
            FUNC_0(VAR_1, VAR_4);
            return 0;
        }
        VAR_13 = FUNC_1(&VAR_12);
        if (VAR_13 != VAR_0) {
            FUNC_0(VAR_1, VAR_2);
            return 0;
        }
    }

    VAR_12 += 4;


        FUNC_1(&VAR_12);
    VAR_14 = FUNC_1(&VAR_12);
    *VAR_10 = FUNC_1(&VAR_12);
    *VAR_11 = FUNC_1(&VAR_12);

    if (*VAR_11 > VAR_5 || *VAR_10 > VAR_6)
        return 0;

    if (VAR_14 && *VAR_10 == 0) {
        FUNC_0(VAR_1, VAR_3);
        return 0;
    }

    *VAR_7 = VAR_12;
    return 1;
}
