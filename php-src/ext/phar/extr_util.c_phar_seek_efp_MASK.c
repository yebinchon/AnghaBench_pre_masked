
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
typedef int php_stream ;
struct TYPE_7__ {scalar_t__ uncompressed_filesize; scalar_t__ is_dir; } ;
typedef TYPE_1__ phar_entry_info ;





 int * FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__,int const) ;

int FUNC_4(phar_entry_info *VAR_0, zend_off_t VAR_1, int VAR_2, zend_off_t VAR_3, int VAR_4)
{
 php_stream *VAR_5 = FUNC_0(VAR_0, VAR_4);
 zend_off_t VAR_6, VAR_7;

 if (!VAR_5) {
  return -1;
 }

 if (VAR_4) {
  phar_entry_info *VAR_8;
  VAR_8 = FUNC_2(VAR_0);
  if (VAR_8) {
   VAR_0 = VAR_8;
  }
 }

 if (VAR_0->is_dir) {
  return 0;
 }

 VAR_7 = FUNC_1(VAR_0);

 switch (VAR_2) {
  case 129:
   VAR_6 = VAR_7 + VAR_0->uncompressed_filesize + VAR_1;
   break;
  case 130:
   VAR_6 = VAR_7 + VAR_3 + VAR_1;
   break;
  case 128:
   VAR_6 = VAR_7 + VAR_1;
   break;
  default:
   VAR_6 = 0;
 }

 if (VAR_6 > VAR_7 + (zend_off_t) VAR_0->uncompressed_filesize) {
  return -1;
 }

 if (VAR_6 < VAR_7) {
  return -1;
 }

 return FUNC_3(VAR_5, VAR_6, 128);
}
