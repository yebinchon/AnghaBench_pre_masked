
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int member_0; unsigned int member_1; int value; int member_2; } ;
typedef TYPE_1__ property_desc_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,TYPE_1__*) ;

HRESULT FUNC_1(jsdisp_t *VAR_1, const WCHAR *VAR_2, unsigned VAR_3, jsval_t VAR_4)
{
    property_desc_t VAR_5 = { VAR_3, VAR_3, VAR_0 };
    VAR_5.value = VAR_4;
    return FUNC_0(VAR_1, VAR_2, &VAR_5);
}
