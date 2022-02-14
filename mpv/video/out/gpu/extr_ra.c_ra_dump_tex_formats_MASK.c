
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {int ctype; int num_components; scalar_t__ storable; scalar_t__ renderable; scalar_t__ linear_filter; scalar_t__ luminance_alpha; int pixel_size; int name; int * component_depth; int * component_size; } ;
struct ra {int num_formats; struct ra_format** formats; int log; } ;
typedef int cl ;


 int FUNC_0 (struct ra*,int,char*,...) ;



 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int,char*,char*,...) ;

void FUNC_3(struct ra *VAR_0, int VAR_1)
{
    if (!FUNC_1(VAR_0->log, VAR_1))
        return;
    FUNC_0(VAR_0, VAR_1, "Texture formats:\n");
    FUNC_0(VAR_0, VAR_1, "  NAME       COMP*TYPE SIZE           DEPTH PER COMP.\n");
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_formats; VAR_2++) {
        const struct ra_format *VAR_3 = VAR_0->formats[VAR_2];
        const char *VAR_4 = "unknown";
        switch (VAR_3->ctype) {
        case 128: VAR_4 = "unorm"; break;
        case 129: VAR_4 = "uint "; break;
        case 130: VAR_4 = "float"; break;
        }
        char VAR_5[40] = "";
        for (int VAR_6 = 0; VAR_6 < VAR_3->num_components; VAR_6++) {
            FUNC_2(VAR_5, sizeof(VAR_5), "%s%d", VAR_6 ? " " : "",
                            VAR_3->component_size[VAR_6]);
            if (VAR_3->component_size[VAR_6] != VAR_3->component_depth[VAR_6])
                FUNC_2(VAR_5, sizeof(VAR_5), "/%d", VAR_3->component_depth[VAR_6]);
        }
        FUNC_0(VAR_0, VAR_1, "  %-10s %d*%s %3dB %s %s %s %s {%s}\n", VAR_3->name,
               VAR_3->num_components, VAR_4, VAR_3->pixel_size,
               VAR_3->luminance_alpha ? "LA" : "  ",
               VAR_3->linear_filter ? "LF" : "  ",
               VAR_3->renderable ? "CR" : "  ",
               VAR_3->storable ? "ST" : "  ", VAR_5);
    }
    FUNC_0(VAR_0, VAR_1, " LA = LUMINANCE_ALPHA hack format\n");
    FUNC_0(VAR_0, VAR_1, " LF = linear filterable\n");
    FUNC_0(VAR_0, VAR_1, " CR = can be used for render targets\n");
    FUNC_0(VAR_0, VAR_1, " ST = can be used for storable images\n");
}
