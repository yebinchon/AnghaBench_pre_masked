
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy_manager {int IClientSecurity_iface; int IMarshal_iface; int IMultiQI_iface; } ;
struct ifproxy {void* iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct proxy_manager*,int ,struct ifproxy**) ;

__attribute__((used)) static HRESULT FUNC_8(struct proxy_manager * VAR_6, REFIID VAR_7, void ** VAR_8)
{
    HRESULT VAR_9;
    struct ifproxy * VAR_10;

    FUNC_5("%s\n", FUNC_6(VAR_7));

    if (FUNC_4(VAR_7, &VAR_4) ||
        FUNC_4(VAR_7, &VAR_3))
    {
        *VAR_8 = &VAR_6->IMultiQI_iface;
        FUNC_2(&VAR_6->IMultiQI_iface);
        return VAR_5;
    }
    if (FUNC_4(VAR_7, &VAR_2))
    {
        *VAR_8 = &VAR_6->IMarshal_iface;
        FUNC_1(&VAR_6->IMarshal_iface);
        return VAR_5;
    }
    if (FUNC_4(VAR_7, &VAR_1))
    {
        *VAR_8 = &VAR_6->IClientSecurity_iface;
        FUNC_0(&VAR_6->IClientSecurity_iface);
        return VAR_5;
    }

    VAR_9 = FUNC_7(VAR_6, VAR_7, &VAR_10);
    if (VAR_9 == VAR_5)
    {
        *VAR_8 = VAR_10->iface;
        FUNC_3((IUnknown *)*VAR_8);
        return VAR_5;
    }

    *VAR_8 = ((void*)0);
    return VAR_0;
}
