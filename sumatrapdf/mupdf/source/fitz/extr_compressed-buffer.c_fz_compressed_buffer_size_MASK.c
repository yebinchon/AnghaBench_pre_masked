
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ fz_compressed_buffer ;
struct TYPE_4__ {int cap; } ;



size_t
FUNC_0(fz_compressed_buffer *VAR_0)
{
 if (VAR_0 && VAR_0->buffer)
  return (size_t)VAR_0->buffer->cap;
 return 0;
}
