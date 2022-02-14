
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {char* cmap_name; int rlen; int xlen; int mlen; int dlen; int* dict; char* usecmap_name; int wmode; int codespace_len; TYPE_4__* codespace; TYPE_3__* mranges; TYPE_2__* xranges; TYPE_1__* ranges; } ;
typedef TYPE_5__ pdf_cmap ;
typedef int fz_stream ;
typedef int fz_context ;
struct TYPE_11__ {int n; int low; int high; } ;
struct TYPE_10__ {int low; int out; } ;
struct TYPE_9__ {int low; int high; int out; } ;
struct TYPE_8__ {int low; int high; int out; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,...) ;
 int VAR_1 ;
 int FUNC_9 (char*,char*) ;

int
FUNC_10(int VAR_2, char **VAR_3)
{
 pdf_cmap *VAR_4;
 fz_stream *VAR_5;
 char VAR_6[256];
 int VAR_7, VAR_8;
 fz_context *VAR_9;

 if (VAR_2 < 2)
 {
  FUNC_1(VAR_1, "usage: cmapdump > out.c [lots of cmap files]\n");
  return 1;
 }

 VAR_9 = FUNC_4(((void*)0), ((void*)0), VAR_0);
 if (!VAR_9)
 {
  FUNC_1(VAR_1, "cannot initialise context\n");
  return 1;
 }

 FUNC_8("/* This is an automatically generated file. Do not edit. */\n");

 for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++)
 {
  VAR_5 = FUNC_5(VAR_9, VAR_3[VAR_7]);
  VAR_4 = FUNC_7(VAR_9, VAR_5);
  FUNC_3(VAR_9, VAR_5);

  FUNC_9(VAR_6, VAR_4->cmap_name);
  FUNC_0(VAR_6);

  FUNC_8("\n/* %s */\n\n", VAR_4->cmap_name);

  if (VAR_4->rlen)
  {
   FUNC_8("static const pdf_range cmap_%s_ranges[] = {", VAR_6);
   for (VAR_8 = 0; VAR_8 < VAR_4->rlen; VAR_8++)
   {
    FUNC_8("\n{%u,%u,%u},", VAR_4->ranges[VAR_8].low, VAR_4->ranges[VAR_8].high, VAR_4->ranges[VAR_8].out);
   }
   FUNC_8("\n};\n\n");
  }

  if (VAR_4->xlen)
  {
   FUNC_8("static const pdf_xrange cmap_%s_xranges[] = {", VAR_6);
   for (VAR_8 = 0; VAR_8 < VAR_4->xlen; VAR_8++)
   {
    FUNC_8("\n{%u,%u,%u},", VAR_4->xranges[VAR_8].low, VAR_4->xranges[VAR_8].high, VAR_4->xranges[VAR_8].out);
   }
   FUNC_8("\n};\n\n");
  }

  if (VAR_4->mlen > 0)
  {
   FUNC_8("static const pdf_mrange cmap_%s_mranges[] = {", VAR_6);
   for (VAR_8 = 0; VAR_8 < VAR_4->mlen; VAR_8++)
   {
    FUNC_8("\n{%u,%u},", VAR_4->mranges[VAR_8].low, VAR_4->mranges[VAR_8].out);
   }
   FUNC_8("\n};\n\n");
  }

  if (VAR_4->dlen > 0)
  {
   int VAR_10 = 0, VAR_11 = VAR_4->dict[0];
   FUNC_8("static const int cmap_%s_table[] = {\n", VAR_6);
   for (VAR_8 = 0; VAR_8 < VAR_4->dlen; VAR_8++)
   {
    if (VAR_10 > VAR_11)
    {
     FUNC_8("\n");
     VAR_10 = 1;
     VAR_11 = VAR_4->dict[VAR_8];
    }
    else
     ++VAR_10;
    FUNC_8("%u,", VAR_4->dict[VAR_8]);
   }
   FUNC_8("\n};\n\n");
  }

  FUNC_8("static pdf_cmap cmap_%s = {\n", VAR_6);
  FUNC_8("\t{ -1, pdf_drop_cmap_imp },\n");
  FUNC_8("\t/* cmapname */ \"%s\",\n", VAR_4->cmap_name);
  FUNC_8("\t/* usecmap */ \"%s\", NULL,\n", VAR_4->usecmap_name);
  FUNC_8("\t/* wmode */ %u,\n", VAR_4->wmode);
  FUNC_8("\t/* codespaces */ %u, {\n", VAR_4->codespace_len);
  if (VAR_4->codespace_len == 0)
  {
   FUNC_8("\t\t{ 0, 0, 0 },\n");
  }
  for (VAR_8 = 0; VAR_8 < VAR_4->codespace_len; VAR_8++)
  {
   int VAR_12 = VAR_4->codespace[VAR_8].n;
   FUNC_8("\t\t{ %u, 0x%0*x, 0x%0*x },\n", VAR_12,
    VAR_12*2, VAR_4->codespace[VAR_8].low,
    VAR_12*2, VAR_4->codespace[VAR_8].high);
  }
  FUNC_8("\t},\n");

  if (VAR_4->rlen)
   FUNC_8("\t%u, %u, (pdf_range*)cmap_%s_ranges,\n", VAR_4->rlen, VAR_4->rlen, VAR_6);
  else
   FUNC_8("\t0, 0, NULL, /* ranges */\n");
  if (VAR_4->xlen)
   FUNC_8("\t%u, %u, (pdf_xrange*)cmap_%s_xranges,\n", VAR_4->xlen, VAR_4->xlen, VAR_6);
  else
   FUNC_8("\t0, 0, NULL, /* xranges */\n");
  if (VAR_4->mlen)
   FUNC_8("\t%u, %u, (pdf_mrange*)cmap_%s_mranges,\n", VAR_4->mlen, VAR_4->mlen, VAR_6);
  else
   FUNC_8("\t0, 0, NULL, /* mranges */\n");
  if (VAR_4->dict)
   FUNC_8("\t%u, %u, (int*)cmap_%s_table,\n", VAR_4->dlen, VAR_4->dlen, VAR_6);
  else
   FUNC_8("\t0, 0, NULL, /* table */\n");
  FUNC_8("\t0, 0, 0, NULL /* splay tree */\n");
  FUNC_8("};\n");

  FUNC_6(VAR_9, VAR_4);
 }

 FUNC_2(VAR_9);
 return 0;
}
