
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int checksum; int version; int magic; int linkname; int typeflag; int mtime; int size; int mode; int name; int prefix; } ;
typedef TYPE_1__ tar_header ;
struct _phar_pass_tar_info {int free_ufp; int free_fp; int new; scalar_t__ error; } ;
struct TYPE_9__ {scalar_t__ fp_refcount; char* filename; int filename_len; int flags; int uncompressed_filesize; int timestamp; char* link; int crc32; int fp_type; size_t offset; size_t offset_abs; int * fp; TYPE_7__* phar; scalar_t__ is_modified; void* header_offset; int tar_type; scalar_t__ is_deleted; scalar_t__ is_mounted; } ;
typedef TYPE_2__ phar_entry_info ;
typedef int header ;
struct TYPE_10__ {int * ufp; int * fp; int fname; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_7__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ,int,int *) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (scalar_t__,int,char*,int ,char*) ;
 int FUNC_13 (int ,char*,int) ;

__attribute__((used)) static int FUNC_14(phar_entry_info *VAR_8, void *VAR_9)
{
 tar_header VAR_10;
 size_t VAR_11;
 struct _phar_pass_tar_info *VAR_12 = (struct _phar_pass_tar_info *)VAR_9;
 char VAR_13[512];

 if (VAR_8->is_mounted) {
  return VAR_5;
 }

 if (VAR_8->is_deleted) {
  if (VAR_8->fp_refcount <= 0) {
   return VAR_6;
  } else {

   return VAR_5;
  }
 }

 FUNC_2(VAR_8->phar, VAR_8->filename, VAR_8->filename_len);
 FUNC_1((char *) &VAR_10, 0, sizeof(VAR_10));

 if (VAR_8->filename_len > 100) {
  char *VAR_14;
  if (VAR_8->filename_len > 256) {
   if (VAR_12->error) {
    FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, filename \"%s\" is too long for tar file format", VAR_8->phar->fname, VAR_8->filename);
   }
   return VAR_7;
  }
  VAR_14 = VAR_8->filename + VAR_8->filename_len - 101;
  while (*VAR_14 && *VAR_14 != '/') {
   ++VAR_14;
  }
  if (!*VAR_14 || ((VAR_14 - VAR_8->filename) > 155)) {
   if (VAR_12->error) {
    FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, filename \"%s\" is too long for tar file format", VAR_8->phar->fname, VAR_8->filename);
   }
   return VAR_7;
  }
  FUNC_0(VAR_10.prefix, VAR_8->filename, VAR_14 - VAR_8->filename);
  FUNC_0(VAR_10.name, VAR_14 + 1, VAR_8->filename_len - (VAR_14 + 1 - VAR_8->filename));
 } else {
  FUNC_0(VAR_10.name, VAR_8->filename, VAR_8->filename_len);
 }

 FUNC_7(VAR_10.mode, VAR_8->flags & VAR_1, sizeof(VAR_10.mode)-1);

 if (VAR_0 == FUNC_7(VAR_10.size, VAR_8->uncompressed_filesize, sizeof(VAR_10.size)-1)) {
  if (VAR_12->error) {
   FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, filename \"%s\" is too large for tar file format", VAR_8->phar->fname, VAR_8->filename);
  }
  return VAR_7;
 }

 if (VAR_0 == FUNC_7(VAR_10.mtime, VAR_8->timestamp, sizeof(VAR_10.mtime)-1)) {
  if (VAR_12->error) {
   FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, file modification time of file \"%s\" is too large for tar file format", VAR_8->phar->fname, VAR_8->filename);
  }
  return VAR_7;
 }


 VAR_10.typeflag = VAR_8->tar_type;

 if (VAR_8->link) {
  if (FUNC_13(VAR_10.linkname, VAR_8->link, sizeof(VAR_10.linkname)) >= sizeof(VAR_10.linkname)) {
   if (VAR_12->error) {
    FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, link \"%s\" is too long for format", VAR_8->phar->fname, VAR_8->link);
   }
   return VAR_7;
  }
 }

 FUNC_0(VAR_10.magic, "ustar", sizeof("ustar")-1);
 FUNC_0(VAR_10.version, "00", sizeof("00")-1);
 FUNC_0(VAR_10.checksum, "        ", sizeof("        ")-1);
 VAR_8->crc32 = FUNC_6((char *)&VAR_10, sizeof(VAR_10));

 if (VAR_0 == FUNC_7(VAR_10.checksum, VAR_8->crc32, sizeof(VAR_10.checksum)-1)) {
  if (VAR_12->error) {
   FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, checksum of file \"%s\" is too large for tar file format", VAR_8->phar->fname, VAR_8->filename);
  }
  return VAR_7;
 }


 VAR_8->header_offset = FUNC_10(VAR_12->new);

 if (sizeof(VAR_10) != FUNC_11(VAR_12->new, (char *) &VAR_10, sizeof(VAR_10))) {
  if (VAR_12->error) {
   FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, header for  file \"%s\" could not be written", VAR_8->phar->fname, VAR_8->filename);
  }
  return VAR_7;
 }

 VAR_11 = FUNC_10(VAR_12->new);


 if (VAR_8->uncompressed_filesize) {
  if (VAR_0 == FUNC_4(VAR_8, VAR_12->error, 0)) {
   return VAR_7;
  }

  if (-1 == FUNC_5(VAR_8, 0, VAR_3, 0, 0)) {
   if (VAR_12->error) {
    FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, contents of file \"%s\" could not be written, seek failed", VAR_8->phar->fname, VAR_8->filename);
   }
   return VAR_7;
  }

  if (VAR_4 != FUNC_9(FUNC_3(VAR_8, 0), VAR_12->new, VAR_8->uncompressed_filesize, ((void*)0))) {
   if (VAR_12->error) {
    FUNC_12(VAR_12->error, 4096, "tar-based phar \"%s\" cannot be created, contents of file \"%s\" could not be written", VAR_8->phar->fname, VAR_8->filename);
   }
   return VAR_7;
  }

  FUNC_1(VAR_13, 0, 512);
  FUNC_11(VAR_12->new, VAR_13, ((VAR_8->uncompressed_filesize +511)&~511) - VAR_8->uncompressed_filesize);
 }

 if (!VAR_8->is_modified && VAR_8->fp_refcount) {

  switch (VAR_8->fp_type) {
   case 129:
    VAR_12->free_fp = 0;
    break;
   case 128:
    VAR_12->free_ufp = 0;
   default:
    break;
  }
 }

 VAR_8->is_modified = 0;

 if (VAR_8->fp_type == VAR_2 && VAR_8->fp != VAR_8->phar->fp && VAR_8->fp != VAR_8->phar->ufp) {
  if (!VAR_8->fp_refcount) {
   FUNC_8(VAR_8->fp);
  }
  VAR_8->fp = ((void*)0);
 }

 VAR_8->fp_type = 129;


 VAR_8->offset = VAR_8->offset_abs = VAR_11;
 return VAR_5;
}
