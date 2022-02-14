
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {char* cmap_name; int wmode; char* usecmap_name; int codespace_len; int rlen; int xlen; int mlen; TYPE_3__* mranges; TYPE_2__* xranges; TYPE_1__* ranges; TYPE_4__* codespace; } ;
typedef TYPE_5__ pdf_cmap ;
typedef int fz_stream ;
typedef int fz_context ;
struct TYPE_10__ {int n; int low; int high; } ;
struct TYPE_9__ {scalar_t__ low; int len; int* out; } ;
struct TYPE_8__ {scalar_t__ high; scalar_t__ low; int out; } ;
struct TYPE_7__ {scalar_t__ high; scalar_t__ low; int out; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_5__* FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char) ;
 int VAR_1 ;

int
FUNC_9(int VAR_2, char **VAR_3)
{
 fz_context *VAR_4;
 fz_stream *VAR_5;
 pdf_cmap *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;

 if (VAR_2 != 2)
 {
  FUNC_0(VAR_1, "usage: cmapclean input.cmap\n");
  return 1;
 }

 VAR_4 = FUNC_3(((void*)0), ((void*)0), VAR_0);
 if (!VAR_4)
 {
  FUNC_0(VAR_1, "cannot initialise context\n");
  return 1;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_3[1]);
 VAR_6 = FUNC_6(VAR_4, VAR_5);
 FUNC_2(VAR_4, VAR_5);

 FUNC_7("begincmap\n");
 FUNC_7("/CMapName /%s def\n", VAR_6->cmap_name);
 FUNC_7("/WMode %d def\n", VAR_6->wmode);
 if (VAR_6->usecmap_name[0])
  FUNC_7("/%s usecmap\n", VAR_6->usecmap_name);

 if (VAR_6->codespace_len)
 {
  FUNC_7("begincodespacerange\n");
  for (VAR_7 = 0; VAR_7 < VAR_6->codespace_len; VAR_7++)
  {
   if (VAR_6->codespace[VAR_7].n == 1)
    FUNC_7("<%02x><%02x>\n", VAR_6->codespace[VAR_7].low, VAR_6->codespace[VAR_7].high);
   else if (VAR_6->codespace[VAR_7].n == 2)
    FUNC_7("<%04x><%04x>\n", VAR_6->codespace[VAR_7].low, VAR_6->codespace[VAR_7].high);
   else if (VAR_6->codespace[VAR_7].n == 3)
    FUNC_7("<%06x><%06x>\n", VAR_6->codespace[VAR_7].low, VAR_6->codespace[VAR_7].high);
   else if (VAR_6->codespace[VAR_7].n == 4)
    FUNC_7("<%08x><%08x>\n", VAR_6->codespace[VAR_7].low, VAR_6->codespace[VAR_7].high);
   else
    FUNC_7("<%x><%x>\n", VAR_6->codespace[VAR_7].low, VAR_6->codespace[VAR_7].high);
  }
  FUNC_7("endcodespacerange\n");
 }



 VAR_9 = VAR_10 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6->rlen; VAR_7++)
  if (VAR_6->ranges[VAR_7].high - VAR_6->ranges[VAR_7].low > 0)
   ++VAR_10;
  else
   ++VAR_9;

 if (VAR_9)
 {
  FUNC_7("begincidchar\n");
  for (VAR_7 = 0; VAR_7 < VAR_6->rlen; VAR_7++) {
   if (VAR_6->ranges[VAR_7].high - VAR_6->ranges[VAR_7].low == 0) {
    FUNC_5(VAR_6->ranges[VAR_7].low);
    FUNC_7(" %u\n", VAR_6->ranges[VAR_7].out);
   }
  }
  FUNC_7("endcidchar\n");
 }

 if (VAR_10)
 {
  FUNC_7("begincidrange\n");
  for (VAR_7 = 0; VAR_7 < VAR_6->rlen; VAR_7++) {
   if (VAR_6->ranges[VAR_7].high - VAR_6->ranges[VAR_7].low > 0) {
    FUNC_5(VAR_6->ranges[VAR_7].low);
    FUNC_8(' ');
    FUNC_5(VAR_6->ranges[VAR_7].high);
    FUNC_7(" %u\n", VAR_6->ranges[VAR_7].out);
   }
  }
  FUNC_7("endcidrange\n");
 }



 VAR_9 = VAR_10 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6->xlen; VAR_7++)
  if (VAR_6->xranges[VAR_7].high - VAR_6->xranges[VAR_7].low > 0)
   ++VAR_10;
  else
   ++VAR_9;

 if (VAR_9)
 {
  FUNC_7("begincidchar\n");
  for (VAR_7 = 0; VAR_7 < VAR_6->xlen; VAR_7++) {
   if (VAR_6->xranges[VAR_7].high - VAR_6->xranges[VAR_7].low == 0) {
    FUNC_5(VAR_6->xranges[VAR_7].low);
    FUNC_7("%u\n", VAR_6->xranges[VAR_7].out);
   }
  }
  FUNC_7("endcidchar\n");
 }

 if (VAR_10)
 {
  FUNC_7("begincidrange\n");
  for (VAR_7 = 0; VAR_7 < VAR_6->xlen; VAR_7++) {
   if (VAR_6->xranges[VAR_7].high - VAR_6->xranges[VAR_7].low > 0) {
    FUNC_5(VAR_6->xranges[VAR_7].low);
    FUNC_5(VAR_6->xranges[VAR_7].high);
    FUNC_7("%u\n", VAR_6->xranges[VAR_7].out);
   }
  }
  FUNC_7("endcidrange\n");
 }
 FUNC_7("endcmap\n");

 FUNC_1(VAR_4);
 return 0;
}
