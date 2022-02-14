
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int w; int y; } ;
struct TYPE_9__ {int w; } ;
struct TYPE_13__ {int hmtx_len; int vmtx_len; TYPE_5__* vmtx; TYPE_4__ dvmtx; scalar_t__ wmode; TYPE_3__* hmtx; TYPE_2__ dhmtx; TYPE_1__* font; } ;
typedef TYPE_6__ pdf_font_desc ;
typedef int fz_output ;
typedef int fz_context ;
struct TYPE_12__ {int w; int y; int x; int hi; int lo; } ;
struct TYPE_10__ {int w; int hi; int lo; } ;
struct TYPE_8__ {scalar_t__ t3procs; scalar_t__ ft_face; } ;


 int FUNC_0 (int *,int *,char*,...) ;

void
FUNC_1(fz_context *VAR_0, fz_output *VAR_1, pdf_font_desc *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_1, "fontdesc {\n");

 if (VAR_2->font->ft_face)
  FUNC_0(VAR_0, VAR_1, "\tfreetype font\n");
 if (VAR_2->font->t3procs)
  FUNC_0(VAR_0, VAR_1, "\ttype3 font\n");

 FUNC_0(VAR_0, VAR_1, "\twmode %d\n", VAR_2->wmode);
 FUNC_0(VAR_0, VAR_1, "\tDW %d\n", VAR_2->dhmtx.w);

 FUNC_0(VAR_0, VAR_1, "\tW {\n");
 for (VAR_3 = 0; VAR_3 < VAR_2->hmtx_len; VAR_3++)
  FUNC_0(VAR_0, VAR_1, "\t\t<%04x> <%04x> %d\n",
   VAR_2->hmtx[VAR_3].lo, VAR_2->hmtx[VAR_3].hi, VAR_2->hmtx[VAR_3].w);
 FUNC_0(VAR_0, VAR_1, "\t}\n");

 if (VAR_2->wmode)
 {
  FUNC_0(VAR_0, VAR_1, "\tDW2 [%d %d]\n", VAR_2->dvmtx.y, VAR_2->dvmtx.w);
  FUNC_0(VAR_0, VAR_1, "\tW2 {\n");
  for (VAR_3 = 0; VAR_3 < VAR_2->vmtx_len; VAR_3++)
   FUNC_0(VAR_0, VAR_1, "\t\t<%04x> <%04x> %d %d %d\n", VAR_2->vmtx[VAR_3].lo, VAR_2->vmtx[VAR_3].hi,
    VAR_2->vmtx[VAR_3].x, VAR_2->vmtx[VAR_3].y, VAR_2->vmtx[VAR_3].w);
  FUNC_0(VAR_0, VAR_1, "\t}\n");
 }
}
