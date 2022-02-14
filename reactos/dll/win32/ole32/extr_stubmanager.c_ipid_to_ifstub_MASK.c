
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stub_manager {int dummy; } ;
struct ifstub {int dummy; } ;
struct TYPE_4__ {int Data2; scalar_t__ Data4; } ;
typedef int OXID ;
typedef TYPE_1__ IPID ;
typedef int HRESULT ;
typedef int APARTMENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int * FUNC_1 (int const,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 struct stub_manager* FUNC_4 (int *,TYPE_1__ const*,struct ifstub**) ;

__attribute__((used)) static HRESULT FUNC_5(const IPID *VAR_3, APARTMENT **VAR_4,
                              struct stub_manager **VAR_5, struct ifstub **VAR_6)
{

    if (VAR_3->Data2 == 0xffff)
        *VAR_4 = FUNC_1(*(const OXID *)VAR_3->Data4, VAR_2);
    else
        *VAR_4 = FUNC_2(VAR_3->Data2);
    if (!*VAR_4)
    {
        FUNC_0("Couldn't find apartment corresponding to TID 0x%04x\n", VAR_3->Data2);
        return VAR_0;
    }
    *VAR_5 = FUNC_4(*VAR_4, VAR_3, VAR_6);
    if (!*VAR_5)
    {
        FUNC_3(*VAR_4);
        *VAR_4 = ((void*)0);
        return VAR_0;
    }
    return VAR_1;
}
