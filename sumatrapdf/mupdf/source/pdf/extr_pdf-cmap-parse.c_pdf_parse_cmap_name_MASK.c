
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ pdf_token ;
struct TYPE_6__ {int scratch; } ;
typedef TYPE_1__ pdf_lexbuf ;
struct TYPE_7__ {int cmap_name; } ;
typedef TYPE_2__ pdf_cmap ;
typedef int fz_stream ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, pdf_cmap *VAR_2, fz_stream *VAR_3, pdf_lexbuf *VAR_4)
{
 pdf_token VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);

 if (VAR_5 == VAR_0)
  FUNC_0(VAR_2->cmap_name, VAR_4->scratch, sizeof(VAR_2->cmap_name));
 else
  FUNC_1(VAR_1, "expected name after CMapName in cmap");
}
