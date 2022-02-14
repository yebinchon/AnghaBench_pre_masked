
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_vendor_selection {int gl_vendor; unsigned int cards_size; TYPE_1__* cards; int description; } ;
typedef enum wined3d_pci_device { ____Placeholder_wined3d_pci_device } wined3d_pci_device ;
typedef enum wined3d_gl_vendor { ____Placeholder_wined3d_gl_vendor } wined3d_gl_vendor ;
struct TYPE_2__ {int id; int renderer; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;

__attribute__((used)) static enum wined3d_pci_device FUNC_4(const struct gl_vendor_selection *VAR_1,
        unsigned int VAR_2, enum wined3d_gl_vendor VAR_3, const char *VAR_4)
{
    unsigned int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
    {
        if (VAR_1[VAR_5].gl_vendor != VAR_3)
            continue;

        FUNC_1("Applying card selector \"%s\".\n", VAR_1[VAR_5].description);

        for (VAR_6 = 0; VAR_6 < VAR_1[VAR_5].cards_size; ++VAR_6)
        {
            if (FUNC_3(VAR_4, VAR_1[VAR_5].cards[VAR_6].renderer))
                return VAR_1[VAR_5].cards[VAR_6].id;
        }
        return VAR_0;
    }
    FUNC_0("Couldn't find a suitable card selector for GL vendor %04x (using GL_RENDERER %s)\n",
            VAR_3, FUNC_2(VAR_4));

    return VAR_0;
}
