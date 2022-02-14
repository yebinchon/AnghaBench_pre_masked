
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_end; scalar_t__ buf_cur; scalar_t__ pos; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ int64_t ;



__attribute__((used)) inline static int64_t FUNC_0(stream_t *VAR_0)
{
    return VAR_0->pos + VAR_0->buf_cur - VAR_0->buf_end;
}
