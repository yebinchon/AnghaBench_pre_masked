
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* buffer; } ;
typedef TYPE_1__ xmlreaderinput ;
struct TYPE_11__ {int utf16; int encoded; int code_page; TYPE_1__* input; } ;
typedef TYPE_2__ input_buffer ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_4(xmlreaderinput *VAR_2)
{
    input_buffer *VAR_3;
    HRESULT VAR_4;

    VAR_2->buffer = ((void*)0);

    VAR_3 = FUNC_2(VAR_2, sizeof(*VAR_3));
    if (!VAR_3) return VAR_0;

    VAR_3->input = VAR_2;
    VAR_3->code_page = ~0;
    VAR_4 = FUNC_1(VAR_2, &VAR_3->utf16);
    if (VAR_4 != VAR_1) {
        FUNC_3(VAR_2, VAR_3);
        return VAR_4;
    }

    VAR_4 = FUNC_1(VAR_2, &VAR_3->encoded);
    if (VAR_4 != VAR_1) {
        FUNC_0(VAR_2, &VAR_3->utf16);
        FUNC_3(VAR_2, VAR_3);
        return VAR_4;
    }

    VAR_2->buffer = VAR_3;
    return VAR_1;
}
