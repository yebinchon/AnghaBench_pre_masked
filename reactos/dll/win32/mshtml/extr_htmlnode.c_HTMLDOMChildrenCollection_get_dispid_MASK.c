
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT32 ;
struct TYPE_3__ {int nslist; } ;
typedef TYPE_1__ HTMLDOMChildrenCollection ;
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
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static HRESULT FUNC_4(DispatchEx *VAR_3, BSTR VAR_4, DWORD VAR_5, DISPID *VAR_6)
{
    HTMLDOMChildrenCollection *VAR_7 = FUNC_1(VAR_3);
    WCHAR *VAR_8;
    DWORD VAR_9=0;
    UINT32 VAR_10 = 0;

    for(VAR_8 = VAR_4; *VAR_8 && FUNC_2(*VAR_8); VAR_8++)
        VAR_9 = VAR_9*10 + (*VAR_8-'0');
    if(*VAR_8)
        return VAR_1;

    FUNC_3(VAR_7->nslist, &VAR_10);
    if(VAR_9 >= VAR_10)
        return VAR_1;

    *VAR_6 = VAR_0 + VAR_9;
    FUNC_0("ret %x\n", *VAR_6);
    return VAR_2;
}
