
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* write_buffer ) (TYPE_1__*,void*,int) ;int pos; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*,void*,int) ;

int FUNC_1(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    if (!VAR_0->write_buffer)
        return -1;
    int VAR_3 = VAR_2;
    while (VAR_2) {
        int VAR_4 = VAR_0->write_buffer(VAR_0, VAR_1, VAR_2);
        if (VAR_4 <= 0)
            return -1;
        VAR_0->pos += VAR_4;
        VAR_1 = (char *)VAR_1 + VAR_4;
        VAR_2 -= VAR_4;
    }
    return VAR_3;
}
