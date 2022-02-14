
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ start; scalar_t__ buf; } ;
typedef TYPE_1__ zend_ffi_ctype_name_buf ;


 int FUNC_0 (scalar_t__,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(zend_ffi_ctype_name_buf *VAR_0, const char *VAR_1, size_t VAR_2)
{
 VAR_0->start -= VAR_2;
 if (VAR_0->start < VAR_0->buf) {
  return 0;
 }
 FUNC_0(VAR_0->start, VAR_1, VAR_2);
 return 1;
}
