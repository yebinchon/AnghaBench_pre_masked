
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cidrange {int lo; int hi; int v; } ;
struct TYPE_11__ {char* cmap_name; int wmode; char* usecmap_name; int codespace_len; int rlen; int xlen; int mlen; TYPE_2__* mranges; TYPE_1__* xranges; TYPE_4__* ranges; TYPE_3__* codespace; } ;
typedef TYPE_5__ pdf_cmap ;
typedef int fz_stream ;
typedef int fz_context ;
struct TYPE_10__ {int low; int high; int out; } ;
struct TYPE_9__ {int n; int low; int high; } ;
struct TYPE_8__ {int low; int len; int* out; } ;
struct TYPE_7__ {int low; int high; int out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct cidrange* FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int) ;
 TYPE_5__* FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct cidrange*,int,int,int ) ;
 int VAR_2 ;

int
FUNC_10(int VAR_3, char **VAR_4)
{
 fz_context *VAR_5;
 fz_stream *VAR_6;
 pdf_cmap *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 struct cidrange *VAR_12;

 if (VAR_3 != 2)
 {
  FUNC_0(VAR_2, "usage: cmapclean input.cmap\n");
  return 1;
 }

 VAR_5 = FUNC_4(((void*)0), ((void*)0), VAR_0);
 if (!VAR_5)
 {
  FUNC_0(VAR_2, "cannot initialise context\n");
  return 1;
 }

 VAR_6 = FUNC_5(VAR_5, VAR_4[1]);
 VAR_7 = FUNC_7(VAR_5, VAR_6);
 FUNC_2(VAR_5, VAR_6);

 FUNC_8("begincmap\n");
 FUNC_8("/CMapName /%s def\n", VAR_7->cmap_name);
 FUNC_8("/WMode %d def\n", VAR_7->wmode);
 if (VAR_7->usecmap_name[0])
  FUNC_8("/%s usecmap\n", VAR_7->usecmap_name);

 if (VAR_7->codespace_len)
 {
  FUNC_8("begincodespacerange\n");
  for (VAR_8 = 0; VAR_8 < VAR_7->codespace_len; VAR_8++)
  {
   if (VAR_7->codespace[VAR_8].n == 1)
    FUNC_8("<%02x> <%02x>\n", VAR_7->codespace[VAR_8].low, VAR_7->codespace[VAR_8].high);
   else if (VAR_7->codespace[VAR_8].n == 2)
    FUNC_8("<%04x> <%04x>\n", VAR_7->codespace[VAR_8].low, VAR_7->codespace[VAR_8].high);
   else if (VAR_7->codespace[VAR_8].n == 3)
    FUNC_8("<%06x> <%06x>\n", VAR_7->codespace[VAR_8].low, VAR_7->codespace[VAR_8].high);
   else if (VAR_7->codespace[VAR_8].n == 4)
    FUNC_8("<%08x> <%08x>\n", VAR_7->codespace[VAR_8].low, VAR_7->codespace[VAR_8].high);
   else
    FUNC_8("<%x> <%x>\n", VAR_7->codespace[VAR_8].low, VAR_7->codespace[VAR_8].high);
  }
  FUNC_8("endcodespacerange\n");
 }

 VAR_10 = VAR_7->rlen + VAR_7->xlen;
 VAR_12 = FUNC_3(VAR_5, VAR_10 * sizeof *VAR_12);
 VAR_11 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7->rlen; VAR_8++) {
  VAR_12[VAR_11].lo = VAR_7->ranges[VAR_8].low;
  VAR_12[VAR_11].hi = VAR_7->ranges[VAR_8].high;
  VAR_12[VAR_11].v = VAR_7->ranges[VAR_8].out;
  ++VAR_11;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7->xlen; VAR_8++) {
  VAR_12[VAR_11].lo = VAR_7->xranges[VAR_8].low;
  VAR_12[VAR_11].hi = VAR_7->xranges[VAR_8].high;
  VAR_12[VAR_11].v = VAR_7->xranges[VAR_8].out;
  ++VAR_11;
 }

 FUNC_9(VAR_12, VAR_10, sizeof *VAR_12, VAR_1);

 if (VAR_10)
 {
  FUNC_8("begincidchar\n");
  for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11)
  {
   for (VAR_8 = VAR_12[VAR_11].lo, VAR_9 = VAR_12[VAR_11].v; VAR_8 <= VAR_12[VAR_11].hi; ++VAR_8, ++VAR_9)
   {
    FUNC_6(VAR_8);
    FUNC_8("%u\n", VAR_9);
   }
  }
  FUNC_8("endcidchar\n");
 }
 FUNC_8("endcmap\n");

 FUNC_1(VAR_5);
 return 0;
}
