
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_int_t ;
struct TYPE_3__ {int width; int height; int* byte_data; } ;
typedef TYPE_1__ greyscale_t ;



void FUNC_0(greyscale_t * VAR_0, mp_int_t VAR_1) {
    mp_int_t VAR_2 = (VAR_1<<4) | VAR_1;
    for (int VAR_3 = 0; VAR_3 < ((VAR_0->width*VAR_0->height+1)>>1); VAR_3++) {
        VAR_0->byte_data[VAR_3] = VAR_2;
    }
}
