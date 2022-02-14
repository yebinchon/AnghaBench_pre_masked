
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct output_buffer {int allocated; unsigned int codepage; scalar_t__ written; int data; } ;
struct TYPE_4__ {int encoding; struct output_buffer buffer; } ;
typedef TYPE_1__ xmlwriteroutput ;
typedef unsigned int UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*,int const) ;

__attribute__((used)) static HRESULT FUNC_5(xmlwriteroutput *VAR_2)
{
    struct output_buffer *VAR_3 = &VAR_2->buffer;
    const int VAR_4 = 0x2000;
    UINT VAR_5 = ~0u;
    HRESULT VAR_6;

    if (FUNC_0(VAR_6 = FUNC_2(VAR_2->encoding, &VAR_5)))
        FUNC_1("Failed to get code page for specified encoding.\n");

    VAR_3->data = FUNC_4(VAR_2, VAR_4);
    if (!VAR_3->data) return VAR_0;

    FUNC_3(VAR_3->data, 0, 4);
    VAR_3->allocated = VAR_4;
    VAR_3->written = 0;
    VAR_3->codepage = VAR_5;

    return VAR_1;
}
