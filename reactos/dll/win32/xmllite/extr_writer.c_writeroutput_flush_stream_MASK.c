
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct output_buffer {scalar_t__ written; scalar_t__ data; } ;
struct TYPE_3__ {int stream; struct output_buffer buffer; } ;
typedef TYPE_1__ xmlwriteroutput ;
typedef scalar_t__ ULONG ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static HRESULT FUNC_3(xmlwriteroutput *VAR_1)
{
    struct output_buffer *VAR_2;
    ULONG VAR_3, VAR_4 = 0;
    HRESULT VAR_5;

    if (!VAR_1 || !VAR_1->stream)
        return VAR_0;

    VAR_2 = &VAR_1->buffer;


    do {
        VAR_3 = 0;
        VAR_5 = FUNC_1(VAR_1->stream, VAR_2->data + VAR_4, VAR_2->written, &VAR_3);
        if (FUNC_0(VAR_5)) {
            FUNC_2("write to stream failed (0x%08x)\n", VAR_5);
            VAR_2->written = 0;
            return VAR_5;
        }

        VAR_4 += VAR_3;
        VAR_2->written -= VAR_3;
    } while (VAR_2->written > 0);

    return VAR_0;
}
