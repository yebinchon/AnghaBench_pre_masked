
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* input; } ;
typedef TYPE_3__ xmlreader ;
struct TYPE_10__ {int cur; scalar_t__ data; } ;
typedef TYPE_4__ encoded_buffer ;
typedef int WCHAR ;
struct TYPE_8__ {TYPE_1__* buffer; } ;
struct TYPE_7__ {TYPE_4__ utf16; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline WCHAR *FUNC_1(xmlreader *VAR_0)
{
    encoded_buffer *VAR_1 = &VAR_0->input->buffer->utf16;
    WCHAR *VAR_2 = (WCHAR*)VAR_1->data + VAR_1->cur;
    if (!*VAR_2) FUNC_0(VAR_0);
    return (WCHAR*)VAR_1->data + VAR_1->cur;
}
