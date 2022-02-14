
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* input; } ;
typedef TYPE_3__ xmlreader ;
struct TYPE_11__ {int cur; } ;
typedef TYPE_4__ encoded_buffer ;
typedef scalar_t__ WCHAR ;
struct TYPE_9__ {TYPE_1__* buffer; } ;
struct TYPE_8__ {TYPE_4__ utf16; } ;


 scalar_t__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(xmlreader *VAR_0, int VAR_1)
{
    encoded_buffer *VAR_2 = &VAR_0->input->buffer->utf16;
    const WCHAR *VAR_3;

    while (*(VAR_3 = FUNC_0(VAR_0)) && VAR_1--)
    {
        FUNC_1(VAR_0, *VAR_3);
        VAR_2->cur++;
    }
}
