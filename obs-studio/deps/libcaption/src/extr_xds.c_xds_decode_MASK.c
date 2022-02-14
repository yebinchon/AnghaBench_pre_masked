
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int class_code; int type; int checksum; int size; int* content; } ;
typedef TYPE_1__ xds_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(xds_t* VAR_3, uint16_t VAR_4)
{
    switch (VAR_3->state) {
    default:
    case 0:
        FUNC_0(VAR_3);
        VAR_3->class_code = (VAR_4 & 0x0F00) >> 8;
        VAR_3->type = (VAR_4 & 0x000F);
        VAR_3->state = 1;
        return VAR_1;

    case 1:
        if (0x8F00 == (VAR_4 & 0xFF00)) {
            VAR_3->checksum = (VAR_4 & 0x007F);
            VAR_3->state = 0;
            return VAR_2;
        }

        if (VAR_3->size < 32) {
            VAR_3->content[VAR_3->size + 0] = (VAR_4 & 0x7F00) >> 8;
            VAR_3->content[VAR_3->size + 1] = (VAR_4 & 0x007F);
            VAR_3->size += 2;
            return VAR_1;
        }
    }

    VAR_3->state = 0;
    return VAR_0;
}
