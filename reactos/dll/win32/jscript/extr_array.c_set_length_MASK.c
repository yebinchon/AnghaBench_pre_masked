
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_2__ {int length; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_4(jsdisp_t *VAR_3, DWORD VAR_4)
{
    if(FUNC_1(VAR_3, VAR_0)) {
        FUNC_0(VAR_3)->length = VAR_4;
        return VAR_1;
    }

    return FUNC_2(VAR_3, VAR_2, FUNC_3(VAR_4));
}
