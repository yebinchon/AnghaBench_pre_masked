
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sei_t ;
typedef int sei_msgtype_t ;
typedef int sei_message_t ;
typedef int libcaption_stauts_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int*,size_t,int const*,size_t) ;
 int FUNC_1 (int *,double) ;
 int FUNC_2 (int *,int *) ;
 int* FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,size_t) ;

libcaption_stauts_t FUNC_5(sei_t* VAR_2, const uint8_t* VAR_3, size_t VAR_4, double VAR_5)
{
    FUNC_1(VAR_2, VAR_5);
    int VAR_6 = 0;


    while (1 < VAR_4) {
        size_t VAR_7 = 0;
        size_t VAR_8 = 0;

        while (0 < VAR_4 && 255 == (*VAR_3)) {
            VAR_7 += 255;
            ++VAR_3, --VAR_4;
        }

        if (0 == VAR_4) {
            return VAR_0;
        }

        VAR_7 += (*VAR_3);
        ++VAR_3, --VAR_4;

        while (0 < VAR_4 && 255 == (*VAR_3)) {
            VAR_8 += 255;
            ++VAR_3, --VAR_4;
        }

        if (0 == VAR_4) {
            return VAR_0;
        }

        VAR_8 += (*VAR_3);
        ++VAR_3, --VAR_4;

        if (VAR_8) {
            sei_message_t* VAR_9 = FUNC_4((sei_msgtype_t)VAR_7, 0, VAR_8);
            uint8_t* VAR_10 = FUNC_3(VAR_9);
            size_t VAR_11 = FUNC_0(VAR_10, VAR_8, VAR_3, VAR_4);
            FUNC_2(VAR_2, VAR_9);

            if (VAR_11 < VAR_8) {
                return VAR_0;
            }

            VAR_3 += VAR_11;
            VAR_4 -= VAR_11;
            ++VAR_6;
        }
    }


    return VAR_1;
}
