
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ php_conv_dtor_func ;
typedef scalar_t__ php_conv_convert_func ;
struct TYPE_4__ {scalar_t__ dtor; scalar_t__ convert_op; } ;
struct TYPE_5__ {scalar_t__ eos; scalar_t__ ustat; scalar_t__ urem_nbits; scalar_t__ urem; TYPE_1__ _super; } ;
typedef TYPE_2__ php_conv_base64_decode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(php_conv_base64_decode *VAR_3)
{
 VAR_3->_super.convert_op = (php_conv_convert_func) VAR_1;
 VAR_3->_super.dtor = (php_conv_dtor_func) VAR_2;

 VAR_3->urem = 0;
 VAR_3->urem_nbits = 0;
 VAR_3->ustat = 0;
 VAR_3->eos = 0;
 return VAR_0;
}
