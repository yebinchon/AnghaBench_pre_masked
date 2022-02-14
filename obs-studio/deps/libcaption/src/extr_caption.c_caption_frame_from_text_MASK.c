
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t utf8_size_t ;
typedef scalar_t__ utf8_char_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int back; int * write; } ;
typedef TYPE_1__ caption_frame_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int,int ,int ,scalar_t__ const*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__ const*) ;
 size_t FUNC_4 (scalar_t__ const*) ;
 scalar_t__ FUNC_5 (scalar_t__ const*) ;
 size_t FUNC_6 (scalar_t__ const*,int ) ;

int FUNC_7(caption_frame_t* VAR_3, const utf8_char_t* VAR_4)
{
    ssize_t VAR_5 = (ssize_t)FUNC_3(VAR_4);
    FUNC_1(VAR_3);
    VAR_3->write = &VAR_3->back;

    for (size_t VAR_6 = 0; (*VAR_4) && VAR_5 && VAR_6 < VAR_1;) {

        while (VAR_5 && FUNC_5(VAR_4)) {
            size_t VAR_7 = FUNC_4(VAR_4);
            VAR_4 += VAR_7, VAR_5 -= (ssize_t)VAR_7;
        }


        utf8_size_t VAR_8 = FUNC_6(VAR_4, VAR_0);

        for (size_t VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
            size_t VAR_10 = FUNC_4(VAR_4);
            FUNC_2(VAR_3, (int)VAR_6, (int)VAR_9, VAR_2, 0, VAR_4);
            VAR_4 += VAR_10, VAR_5 -= (ssize_t)VAR_10;
        }

        VAR_6 += VAR_8 ? 1 : 0;
    }

    FUNC_0(VAR_3);
    return 0;
}
