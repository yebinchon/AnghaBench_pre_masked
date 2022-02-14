
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IPropertySetStorage_iface; int IPersistFile_iface; int IUniformResourceLocatorW_iface; int IUniformResourceLocatorA_iface; } ;
typedef int REFIID ;
typedef int * PVOID ;
typedef TYPE_1__ InternetShortcut ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_8 ;
 int FUNC_3 (char*,TYPE_1__*,int ,int **) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static HRESULT FUNC_5(InternetShortcut *VAR_9, REFIID VAR_10, PVOID *VAR_11)
{
    FUNC_3("(%p, %s, %p)\n", VAR_9, FUNC_4(VAR_10), VAR_11);
    *VAR_11 = ((void*)0);
    if (FUNC_2(&VAR_7, VAR_10))
        *VAR_11 = &VAR_9->IUniformResourceLocatorA_iface;
    else if (FUNC_2(&VAR_5, VAR_10))
        *VAR_11 = &VAR_9->IUniformResourceLocatorA_iface;
    else if (FUNC_2(&VAR_6, VAR_10))
        *VAR_11 = &VAR_9->IUniformResourceLocatorW_iface;
    else if (FUNC_2(&VAR_1, VAR_10))
        *VAR_11 = &VAR_9->IPersistFile_iface;
    else if (FUNC_2(&VAR_2, VAR_10))
        *VAR_11 = &VAR_9->IPropertySetStorage_iface;
    else if (FUNC_2(&VAR_3, VAR_10))
    {
        FUNC_0("The IShellLinkA interface is not yet supported by InternetShortcut\n");
        return VAR_0;
    }
    else if (FUNC_2(&VAR_4, VAR_10))
    {
        FUNC_0("The IShellLinkW interface is not yet supported by InternetShortcut\n");
        return VAR_0;
    }
    else
    {
        FUNC_0("Interface with GUID %s not yet implemented by InternetShortcut\n", FUNC_4(VAR_10));
        return VAR_0;
    }
    FUNC_1((IUnknown*)*VAR_11);
    return VAR_8;
}
