
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ xmlreaderinput ;
struct TYPE_13__ {TYPE_2__* input; } ;
typedef TYPE_3__ xmlreader ;
struct TYPE_14__ {int written; scalar_t__ cur; scalar_t__ data; } ;
typedef TYPE_4__ encoded_buffer ;
typedef scalar_t__ WCHAR ;
typedef int UINT ;
struct TYPE_11__ {int code_page; TYPE_4__ utf16; TYPE_4__ encoded; } ;
typedef int HRESULT ;


 int FUNC_0 (int,int ,scalar_t__,int,scalar_t__*,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static HRESULT FUNC_7(xmlreader *VAR_0)
{
    xmlreaderinput *VAR_1 = VAR_0->input;
    encoded_buffer *VAR_2 = &VAR_1->buffer->encoded;
    encoded_buffer *VAR_3 = &VAR_1->buffer->utf16;
    UINT VAR_4 = VAR_1->buffer->code_page;
    int VAR_5, VAR_6, VAR_7;
    HRESULT VAR_8;
    WCHAR *VAR_9;


    VAR_8 = FUNC_5(VAR_1);
    VAR_5 = FUNC_3(VAR_1);
    VAR_7 = VAR_3->written / sizeof(WCHAR);


    if (VAR_4 == 1200)
    {
        FUNC_4(VAR_1, VAR_5);
        FUNC_2(VAR_3->data + VAR_3->written, VAR_2->data + VAR_2->cur, VAR_5);
        VAR_3->written += VAR_5*sizeof(WCHAR);
    }
    else
    {
        VAR_6 = FUNC_0(VAR_4, 0, VAR_2->data + VAR_2->cur, VAR_5, ((void*)0), 0);
        FUNC_4(VAR_1, VAR_6);
        VAR_9 = (WCHAR*)(VAR_3->data + VAR_3->written);
        FUNC_0(VAR_4, 0, VAR_2->data + VAR_2->cur, VAR_5, VAR_9, VAR_6);
        VAR_9[VAR_6] = 0;
        VAR_3->written += VAR_6*sizeof(WCHAR);

        FUNC_6(VAR_1, VAR_5);
    }

    FUNC_1(VAR_3, VAR_7);
    return VAR_8;
}
