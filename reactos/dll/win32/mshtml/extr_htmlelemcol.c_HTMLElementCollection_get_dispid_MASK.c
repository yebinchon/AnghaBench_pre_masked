
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int len; int * elems; } ;
typedef TYPE_1__ HTMLElementCollection ;
typedef int HRESULT ;
typedef int DispatchEx ;
typedef int DWORD ;
typedef scalar_t__ DISPID ;
typedef int* BSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static HRESULT FUNC_5(DispatchEx *VAR_3, BSTR VAR_4, DWORD VAR_5, DISPID *VAR_6)
{
    HTMLElementCollection *VAR_7 = FUNC_1(VAR_3);
    WCHAR *VAR_8;
    DWORD VAR_9=0;

    if(!*VAR_4)
        return VAR_1;

    for(VAR_8 = VAR_4; *VAR_8 && FUNC_4(*VAR_8); VAR_8++)
        VAR_9 = VAR_9*10 + (*VAR_8-'0');

    if(*VAR_8) {

        for(VAR_9 = 0; VAR_9 < VAR_7->len; ++VAR_9) {
            if(FUNC_2(VAR_7->elems[VAR_9], VAR_4) ||
                    FUNC_3(VAR_7->elems[VAR_9], VAR_4))
                break;
        }
    }

    if(VAR_9 >= VAR_7->len)
        return VAR_1;

    *VAR_6 = VAR_0 + VAR_9;
    FUNC_0("ret %x\n", *VAR_6);
    return VAR_2;
}
