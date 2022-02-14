
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ nframes; int w; int h; int * frame; int * back; } ;
typedef TYPE_1__ ge_GIF ;


 int FUNC_0 (TYPE_1__*,int*,int*,int*,int*) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(ge_GIF *VAR_0, uint16_t VAR_1)
{
    uint16_t VAR_2, VAR_3, VAR_4, VAR_5;
    uint8_t *VAR_6;

    if (VAR_1)
        FUNC_2(VAR_0, VAR_1);
    if (VAR_0->nframes == 0) {
        VAR_2 = VAR_0->w;
        VAR_3 = VAR_0->h;
        VAR_4 = VAR_5 = 0;
    } else if (!FUNC_0(VAR_0, &VAR_2, &VAR_3, &VAR_4, &VAR_5)) {

        VAR_2 = VAR_3 = 1;
        VAR_4 = VAR_5 = 0;
    }
    FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
    VAR_0->nframes++;
    VAR_6 = VAR_0->back;
    VAR_0->back = VAR_0->frame;
    VAR_0->frame = VAR_6;
}
