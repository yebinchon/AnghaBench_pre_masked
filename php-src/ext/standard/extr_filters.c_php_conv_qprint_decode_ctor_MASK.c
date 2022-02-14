
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dtor; scalar_t__ convert_op; } ;
struct TYPE_5__ {char const* lbchars; size_t lbchars_len; int lbchars_dup; int persistent; scalar_t__ lb_cnt; scalar_t__ lb_ptr; scalar_t__ next_char; scalar_t__ scan_stat; TYPE_1__ _super; } ;
typedef TYPE_2__ php_conv_qprint_decode ;
typedef int php_conv_err_t ;
typedef scalar_t__ php_conv_dtor_func ;
typedef scalar_t__ php_conv_convert_func ;


 int VAR_0 ;
 char const* FUNC_0 (char const*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static php_conv_err_t FUNC_1(php_conv_qprint_decode *VAR_3, const char *VAR_4, size_t VAR_5, int VAR_6, int VAR_7)
{
 VAR_3->_super.convert_op = (php_conv_convert_func) VAR_1;
 VAR_3->_super.dtor = (php_conv_dtor_func) VAR_2;
 VAR_3->scan_stat = 0;
 VAR_3->next_char = 0;
 VAR_3->lb_ptr = VAR_3->lb_cnt = 0;
 if (VAR_4 != ((void*)0)) {
  VAR_3->lbchars = (VAR_6 ? FUNC_0(VAR_4, VAR_7) : VAR_4);
  VAR_3->lbchars_len = VAR_5;
 } else {
  VAR_3->lbchars = ((void*)0);
  VAR_3->lbchars_len = 0;
 }
 VAR_3->lbchars_dup = VAR_6;
 VAR_3->persistent = VAR_7;
 return VAR_0;
}
