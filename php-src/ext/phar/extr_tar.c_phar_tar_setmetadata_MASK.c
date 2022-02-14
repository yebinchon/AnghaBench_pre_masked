
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int php_serialize_data_t ;
struct TYPE_8__ {int * s; } ;
struct TYPE_7__ {scalar_t__ fp_type; int is_modified; int filename_len; int filename; TYPE_1__* phar; TYPE_3__ metadata_str; int * fp; scalar_t__ offset_abs; scalar_t__ offset; scalar_t__ compressed_filesize; scalar_t__ uncompressed_filesize; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_6__ {int manifest; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,int *,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (char**,int ,char*,...) ;
 int FUNC_10 (int *,int ,int ) ;

int FUNC_11(zval *VAR_3, phar_entry_info *VAR_4, char **VAR_5)
{
 php_serialize_data_t VAR_6;

 if (VAR_4->metadata_str.s) {
  FUNC_8(&VAR_4->metadata_str);
 }

 VAR_4->metadata_str.s = ((void*)0);
 FUNC_1(VAR_6);
 FUNC_7(&VAR_4->metadata_str, VAR_3, &VAR_6);
 FUNC_0(VAR_6);
 VAR_4->uncompressed_filesize = VAR_4->compressed_filesize = VAR_4->metadata_str.s ? FUNC_2(VAR_4->metadata_str.s) : 0;

 if (VAR_4->fp && VAR_4->fp_type == VAR_0) {
  FUNC_4(VAR_4->fp);
 }

 VAR_4->fp_type = VAR_0;
 VAR_4->is_modified = 1;
 VAR_4->fp = FUNC_5();
 VAR_4->offset = VAR_4->offset_abs = 0;
 if (VAR_4->fp == ((void*)0)) {
  FUNC_9(VAR_5, 0, "phar error: unable to create temporary file");
  return -1;
 }
 if (FUNC_2(VAR_4->metadata_str.s) != FUNC_6(VAR_4->fp, FUNC_3(VAR_4->metadata_str.s), FUNC_2(VAR_4->metadata_str.s))) {
  FUNC_9(VAR_5, 0, "phar tar error: unable to write metadata to magic metadata file \"%s\"", VAR_4->filename);
  FUNC_10(&(VAR_4->phar->manifest), VAR_4->filename, VAR_4->filename_len);
  return VAR_2;
 }

 return VAR_1;
}
