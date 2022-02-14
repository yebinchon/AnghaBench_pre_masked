
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ buf_cur; scalar_t__ buf_end; int buffer_mask; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,void*,int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,void*,int) ;

int FUNC_5(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    FUNC_0(VAR_0->buf_cur <= VAR_0->buf_end);
    FUNC_0(VAR_2 >= 0);
    if (VAR_0->buf_cur == VAR_0->buf_end && VAR_2 > 0) {
        if (VAR_2 > (VAR_0->buffer_mask + 1) / 2) {

            FUNC_2(VAR_0);
            return FUNC_4(VAR_0, VAR_1, VAR_2);
        }
        FUNC_3(VAR_0, 1);
    }
    int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->buf_cur);
    VAR_0->buf_cur += VAR_3;
    return VAR_3;
}
