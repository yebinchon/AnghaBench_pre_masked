
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codespace_len; TYPE_3__* codespace; } ;
typedef TYPE_1__ pdf_cmap ;
typedef int fz_context ;
struct TYPE_5__ {int n; unsigned int low; unsigned int high; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(fz_context *VAR_0, pdf_cmap *VAR_1, unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 if (VAR_1->codespace_len + 1 == FUNC_1(VAR_1->codespace))
 {
  FUNC_0(VAR_0, "assert: too many code space ranges");
  return;
 }

 VAR_1->codespace[VAR_1->codespace_len].n = VAR_4;
 VAR_1->codespace[VAR_1->codespace_len].low = VAR_2;
 VAR_1->codespace[VAR_1->codespace_len].high = VAR_3;
 VAR_1->codespace_len ++;
}
