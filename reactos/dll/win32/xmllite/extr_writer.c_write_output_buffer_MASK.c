
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct output_buffer {int codepage; char* data; int written; } ;
struct TYPE_4__ {struct output_buffer buffer; } ;
typedef TYPE_1__ xmlwriteroutput ;
typedef scalar_t__ WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,scalar_t__ const*,int,char*,int,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*,scalar_t__ const*,int) ;
 int FUNC_4 (scalar_t__ const*) ;

__attribute__((used)) static HRESULT FUNC_5(xmlwriteroutput *VAR_1, const WCHAR *VAR_2, int VAR_3)
{
    struct output_buffer *VAR_4 = &VAR_1->buffer;
    int VAR_5;
    HRESULT VAR_6;
    char *VAR_7;

    if (VAR_4->codepage == 1200) {

        VAR_5 = VAR_3 == -1 ? FUNC_4(VAR_2) : VAR_3;
        if (VAR_5) {
            VAR_5 *= sizeof(WCHAR);

            VAR_6 = FUNC_2(VAR_1, VAR_5);
            if (FUNC_0(VAR_6)) return VAR_6;
            VAR_7 = VAR_4->data + VAR_4->written;

            FUNC_3(VAR_7, VAR_2, VAR_5);
            VAR_4->written += VAR_5;
            VAR_7 += VAR_5;

            *(WCHAR*)VAR_7 = 0;
        }
    }
    else {
        VAR_5 = FUNC_1(VAR_4->codepage, 0, VAR_2, VAR_3, ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_6 = FUNC_2(VAR_1, VAR_5);
        if (FUNC_0(VAR_6)) return VAR_6;
        VAR_7 = VAR_4->data + VAR_4->written;
        VAR_5 = FUNC_1(VAR_4->codepage, 0, VAR_2, VAR_3, VAR_7, VAR_5, ((void*)0), ((void*)0));
        VAR_4->written += VAR_3 == -1 ? VAR_5-1 : VAR_5;
    }

    return VAR_0;
}
