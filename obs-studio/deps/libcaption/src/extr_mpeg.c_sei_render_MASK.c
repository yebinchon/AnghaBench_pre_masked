
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int head; } ;
typedef TYPE_1__ sei_t ;
typedef int sei_message_t ;


 size_t FUNC_0 (int*,int*,int) ;
 int* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

size_t FUNC_6(sei_t* VAR_0, uint8_t* VAR_1)
{
    if (!VAR_0 || !VAR_0->head) {
        return 0;
    }

    size_t VAR_2, VAR_3 = 2;
    sei_message_t* VAR_4;
    (*VAR_1) = 6;
    ++VAR_1;

    for (VAR_4 = FUNC_2(VAR_0); VAR_4; VAR_4 = FUNC_3(VAR_4)) {
        int VAR_5 = FUNC_5(VAR_4);
        int VAR_6 = (int)FUNC_4(VAR_4);
        uint8_t* VAR_7 = FUNC_1(VAR_4);

        while (255 <= VAR_5) {
            (*VAR_1) = 255;
            ++VAR_1;
            ++VAR_3;
            VAR_5 -= 255;
        }

        (*VAR_1) = VAR_5;
        ++VAR_1;
        ++VAR_3;

        while (255 <= VAR_6) {
            (*VAR_1) = 255;
            ++VAR_1;
            ++VAR_3;
            VAR_6 -= 255;
        }

        (*VAR_1) = VAR_6;
        ++VAR_1;
        ++VAR_3;

        if (0 >= (VAR_2 = FUNC_0(VAR_1, VAR_7, VAR_6))) {
            return 0;
        }

        VAR_1 += VAR_2;
        VAR_3 += VAR_2;
    }


    (*VAR_1) = 0x80;
    return VAR_3;
}
