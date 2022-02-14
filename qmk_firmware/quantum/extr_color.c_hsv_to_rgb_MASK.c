
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ s; size_t v; int h; } ;
struct TYPE_5__ {size_t r; size_t g; size_t b; } ;
typedef TYPE_1__ RGB ;
typedef TYPE_2__ HSV ;


 int * VAR_0 ;
 void* FUNC_0 (int *) ;

RGB FUNC_1(HSV VAR_1) {
    RGB VAR_2;
    uint8_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
    uint16_t VAR_8, VAR_9, VAR_10;

    if (VAR_1.s == 0) {



        VAR_2.r = VAR_1.v;
        VAR_2.g = VAR_1.v;
        VAR_2.b = VAR_1.v;

        return VAR_2;
    }

    VAR_8 = VAR_1.h;
    VAR_9 = VAR_1.s;



    VAR_10 = VAR_1.v;


    VAR_3 = VAR_8 * 6 / 255;
    VAR_4 = (VAR_8 * 2 - VAR_3 * 85) * 3;

    VAR_5 = (VAR_10 * (255 - VAR_9)) >> 8;
    VAR_6 = (VAR_10 * (255 - ((VAR_9 * VAR_4) >> 8))) >> 8;
    VAR_7 = (VAR_10 * (255 - ((VAR_9 * (255 - VAR_4)) >> 8))) >> 8;

    switch (VAR_3) {
        case 6:
        case 0:
            VAR_2.r = VAR_10;
            VAR_2.g = VAR_7;
            VAR_2.b = VAR_5;
            break;
        case 1:
            VAR_2.r = VAR_6;
            VAR_2.g = VAR_10;
            VAR_2.b = VAR_5;
            break;
        case 2:
            VAR_2.r = VAR_5;
            VAR_2.g = VAR_10;
            VAR_2.b = VAR_7;
            break;
        case 3:
            VAR_2.r = VAR_5;
            VAR_2.g = VAR_6;
            VAR_2.b = VAR_10;
            break;
        case 4:
            VAR_2.r = VAR_7;
            VAR_2.g = VAR_5;
            VAR_2.b = VAR_10;
            break;
        default:
            VAR_2.r = VAR_10;
            VAR_2.g = VAR_5;
            VAR_2.b = VAR_6;
            break;
    }

    return VAR_2;
}
