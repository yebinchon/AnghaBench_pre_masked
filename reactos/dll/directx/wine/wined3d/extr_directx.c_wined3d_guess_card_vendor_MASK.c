
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_pci_vendor { ____Placeholder_wined3d_pci_vendor } wined3d_pci_vendor ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static enum wined3d_pci_vendor FUNC_3(const char *VAR_5, const char *VAR_6)
{
    if (FUNC_2(VAR_5, "NVIDIA")
            || FUNC_2(VAR_5, "Nouveau")
            || FUNC_2(VAR_5, "nouveau"))
        return VAR_2;

    if (FUNC_2(VAR_5, "ATI")
            || FUNC_2(VAR_5, "Advanced Micro Devices, Inc.")
            || FUNC_2(VAR_5, "X.Org R300 Project")
            || FUNC_2(VAR_6, "AMD")
            || FUNC_2(VAR_6, "FirePro")
            || FUNC_2(VAR_6, "Radeon")
            || FUNC_2(VAR_6, "R100")
            || FUNC_2(VAR_6, "R200")
            || FUNC_2(VAR_6, "R300")
            || FUNC_2(VAR_6, "R600")
            || FUNC_2(VAR_6, "R700"))
        return VAR_0;

    if (FUNC_2(VAR_5, "Intel(R)")

            || FUNC_2(VAR_6, "Intel")
            || FUNC_2(VAR_6, "i915")
            || FUNC_2(VAR_5, "Intel Inc."))
        return VAR_1;

    if (FUNC_2(VAR_6, "SVGA3D"))
        return VAR_4;

    if (FUNC_2(VAR_5, "Mesa")
            || FUNC_2(VAR_5, "Brian Paul")
            || FUNC_2(VAR_5, "Tungsten Graphics, Inc")
            || FUNC_2(VAR_5, "VMware, Inc."))
        return VAR_3;

    FUNC_0("Received unrecognized GL_VENDOR %s. Returning HW_VENDOR_NVIDIA.\n", FUNC_1(VAR_5));

    return VAR_2;
}
