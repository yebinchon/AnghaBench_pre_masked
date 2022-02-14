
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct shader_caps {int dummy; } ;
struct fragment_caps {int dummy; } ;
typedef enum wined3d_pci_vendor { ____Placeholder_wined3d_pci_vendor } wined3d_pci_vendor ;
typedef enum wined3d_pci_device { ____Placeholder_wined3d_pci_device } wined3d_pci_device ;
typedef enum wined3d_gl_vendor { ____Placeholder_wined3d_gl_vendor } wined3d_gl_vendor ;
typedef enum wined3d_d3d_level { ____Placeholder_wined3d_d3d_level } wined3d_d3d_level ;
struct TYPE_3__ {int card_vendor; int* card_fallback; int gl_vendor_count; int gl_vendor_selection; int description; } ;
typedef int DWORD ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct shader_caps const*,struct fragment_caps const*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ,int,char const*) ;

__attribute__((used)) static enum wined3d_pci_device FUNC_6(const struct shader_caps *VAR_4, const struct fragment_caps *VAR_5,
        DWORD VAR_6, const char *VAR_7, enum wined3d_gl_vendor *VAR_8, enum wined3d_pci_vendor *VAR_9)
{
    unsigned int VAR_10;
    enum wined3d_d3d_level VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6);
    enum wined3d_pci_device VAR_12;

    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); ++VAR_10)
    {
        if (VAR_3[VAR_10].card_vendor != *VAR_9)
            continue;

        FUNC_2("Applying card selector \"%s\".\n", VAR_3[VAR_10].description);
        VAR_12 = FUNC_5(VAR_3[VAR_10].gl_vendor_selection,
                VAR_3[VAR_10].gl_vendor_count, *VAR_8, VAR_7);
        if (VAR_12 != VAR_1)
            return VAR_12;

        FUNC_2("Unrecognized renderer %s, falling back to default.\n", FUNC_4(VAR_7));
        return VAR_3[VAR_10].card_fallback[VAR_11];
    }

    FUNC_1("No card selector available for card vendor %04x (using GL_RENDERER %s).\n",
            *VAR_9, FUNC_4(VAR_7));


    *VAR_9 = VAR_0;
    return VAR_2[VAR_11];
}
