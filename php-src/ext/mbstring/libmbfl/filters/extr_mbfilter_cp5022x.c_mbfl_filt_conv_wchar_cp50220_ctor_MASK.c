
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int (* output_function ) (int,void*) ;int (* flush_function ) (void*) ;TYPE_2__* opaque; struct TYPE_12__* data; scalar_t__ filter_flush; scalar_t__ filter_function; } ;
struct TYPE_10__ {int mode; } ;
struct TYPE_11__ {TYPE_3__ last; TYPE_1__ tl_param; } ;
typedef TYPE_2__ mbfl_filt_conv_wchar_cp50220_ctx ;
typedef TYPE_3__ mbfl_convert_filter ;
struct TYPE_13__ {int (* filter_ctor ) (TYPE_3__*) ;scalar_t__ filter_flush; scalar_t__ filter_function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(mbfl_convert_filter *VAR_3)
{
 mbfl_filt_conv_wchar_cp50220_ctx *VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_2(sizeof(mbfl_filt_conv_wchar_cp50220_ctx));
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3);
  return;
 }

 VAR_4->tl_param.mode = VAR_1 | VAR_0;

 VAR_4->last = *VAR_3;
 VAR_4->last.opaque = VAR_4;
 VAR_4->last.data = VAR_3->data;
 VAR_3->filter_function = VAR_2;
 VAR_3->filter_flush = VAR_2;
 VAR_3->output_function = (int(*)(int, void *))VAR_4->last.filter_function;
 VAR_3->flush_function = (int(*)(void *))VAR_4->last.filter_flush;
 VAR_3->data = &VAR_4->last;
 VAR_3->opaque = VAR_4;
 VAR_2(VAR_3);
}
