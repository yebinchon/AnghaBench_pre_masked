
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; scalar_t__* buf; } ;
typedef TYPE_1__ strbuf_t ;



__attribute__((used)) static inline void FUNC_0(strbuf_t *VAR_0)
{
    VAR_0->buf[VAR_0->length] = 0;
}
