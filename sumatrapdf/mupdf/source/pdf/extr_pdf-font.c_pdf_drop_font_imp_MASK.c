
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* vmtx; struct TYPE_3__* hmtx; struct TYPE_3__* cid_to_ucs; struct TYPE_3__* cid_to_gid; int to_unicode; int to_ttf_cmap; int encoding; int font; } ;
typedef TYPE_1__ pdf_font_desc ;
typedef int fz_storable ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_storable *VAR_1)
{
 pdf_font_desc *VAR_2 = (pdf_font_desc *)VAR_1;

 FUNC_0(VAR_0, VAR_2->font);
 FUNC_2(VAR_0, VAR_2->encoding);
 FUNC_2(VAR_0, VAR_2->to_ttf_cmap);
 FUNC_2(VAR_0, VAR_2->to_unicode);
 FUNC_1(VAR_0, VAR_2->cid_to_gid);
 FUNC_1(VAR_0, VAR_2->cid_to_ucs);
 FUNC_1(VAR_0, VAR_2->hmtx);
 FUNC_1(VAR_0, VAR_2->vmtx);
 FUNC_1(VAR_0, VAR_2);
}
