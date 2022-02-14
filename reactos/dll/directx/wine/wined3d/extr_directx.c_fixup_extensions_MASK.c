
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_gl_info {int dummy; } ;
struct wined3d_caps_gl_ctx {int dummy; } ;
typedef enum wined3d_pci_vendor { ____Placeholder_wined3d_pci_vendor } wined3d_pci_vendor ;
typedef enum wined3d_pci_device { ____Placeholder_wined3d_pci_device } wined3d_pci_device ;
typedef enum wined3d_gl_vendor { ____Placeholder_wined3d_gl_vendor } wined3d_gl_vendor ;
struct TYPE_3__ {int (* apply ) (struct wined3d_gl_info*) ;int description; int (* match ) (struct wined3d_gl_info*,struct wined3d_caps_gl_ctx*,char const*,int,int,int) ;} ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct wined3d_gl_info*,struct wined3d_caps_gl_ctx*,char const*,int,int,int) ;
 int FUNC_3 (struct wined3d_gl_info*) ;
 int FUNC_4 (struct wined3d_gl_info*) ;

__attribute__((used)) static void FUNC_5(struct wined3d_gl_info *VAR_1, struct wined3d_caps_gl_ctx *VAR_2,
        const char *VAR_3, enum wined3d_gl_vendor VAR_4,
        enum wined3d_pci_vendor VAR_5, enum wined3d_pci_device VAR_6)
{
    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); ++VAR_7)
    {
        if (!VAR_0[VAR_7].match(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)) continue;
        FUNC_1("Applying driver quirk \"%s\".\n", VAR_0[VAR_7].description);
        VAR_0[VAR_7].apply(VAR_1);
    }


    FUNC_4(VAR_1);
}
