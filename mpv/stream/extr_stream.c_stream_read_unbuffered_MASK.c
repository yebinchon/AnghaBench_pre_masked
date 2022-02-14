
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* fill_buffer ) (TYPE_1__*,void*,int) ;int eof; int pos; int total_unbuffered_read_bytes; int cancel; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,void*,int) ;

__attribute__((used)) static int FUNC_3(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    FUNC_0(VAR_2 >= 0);
    if (VAR_2 <= 0)
        return 0;

    int VAR_3 = 0;

    if (VAR_0->fill_buffer && !FUNC_1(VAR_0->cancel))
        VAR_3 = VAR_0->fill_buffer(VAR_0, VAR_1, VAR_2);
    if (VAR_3 <= 0) {
        VAR_0->eof = 1;
        return 0;
    }

    VAR_0->eof = 0;
    VAR_0->pos += VAR_3;
    VAR_0->total_unbuffered_read_bytes += VAR_3;
    return VAR_3;
}
