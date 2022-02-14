
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ xmlreaderinput ;
struct TYPE_7__ {int written; int* data; } ;
typedef TYPE_3__ encoded_buffer ;
struct TYPE_5__ {TYPE_3__ encoded; } ;



__attribute__((used)) static int FUNC_0(xmlreaderinput *VAR_0)
{
    encoded_buffer *VAR_1 = &VAR_0->buffer->encoded;
    int VAR_2 = VAR_1->written;


    if (!(VAR_1->data[VAR_2-1] & 0x80)) return VAR_2;


    while (--VAR_2 && !(VAR_1->data[VAR_2] & 0xc0))
        ;

    return VAR_2;
}
