
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* tree; struct TYPE_3__* dict; struct TYPE_3__* mranges; struct TYPE_3__* xranges; struct TYPE_3__* ranges; int usecmap; } ;
typedef TYPE_1__ pdf_cmap ;
typedef int fz_storable ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(fz_context *VAR_0, fz_storable *VAR_1)
{
 pdf_cmap *VAR_2 = (pdf_cmap *)VAR_1;
 FUNC_1(VAR_0, VAR_2->usecmap);
 FUNC_0(VAR_0, VAR_2->ranges);
 FUNC_0(VAR_0, VAR_2->xranges);
 FUNC_0(VAR_0, VAR_2->mranges);
 FUNC_0(VAR_0, VAR_2->dict);
 FUNC_0(VAR_0, VAR_2->tree);
 FUNC_0(VAR_0, VAR_2);
}
