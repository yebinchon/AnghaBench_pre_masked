
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint64 ;
typedef int npy_uint16 ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

npy_uint16 FUNC_3(npy_uint64 VAR_0)
{
    npy_uint64 VAR_1, VAR_2;
    npy_uint16 VAR_3, VAR_4, VAR_5;

    VAR_3 = (VAR_0&0x8000000000000000ULL) >> 48;
    VAR_1 = (VAR_0&0x7ff0000000000000ULL);


    if (VAR_1 >= 0x40f0000000000000ULL) {
        if (VAR_1 == 0x7ff0000000000000ULL) {

            VAR_2 = (VAR_0&0x000fffffffffffffULL);
            if (VAR_2 != 0) {

                npy_uint16 VAR_6 = (npy_uint16) (0x7c00u + (VAR_2 >> 42));

                if (VAR_6 == 0x7c00u) {
                    VAR_6++;
                }
                return VAR_3 + VAR_6;
            } else {

                return VAR_3 + 0x7c00u;
            }
        } else {




            return VAR_3 + 0x7c00u;
        }
    }


    if (VAR_1 <= 0x3f00000000000000ULL) {




        if (VAR_1 < 0x3e60000000000000ULL) {






            return VAR_3;
        }

        VAR_1 >>= 52;
        VAR_2 = (0x0010000000000000ULL + (VAR_0&0x000fffffffffffffULL));
        FUNC_0(VAR_1 - 998 >= 0);
        VAR_2 <<= (VAR_1 - 998);
        VAR_2 += 0x0010000000000000ULL;

        VAR_5 = (npy_uint16) (VAR_2 >> 53);





        return VAR_3 + VAR_5;
    }


    VAR_4 = (npy_uint16) ((VAR_1 - 0x3f00000000000000ULL) >> 42);

    VAR_2 = (VAR_0&0x000fffffffffffffULL);
    VAR_2 += 0x0000020000000000ULL;

    VAR_5 = (npy_uint16) (VAR_2 >> 42);
    return VAR_3 + VAR_4 + VAR_5;

}
