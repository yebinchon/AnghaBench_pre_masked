
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int last; } ;
typedef TYPE_1__ mbfl_filt_conv_wchar_cp50220_ctx ;
struct TYPE_7__ {int * data; TYPE_1__* opaque; } ;
typedef TYPE_2__ mbfl_convert_filter ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(mbfl_convert_filter *VAR_0, mbfl_convert_filter *VAR_1)
{
 mbfl_filt_conv_wchar_cp50220_ctx *VAR_2;

 *VAR_1 = *VAR_0;
 VAR_2 = FUNC_0(sizeof(mbfl_filt_conv_wchar_cp50220_ctx));
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = *(mbfl_filt_conv_wchar_cp50220_ctx*)VAR_0->opaque;
 }

 VAR_1->opaque = VAR_2;
 VAR_1->data = &VAR_2->last;
}
