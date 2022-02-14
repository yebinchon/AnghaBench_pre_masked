
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ codespace_len; int * codespace; int usecmap; } ;
typedef TYPE_1__ pdf_cmap ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(fz_context *VAR_0, pdf_cmap *VAR_1, pdf_cmap *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_1->usecmap);
 VAR_1->usecmap = FUNC_1(VAR_0, VAR_2);

 if (VAR_1->codespace_len == 0)
 {
  VAR_1->codespace_len = VAR_2->codespace_len;
  for (VAR_3 = 0; VAR_3 < VAR_2->codespace_len; VAR_3++)
   VAR_1->codespace[VAR_3] = VAR_2->codespace[VAR_3];
 }
}
