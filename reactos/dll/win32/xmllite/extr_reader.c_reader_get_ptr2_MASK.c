
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
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_4__ encoded_buffer ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_7__ {TYPE_1__* buffer; } ;
struct TYPE_6__ {TYPE_4__ utf16; } ;



__attribute__((used)) static inline WCHAR *FUNC_0(const xmlreader *VAR_0, UINT VAR_1)
{
    encoded_buffer *VAR_2 = &VAR_0->input->buffer->utf16;
    return (WCHAR*)VAR_2->data + VAR_1;
}
