
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dispid; } ;
typedef TYPE_1__ style_tbl_entry_t ;
typedef int HRESULT ;
typedef int DispatchEx ;
typedef int DWORD ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static HRESULT FUNC_1(DispatchEx *VAR_2, BSTR VAR_3, DWORD VAR_4, DISPID *VAR_5)
{
    const style_tbl_entry_t *VAR_6;

    VAR_6 = FUNC_0(VAR_3);
    if(VAR_6) {
        *VAR_5 = VAR_6->dispid;
        return VAR_1;
    }

    return VAR_0;
}
