
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int st_mode; int st_size; } ;
struct TYPE_8__ {TYPE_1__ sb; } ;
typedef TYPE_2__ php_stream_statbuf ;
struct TYPE_9__ {char* filename; size_t filename_len; char* tmp; int is_mounted; int is_crc_checked; int is_dir; int flags; int compressed_filesize; int uncompressed_filesize; int fp_type; TYPE_4__* phar; int member_0; } ;
typedef TYPE_3__ phar_entry_info ;
struct TYPE_10__ {int manifest; int mounted_dirs; } ;
typedef TYPE_4__ phar_archive_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*,size_t) ;
 char* FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (char**,size_t*,char const**) ;
 int FUNC_5 (char*,size_t) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,TYPE_2__*) ;
 int * FUNC_8 (int *,char*,size_t,void*,int) ;
 int * FUNC_9 (int *,char*,size_t,char*) ;

int FUNC_10(phar_archive_data *VAR_5, char *VAR_6, size_t VAR_7, char *VAR_8, size_t VAR_9)
{
 phar_entry_info VAR_10 = {0};
 php_stream_statbuf VAR_11;
 int VAR_12;
 const char *VAR_13;

 if (FUNC_4(&VAR_8, &VAR_9, &VAR_13) > VAR_4) {
  return VAR_0;
 }

 if (VAR_9 >= sizeof(".phar")-1 && !FUNC_3(VAR_8, ".phar", sizeof(".phar")-1)) {

  return VAR_0;
 }

 VAR_12 = (VAR_7 > 7 && !FUNC_3(VAR_6, "phar://", 7));

 VAR_10.phar = VAR_5;
 VAR_10.filename = FUNC_1(VAR_8, VAR_9);



 VAR_10.filename_len = VAR_9;
 if (VAR_12) {
  VAR_10.tmp = FUNC_1(VAR_6, VAR_7);
 } else {
  VAR_10.tmp = FUNC_2(VAR_6, ((void*)0));
  if (!VAR_10.tmp) {
   VAR_10.tmp = FUNC_1(VAR_6, VAR_7);
  }
 }
 VAR_6 = VAR_10.tmp;


 if (!VAR_12 && FUNC_6(VAR_6)) {
  FUNC_0(VAR_10.tmp);
  FUNC_0(VAR_10.filename);
  return VAR_0;
 }

 VAR_10.is_mounted = 1;
 VAR_10.is_crc_checked = 1;
 VAR_10.fp_type = VAR_1;

 if (VAR_2 != FUNC_7(VAR_6, &VAR_11)) {
  FUNC_0(VAR_10.tmp);
  FUNC_0(VAR_10.filename);
  return VAR_0;
 }

 if (VAR_11.sb.st_mode & VAR_3) {
  VAR_10.is_dir = 1;
  if (((void*)0) == FUNC_9(&VAR_5->mounted_dirs, VAR_10.filename, VAR_9, VAR_10.filename)) {

   FUNC_0(VAR_10.tmp);
   FUNC_0(VAR_10.filename);
   return VAR_0;
  }
 } else {
  VAR_10.is_dir = 0;
  VAR_10.uncompressed_filesize = VAR_10.compressed_filesize = VAR_11.sb.st_size;
 }

 VAR_10.flags = VAR_11.sb.st_mode;

 if (((void*)0) != FUNC_8(&VAR_5->manifest, VAR_10.filename, VAR_9, (void*)&VAR_10, sizeof(phar_entry_info))) {
  return VAR_2;
 }

 FUNC_0(VAR_10.tmp);
 FUNC_0(VAR_10.filename);
 return VAR_0;
}
