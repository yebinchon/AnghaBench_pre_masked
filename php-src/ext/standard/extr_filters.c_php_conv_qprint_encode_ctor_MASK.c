
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dtor; scalar_t__ convert_op; } ;
struct TYPE_5__ {unsigned int line_ccnt; unsigned int line_len; char const* lbchars; size_t lbchars_len; int lbchars_dup; int persistent; int opts; scalar_t__ lb_ptr; scalar_t__ lb_cnt; TYPE_1__ _super; } ;
typedef TYPE_2__ php_conv_qprint_encode ;
typedef int php_conv_err_t ;
typedef scalar_t__ php_conv_dtor_func ;
typedef scalar_t__ php_conv_convert_func ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (char const*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static php_conv_err_t FUNC_1(php_conv_qprint_encode *VAR_4, unsigned int VAR_5, const char *VAR_6, size_t VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 if (VAR_5 < 4 && VAR_6 != ((void*)0)) {
  return VAR_1;
 }
 VAR_4->_super.convert_op = (php_conv_convert_func) VAR_2;
 VAR_4->_super.dtor = (php_conv_dtor_func) VAR_3;
 VAR_4->line_ccnt = VAR_5;
 VAR_4->line_len = VAR_5;
 if (VAR_6 != ((void*)0)) {
  VAR_4->lbchars = (VAR_8 ? FUNC_0(VAR_6, VAR_10) : VAR_6);
  VAR_4->lbchars_len = VAR_7;
 } else {
  VAR_4->lbchars = ((void*)0);
 }
 VAR_4->lbchars_dup = VAR_8;
 VAR_4->persistent = VAR_10;
 VAR_4->opts = VAR_9;
 VAR_4->lb_cnt = VAR_4->lb_ptr = 0;
 return VAR_0;
}
