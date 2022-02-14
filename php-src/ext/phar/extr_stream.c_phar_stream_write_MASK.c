
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
typedef int ssize_t ;
struct TYPE_8__ {int flags; int wrapper; scalar_t__ abstract; } ;
typedef TYPE_3__ php_stream ;
struct TYPE_9__ {scalar_t__ position; TYPE_2__* internal_file; int fp; TYPE_1__* phar; } ;
typedef TYPE_4__ phar_entry_data ;
struct TYPE_7__ {scalar_t__ uncompressed_filesize; scalar_t__ compressed_filesize; int is_modified; int flags; int old_flags; int filename; } ;
struct TYPE_6__ {int fname; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int,int ,int ) ;
 size_t FUNC_3 (int ,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(php_stream *VAR_1, const char *VAR_2, size_t VAR_3)
{
 phar_entry_data *VAR_4 = (phar_entry_data *) VAR_1->abstract;

 FUNC_0(VAR_4->fp, VAR_4->position, VAR_0);
 if (VAR_3 != FUNC_3(VAR_4->fp, VAR_2, VAR_3)) {
  FUNC_2(VAR_1->wrapper, VAR_1->flags, "phar error: Could not write %d characters to \"%s\" in phar \"%s\"", (int) VAR_3, VAR_4->internal_file->filename, VAR_4->phar->fname);
  return -1;
 }
 VAR_4->position = FUNC_1(VAR_4->fp);
 if (VAR_4->position > (zend_off_t)VAR_4->internal_file->uncompressed_filesize) {
  VAR_4->internal_file->uncompressed_filesize = VAR_4->position;
 }
 VAR_4->internal_file->compressed_filesize = VAR_4->internal_file->uncompressed_filesize;
 VAR_4->internal_file->old_flags = VAR_4->internal_file->flags;
 VAR_4->internal_file->is_modified = 1;
 return VAR_3;
}
