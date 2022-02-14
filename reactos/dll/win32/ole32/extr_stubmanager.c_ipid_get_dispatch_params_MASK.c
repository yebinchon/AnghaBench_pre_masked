
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_manager {int dummy; } ;
struct ifstub {int * iface; int iid; int * chan; int * stubbuffer; } ;
typedef int IUnknown ;
typedef int IRpcStubBuffer ;
typedef int IRpcChannelBuffer ;
typedef int IPID ;
typedef int IID ;
typedef scalar_t__ HRESULT ;
typedef int APARTMENT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int const*,int **,struct stub_manager**,struct ifstub**) ;
 int FUNC_3 (struct stub_manager*) ;

HRESULT FUNC_4(const IPID *VAR_2, APARTMENT **VAR_3,
                                 struct stub_manager **VAR_4,
                                 IRpcStubBuffer **VAR_5, IRpcChannelBuffer **VAR_6,
                                 IID *VAR_7, IUnknown **VAR_8)
{
    struct stub_manager *VAR_9;
    struct ifstub *VAR_10;
    APARTMENT *VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_2(VAR_2, &VAR_11, &VAR_9, &VAR_10);
    if (VAR_12 != VAR_1) return VAR_0;

    *VAR_5 = VAR_10->stubbuffer;
    FUNC_1(*VAR_5);
    *VAR_6 = VAR_10->chan;
    FUNC_0(*VAR_6);
    *VAR_3 = VAR_11;
    *VAR_7 = VAR_10->iid;
    *VAR_8 = VAR_10->iface;

    if (VAR_4)
        *VAR_4 = VAR_9;
    else
        FUNC_3(VAR_9);
    return VAR_1;
}
