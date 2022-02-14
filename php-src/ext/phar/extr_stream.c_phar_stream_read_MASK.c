
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
typedef int ssize_t ;
struct TYPE_7__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_8__ {scalar_t__ uncompressed_filesize; scalar_t__ is_deleted; scalar_t__ link; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_9__ {scalar_t__ position; scalar_t__ zero; int fp; TYPE_2__* internal_file; } ;
typedef TYPE_3__ phar_entry_data ;


 int FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(php_stream *VAR_1, char *VAR_2, size_t VAR_3)
{
 phar_entry_data *VAR_4 = (phar_entry_data *)VAR_1->abstract;
 size_t VAR_5;
 phar_entry_info *VAR_6;

 if (VAR_4->internal_file->link) {
  VAR_6 = FUNC_1(VAR_4->internal_file);
 } else {
  VAR_6 = VAR_4->internal_file;
 }

 if (VAR_6->is_deleted) {
  VAR_1->eof = 1;
  return -1;
 }


 FUNC_3(VAR_4->fp, VAR_4->position + VAR_4->zero, VAR_0);

 VAR_5 = FUNC_2(VAR_4->fp, VAR_2, FUNC_0(VAR_3, (size_t)(VAR_6->uncompressed_filesize - VAR_4->position)));
 VAR_4->position = FUNC_4(VAR_4->fp) - VAR_4->zero;
 VAR_1->eof = (VAR_4->position == (zend_off_t) VAR_6->uncompressed_filesize);

 return VAR_5;
}
