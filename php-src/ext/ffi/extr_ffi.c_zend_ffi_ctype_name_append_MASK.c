
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ end; scalar_t__ buf; } ;
typedef TYPE_1__ zend_ffi_ctype_name_buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(zend_ffi_ctype_name_buf *VAR_1, const char *VAR_2, size_t VAR_3)
{
 if (VAR_1->end + VAR_3 > VAR_1->buf + VAR_0) {
  return 0;
 }
 FUNC_0(VAR_1->end, VAR_2, VAR_3);
 VAR_1->end += VAR_3;
 return 1;
}
