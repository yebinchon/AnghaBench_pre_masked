
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* input; } ;
typedef TYPE_3__ xmlreader ;
struct TYPE_9__ {int cur; int written; int * data; } ;
typedef TYPE_4__ encoded_buffer ;
typedef scalar_t__ WCHAR ;
struct TYPE_7__ {TYPE_1__* buffer; } ;
struct TYPE_6__ {TYPE_4__ utf16; } ;


 int FUNC_0 (int *,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(xmlreader *VAR_0)
{
    encoded_buffer *VAR_1 = &VAR_0->input->buffer->utf16;


    if (VAR_1->cur*sizeof(WCHAR) > VAR_1->written / 2)
    {
        VAR_1->written -= VAR_1->cur*sizeof(WCHAR);
        FUNC_0(VAR_1->data, (WCHAR*)VAR_1->data + VAR_1->cur, VAR_1->written);
        VAR_1->cur = 0;
        *(WCHAR*)&VAR_1->data[VAR_1->written] = 0;
    }
}
