
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fp_type; int is_modified; char tar_type; scalar_t__ offset; void* flags; scalar_t__ crc32; scalar_t__ compressed_filesize; scalar_t__ uncompressed_filesize; void* old_flags; int fp; scalar_t__ is_tar; int * link; } ;
typedef TYPE_1__ phar_entry_info ;
struct TYPE_6__ {int is_modified; } ;
typedef TYPE_2__ phar_archive_data ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char**,int ,char*) ;

int FUNC_4(phar_archive_data *VAR_5, phar_entry_info *VAR_6, char **VAR_7)
{
 if (VAR_6->fp_type == VAR_2) {

  FUNC_2(VAR_6->fp, 0);

  VAR_6->old_flags = VAR_6->flags;
  VAR_6->is_modified = 1;
  VAR_5->is_modified = 1;

  VAR_6->uncompressed_filesize = 0;
  VAR_6->compressed_filesize = 0;
  VAR_6->crc32 = 0;
  VAR_6->flags = VAR_1;
  VAR_6->fp_type = VAR_2;
  VAR_6->offset = 0;
  return VAR_3;
 }

 if (VAR_7) {
  *VAR_7 = ((void*)0);
 }


 if (VAR_6->link) {
  FUNC_0(VAR_6->link);
  VAR_6->link = ((void*)0);
  VAR_6->tar_type = (VAR_6->is_tar ? VAR_4 : '\0');
 }

 VAR_6->fp = FUNC_1();

 if (!VAR_6->fp) {
  if (VAR_7) {
   FUNC_3(VAR_7, 0, "phar error: unable to create temporary file");
  }
  return VAR_0;
 }

 VAR_6->old_flags = VAR_6->flags;
 VAR_6->is_modified = 1;
 VAR_5->is_modified = 1;

 VAR_6->uncompressed_filesize = 0;
 VAR_6->compressed_filesize = 0;
 VAR_6->crc32 = 0;
 VAR_6->flags = VAR_1;
 VAR_6->fp_type = VAR_2;
 VAR_6->offset = 0;
 return VAR_3;
}
