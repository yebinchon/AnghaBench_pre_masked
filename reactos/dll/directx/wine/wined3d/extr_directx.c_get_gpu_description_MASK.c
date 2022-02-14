
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpu_description {int vendor; int card; } ;
typedef enum wined3d_pci_vendor { ____Placeholder_wined3d_pci_vendor } wined3d_pci_vendor ;
typedef enum wined3d_pci_device { ____Placeholder_wined3d_pci_device } wined3d_pci_device ;


 unsigned int FUNC_0 (struct gpu_description const*) ;
 struct gpu_description const* VAR_0 ;

__attribute__((used)) static const struct gpu_description *FUNC_1(enum wined3d_pci_vendor VAR_1,
        enum wined3d_pci_device VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3)
    {
        if (VAR_1 == VAR_0[VAR_3].vendor && VAR_2 == VAR_0[VAR_3].card)
            return &VAR_0[VAR_3];
    }

    return ((void*)0);
}
