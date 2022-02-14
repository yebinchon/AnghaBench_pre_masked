
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int php_conv_err_t ;
typedef scalar_t__ php_conv_dtor_func ;
typedef scalar_t__ php_conv_convert_func ;
struct TYPE_4__ {scalar_t__ dtor; scalar_t__ convert_op; } ;
struct TYPE_5__ {unsigned int line_ccnt; unsigned int line_len; char const* lbchars; size_t lbchars_len; int lbchars_dup; int persistent; scalar_t__ erem_len; TYPE_1__ _super; } ;
typedef TYPE_2__ php_conv_base64_encode ;


 int VAR_0 ;
 char const* FUNC_0 (char const*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static php_conv_err_t FUNC_1(php_conv_base64_encode *VAR_3, unsigned int VAR_4, const char *VAR_5, size_t VAR_6, int VAR_7, int VAR_8)
{
 VAR_3->_super.convert_op = (php_conv_convert_func) VAR_1;
 VAR_3->_super.dtor = (php_conv_dtor_func) VAR_2;
 VAR_3->erem_len = 0;
 VAR_3->line_ccnt = VAR_4;
 VAR_3->line_len = VAR_4;
 if (VAR_5 != ((void*)0)) {
  VAR_3->lbchars = (VAR_7 ? FUNC_0(VAR_5, VAR_8) : VAR_5);
  VAR_3->lbchars_len = VAR_6;
 } else {
  VAR_3->lbchars = ((void*)0);
 }
 VAR_3->lbchars_dup = VAR_7;
 VAR_3->persistent = VAR_8;
 return VAR_0;
}
