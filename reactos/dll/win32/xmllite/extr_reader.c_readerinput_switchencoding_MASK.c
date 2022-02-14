
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ xmlreaderinput ;
typedef scalar_t__ xml_encoding ;
struct TYPE_10__ {int written; scalar_t__ cur; scalar_t__ data; } ;
typedef TYPE_3__ encoded_buffer ;
typedef scalar_t__ WCHAR ;
typedef int UINT ;
struct TYPE_8__ {int code_page; TYPE_3__ utf16; TYPE_3__ encoded; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int,scalar_t__*,int) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_8(xmlreaderinput *VAR_1, xml_encoding VAR_2)
{
    encoded_buffer *VAR_3 = &VAR_1->buffer->encoded;
    encoded_buffer *VAR_4 = &VAR_1->buffer->utf16;
    int VAR_5, VAR_6;
    HRESULT VAR_7;
    WCHAR *VAR_8;
    UINT VAR_9;

    VAR_7 = FUNC_4(VAR_2, &VAR_9);
    if (FUNC_0(VAR_7)) return;

    VAR_1->buffer->code_page = VAR_9;
    VAR_5 = FUNC_6(VAR_1);

    FUNC_2("switching to cp %d\n", VAR_9);


    if (VAR_2 == VAR_0)
    {
        FUNC_7(VAR_1, VAR_5);
        FUNC_5(VAR_4->data, VAR_3->data + VAR_3->cur, VAR_5);
        VAR_4->written += VAR_5*sizeof(WCHAR);
    }
    else
    {
        VAR_6 = FUNC_1(VAR_9, 0, VAR_3->data + VAR_3->cur, VAR_5, ((void*)0), 0);
        FUNC_7(VAR_1, VAR_6);
        VAR_8 = (WCHAR*)VAR_4->data;
        FUNC_1(VAR_9, 0, VAR_3->data + VAR_3->cur, VAR_5, VAR_8, VAR_6);
        VAR_8[VAR_6] = 0;
        VAR_4->written += VAR_6*sizeof(WCHAR);
    }

    FUNC_3(VAR_4, 0);
}
