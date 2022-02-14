
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
typedef scalar_t__ ub4 ;
struct oci_lob_self {scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(php_stream *VAR_1, zend_off_t VAR_2, int VAR_3, zend_off_t *VAR_4)
{
 struct oci_lob_self *VAR_5 = (struct oci_lob_self*)VAR_1->abstract;

 if (VAR_2 >= VAR_0) {
  return -1;
 } else {
  VAR_5->offset = (ub4) VAR_2 + 1;
  return 0;
 }
}
