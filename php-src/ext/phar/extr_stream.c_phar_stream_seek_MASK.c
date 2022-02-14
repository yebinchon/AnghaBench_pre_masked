
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
struct TYPE_7__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_8__ {scalar_t__ uncompressed_filesize; scalar_t__ link; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_9__ {scalar_t__ zero; scalar_t__ position; int fp; TYPE_2__* internal_file; } ;
typedef TYPE_3__ phar_entry_data ;





 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__,int const) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(php_stream *VAR_0, zend_off_t VAR_1, int VAR_2, zend_off_t *VAR_3)
{
 phar_entry_data *VAR_4 = (phar_entry_data *)VAR_0->abstract;
 phar_entry_info *VAR_5;
 int VAR_6;
 zend_off_t VAR_7;

 if (VAR_4->internal_file->link) {
  VAR_5 = FUNC_0(VAR_4->internal_file);
 } else {
  VAR_5 = VAR_4->internal_file;
 }

 switch (VAR_2) {
  case 129 :
   VAR_7 = VAR_4->zero + VAR_5->uncompressed_filesize + VAR_1;
   break;
  case 130 :
   VAR_7 = VAR_4->zero + VAR_4->position + VAR_1;
   break;
  case 128 :
   VAR_7 = VAR_4->zero + VAR_1;
   break;
  default:
   VAR_7 = 0;
 }
 if (VAR_7 > VAR_4->zero + (zend_off_t) VAR_5->uncompressed_filesize) {
  *VAR_3 = -1;
  return -1;
 }
 if (VAR_7 < VAR_4->zero) {
  *VAR_3 = -1;
  return -1;
 }
 VAR_6 = FUNC_1(VAR_4->fp, VAR_7, 128);
 *VAR_3 = FUNC_2(VAR_4->fp) - VAR_4->zero;
 VAR_4->position = *VAR_3;
 return VAR_6;
}
