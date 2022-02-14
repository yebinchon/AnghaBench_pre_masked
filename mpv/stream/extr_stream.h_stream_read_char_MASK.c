
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buf_cur; scalar_t__ buf_end; int* buffer; size_t buffer_mask; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) inline static int FUNC_1(stream_t *VAR_0)
{
    return VAR_0->buf_cur < VAR_0->buf_end
        ? VAR_0->buffer[(VAR_0->buf_cur++) & VAR_0->buffer_mask]
        : FUNC_0(VAR_0);
}
