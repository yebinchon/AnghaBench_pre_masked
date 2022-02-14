
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_2(unsigned char *VAR_8, int VAR_9,
                                   const unsigned char *VAR_10, int VAR_11,
                                   int VAR_12)
{
    int VAR_13, VAR_14;
    const unsigned char *VAR_15;

    VAR_15 = VAR_10;
    if (VAR_12 < VAR_1)
        return -1;


    if (VAR_12 == VAR_11) {
        if ((*VAR_15++) != 0x00) {
            FUNC_0(VAR_0,
                   VAR_6);
            return -1;
        }
        VAR_11--;
    }

    if ((VAR_12 != (VAR_11 + 1)) || (*(VAR_15++) != 0x01)) {
        FUNC_0(VAR_0,
               VAR_4);
        return -1;
    }


    VAR_14 = VAR_11 - 1;
    for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
        if (*VAR_15 != 0xff) {
            if (*VAR_15 == 0) {
                VAR_15++;
                break;
            } else {
                FUNC_0(VAR_0,
                       VAR_2);
                return -1;
            }
        }
        VAR_15++;
    }

    if (VAR_13 == VAR_14) {
        FUNC_0(VAR_0,
               VAR_7);
        return -1;
    }

    if (VAR_13 < 8) {
        FUNC_0(VAR_0,
               VAR_3);
        return -1;
    }
    VAR_13++;
    VAR_14 -= VAR_13;
    if (VAR_14 > VAR_9) {
        FUNC_0(VAR_0, VAR_5);
        return -1;
    }
    FUNC_1(VAR_8, VAR_15, (unsigned int)VAR_14);

    return VAR_14;
}
