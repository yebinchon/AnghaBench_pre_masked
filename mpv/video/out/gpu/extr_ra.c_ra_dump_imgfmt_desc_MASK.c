
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_imgfmt_desc {int num_planes; size_t** components; int component_pad; int component_bits; int chroma_h; int chroma_w; TYPE_1__** planes; } ;
struct ra {int dummy; } ;
typedef int pl ;
typedef int pf ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (struct ra*,int,char*,int,int ,int ,int ,int ,char*,char*) ;
 int FUNC_1 (char*,int,char*,...) ;

void FUNC_2(struct ra *VAR_0, const struct ra_imgfmt_desc *VAR_1,
                         int VAR_2)
{
    char VAR_3[80] = "";
    char VAR_4[80] = "";
    for (int VAR_5 = 0; VAR_5 < VAR_1->num_planes; VAR_5++) {
        if (VAR_5 > 0) {
            FUNC_1(VAR_3, sizeof(VAR_3), "/");
            FUNC_1(VAR_4, sizeof(VAR_4), "/");
        }
        char VAR_6[5] = {0};
        for (int VAR_7 = 0; VAR_7 < 4; VAR_7++)
            VAR_6[VAR_7] = "_rgba"[VAR_1->components[VAR_5][VAR_7]];
        for (int VAR_8 = 3; VAR_8 > 0 && VAR_6[VAR_8] == '_'; VAR_8--)
            VAR_6[VAR_8] = '\0';
        FUNC_1(VAR_3, sizeof(VAR_3), "%s", VAR_6);
        FUNC_1(VAR_4, sizeof(VAR_4), "%s", VAR_1->planes[VAR_5]->name);
    }
    FUNC_0(VAR_0, VAR_2, "%d planes %dx%d %d/%d [%s] (%s)\n",
           VAR_1->num_planes, VAR_1->chroma_w, VAR_1->chroma_h,
           VAR_1->component_bits, VAR_1->component_pad, VAR_4, VAR_3);
}
