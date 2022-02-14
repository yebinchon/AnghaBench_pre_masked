
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int persistent; int * lbchars; scalar_t__ lbchars_dup; } ;
typedef TYPE_1__ php_conv_qprint_decode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(php_conv_qprint_decode *VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0));
 if (VAR_0->lbchars_dup && VAR_0->lbchars != ((void*)0)) {
  FUNC_1((void *)VAR_0->lbchars, VAR_0->persistent);
 }
}
