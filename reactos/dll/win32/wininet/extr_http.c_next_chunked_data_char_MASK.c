
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int buf_pos; int buf_size; } ;
typedef TYPE_1__ chunked_stream_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static char FUNC_1(chunked_stream_t *VAR_0)
{
    FUNC_0(VAR_0->buf_size);

    VAR_0->buf_size--;
    return VAR_0->buf[VAR_0->buf_pos++];
}
