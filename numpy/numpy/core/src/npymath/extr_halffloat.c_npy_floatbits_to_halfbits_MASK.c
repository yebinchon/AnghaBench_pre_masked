
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef int npy_uint16 ;


 int FUNC_0 () ;
 int FUNC_1 () ;

npy_uint16 FUNC_2(npy_uint32 VAR_0)
{
    npy_uint32 VAR_1, VAR_2;
    npy_uint16 VAR_3, VAR_4, VAR_5;

    VAR_3 = (npy_uint16) ((VAR_0&0x80000000u) >> 16);
    VAR_1 = (VAR_0&0x7f800000u);


    if (VAR_1 >= 0x47800000u) {
        if (VAR_1 == 0x7f800000u) {

            VAR_2 = (VAR_0&0x007fffffu);
            if (VAR_2 != 0) {

                npy_uint16 VAR_6 = (npy_uint16) (0x7c00u + (VAR_2 >> 13));

                if (VAR_6 == 0x7c00u) {
                    VAR_6++;
                }
                return VAR_3 + VAR_6;
            } else {

                return (npy_uint16) (VAR_3 + 0x7c00u);
            }
        } else {




            return (npy_uint16) (VAR_3 + 0x7c00u);
        }
    }


    if (VAR_1 <= 0x38000000u) {




        if (VAR_1 < 0x33000000u) {






            return VAR_3;
        }

        VAR_1 >>= 23;
        VAR_2 = (0x00800000u + (VAR_0&0x007fffffu));
        VAR_2 >>= (113 - VAR_1);
        VAR_2 += 0x00001000u;

        VAR_5 = (npy_uint16) (VAR_2 >> 13);





        return (npy_uint16) (VAR_3 + VAR_5);
    }


    VAR_4 = (npy_uint16) ((VAR_1 - 0x38000000u) >> 13);

    VAR_2 = (VAR_0&0x007fffffu);
    VAR_2 += 0x00001000u;

    VAR_5 = (npy_uint16) (VAR_2 >> 13);
    return VAR_3 + VAR_4 + VAR_5;

}
