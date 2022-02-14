
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pending; int stream; TYPE_1__* buffer; } ;
typedef TYPE_2__ xmlreaderinput ;
struct TYPE_8__ {int allocated; int written; int data; } ;
typedef TYPE_3__ encoded_buffer ;
typedef int ULONG ;
struct TYPE_6__ {TYPE_3__ encoded; } ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int,int*) ;
 int FUNC_2 (char*,int,int,int,int,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static HRESULT FUNC_4(xmlreaderinput *VAR_1)
{
    encoded_buffer *VAR_2 = &VAR_1->buffer->encoded;

    ULONG VAR_3 = VAR_2->allocated - VAR_2->written - 4;
    ULONG VAR_4;
    HRESULT VAR_5;



    VAR_3 = (VAR_3 + 3) & ~3;

    if (VAR_2->allocated - VAR_2->written < VAR_3)
    {
        VAR_2->allocated *= 2;
        VAR_2->data = FUNC_3(VAR_1, VAR_2->data, VAR_2->allocated);
        VAR_3 = VAR_2->allocated - VAR_2->written;
    }

    VAR_4 = 0;
    VAR_5 = FUNC_1(VAR_1->stream, VAR_2->data + VAR_2->written, VAR_3, &VAR_4);
    FUNC_2("written=%d, alloc=%d, requested=%d, read=%d, ret=0x%08x\n", VAR_2->written, VAR_2->allocated, VAR_3, VAR_4, VAR_5);
    VAR_1->pending = VAR_5 == VAR_0;
    if (FUNC_0(VAR_5)) return VAR_5;
    VAR_2->written += VAR_4;

    return VAR_5;
}
