
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ar_stream_tell_fn ;
typedef int ar_stream_seek_fn ;
typedef int ar_stream_read_fn ;
typedef int (* ar_stream_close_fn ) (void*) ;
struct TYPE_4__ {int tell; int seek; int read; int (* close ) (void*) ;void* data; } ;
typedef TYPE_1__ ar_stream ;


 TYPE_1__* FUNC_0 (int) ;

ar_stream *FUNC_1(void *VAR_0, ar_stream_close_fn VAR_1, ar_stream_read_fn VAR_2, ar_stream_seek_fn VAR_3, ar_stream_tell_fn VAR_4)
{
    ar_stream *VAR_5 = FUNC_0(sizeof(ar_stream));
    if (!VAR_5) {
        VAR_1(VAR_0);
        return ((void*)0);
    }
    VAR_5->data = VAR_0;
    VAR_5->close = VAR_1;
    VAR_5->read = VAR_2;
    VAR_5->seek = VAR_3;
    VAR_5->tell = VAR_4;
    return VAR_5;
}
