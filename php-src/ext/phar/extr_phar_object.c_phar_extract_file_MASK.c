
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zend_bool ;
typedef int php_stream_statbuf ;
typedef int php_stream ;
struct TYPE_8__ {int filename_len; char* filename; int flags; int uncompressed_filesize; scalar_t__ is_dir; scalar_t__ is_mounted; } ;
typedef TYPE_1__ phar_entry_info ;
typedef int mode_t ;
struct TYPE_9__ {char* cwd; int cwd_length; } ;
typedef TYPE_2__ cwd_state ;


 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,char**,int) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *,int ,int *) ;
 int FUNC_11 (char*,int,int ,int *) ;
 int * FUNC_12 (char*,char*,int ,int *) ;
 int FUNC_13 (char*,int *) ;
 size_t FUNC_14 (char**,int,char*,char*,...) ;
 scalar_t__ FUNC_15 (TYPE_2__*,char*,int *,int ) ;
 char* FUNC_16 (char*,char,size_t) ;

__attribute__((used)) static int FUNC_17(zend_bool VAR_11, phar_entry_info *VAR_12, char *VAR_13, size_t VAR_14, char **VAR_15)
{
 php_stream_statbuf VAR_16;
 size_t VAR_17;
 php_stream *VAR_18;
 char *VAR_19;
 const char *VAR_20;
 mode_t VAR_21;
 cwd_state VAR_22;
 char *VAR_23;
 size_t VAR_24;

 if (VAR_12->is_mounted) {

  return VAR_9;
 }

 if (VAR_12->filename_len >= sizeof(".phar")-1 && !FUNC_4(VAR_12->filename, ".phar", sizeof(".phar")-1)) {
  return VAR_9;
 }

 VAR_22.cwd = (char*)FUNC_2(2);
 VAR_22.cwd[0] = VAR_1;
 VAR_22.cwd[1] = '\0';
 VAR_22.cwd_length = 1;
 if (FUNC_15(&VAR_22, VAR_12->filename, ((void*)0), VAR_0) != 0 ||
   VAR_22.cwd_length <= 1) {
  if (VAR_2 == VAR_10 && VAR_12->filename_len > 50) {
   char *VAR_25 = FUNC_3(VAR_12->filename, 50);
   FUNC_14(VAR_15, 4096, "Cannot extract \"%s...\" to \"%s...\", extracted filename is too long for filesystem", VAR_25, VAR_13);
   FUNC_1(VAR_25);
  } else {
   FUNC_14(VAR_15, 4096, "Cannot extract \"%s\", internal error", VAR_12->filename);
  }
  FUNC_1(VAR_22.cwd);
  return VAR_3;
 }
 VAR_23 = VAR_22.cwd + 1;
 VAR_24 = VAR_22.cwd_length - 1;
 VAR_17 = FUNC_14(&VAR_19, 0, "%s/%s", VAR_13, VAR_23);

 if (VAR_17 >= VAR_4) {
  char *VAR_26;

  VAR_19[50] = '\0';
  if (VAR_12->filename_len > 50) {
   VAR_26 = FUNC_3(VAR_12->filename, 50);
   FUNC_14(VAR_15, 4096, "Cannot extract \"%s...\" to \"%s...\", extracted filename is too long for filesystem", VAR_26, VAR_19);
   FUNC_1(VAR_26);
  } else {
   FUNC_14(VAR_15, 4096, "Cannot extract \"%s\" to \"%s...\", extracted filename is too long for filesystem", VAR_12->filename, VAR_19);
  }
  FUNC_1(VAR_19);
  FUNC_1(VAR_22.cwd);
  return VAR_3;
 }

 if (!VAR_17) {
  FUNC_14(VAR_15, 4096, "Cannot extract \"%s\", internal error", VAR_12->filename);
  FUNC_1(VAR_19);
  FUNC_1(VAR_22.cwd);
  return VAR_3;
 }

 if (FUNC_8(VAR_19)) {
  FUNC_14(VAR_15, 4096, "Cannot extract \"%s\" to \"%s\", openbasedir/safe mode restrictions in effect", VAR_12->filename, VAR_19);
  FUNC_1(VAR_19);
  FUNC_1(VAR_22.cwd);
  return VAR_3;
 }


 if (!VAR_11 && VAR_9 == FUNC_13(VAR_19, &VAR_16)) {
  FUNC_14(VAR_15, 4096, "Cannot extract \"%s\" to \"%s\", path already exists", VAR_12->filename, VAR_19);
  FUNC_1(VAR_19);
  FUNC_1(VAR_22.cwd);
  return VAR_3;
 }


 VAR_20 = FUNC_16(VAR_23, '/', VAR_24);

 if (VAR_20) {
  VAR_19[VAR_14 + (VAR_20 - VAR_23) + 1] = '\0';
 } else {
  VAR_19[VAR_14] = '\0';
 }

 if (VAR_3 == FUNC_13(VAR_19, &VAR_16)) {
  if (VAR_12->is_dir) {
   if (!FUNC_11(VAR_19, VAR_12->flags & VAR_5, VAR_6, ((void*)0))) {
    FUNC_14(VAR_15, 4096, "Cannot extract \"%s\", could not create directory \"%s\"", VAR_12->filename, VAR_19);
    FUNC_1(VAR_19);
    FUNC_1(VAR_22.cwd);
    return VAR_3;
   }
  } else {
   if (!FUNC_11(VAR_19, 0777, VAR_6, ((void*)0))) {
    FUNC_14(VAR_15, 4096, "Cannot extract \"%s\", could not create directory \"%s\"", VAR_12->filename, VAR_19);
    FUNC_1(VAR_19);
    FUNC_1(VAR_22.cwd);
    return VAR_3;
   }
  }
 }

 if (VAR_20) {
  VAR_19[VAR_14 + (VAR_20 - VAR_23) + 1] = '/';
 } else {
  VAR_19[VAR_14] = '/';
 }

 VAR_23 = ((void*)0);
 FUNC_1(VAR_22.cwd);

 if (VAR_12->is_dir) {
  FUNC_1(VAR_19);
  return VAR_9;
 }

 VAR_18 = FUNC_12(VAR_19, "w+b", VAR_7, ((void*)0));

 if (!VAR_18) {
  FUNC_14(VAR_15, 4096, "Cannot extract \"%s\", could not open for writing \"%s\"", VAR_12->filename, VAR_19);
  FUNC_1(VAR_19);
  return VAR_3;
 }

 if (!FUNC_5(VAR_12, 0)) {
  if (VAR_3 == FUNC_6(VAR_12, VAR_15, 1)) {
   if (VAR_15) {
    FUNC_14(VAR_15, 4096, "Cannot extract \"%s\" to \"%s\", unable to open internal file pointer: %s", VAR_12->filename, VAR_19, *VAR_15);
   } else {
    FUNC_14(VAR_15, 4096, "Cannot extract \"%s\" to \"%s\", unable to open internal file pointer", VAR_12->filename, VAR_19);
   }
   FUNC_1(VAR_19);
   FUNC_9(VAR_18);
   return VAR_3;
  }
 }

 if (VAR_3 == FUNC_7(VAR_12, 0, VAR_8, 0, 0)) {
  FUNC_14(VAR_15, 4096, "Cannot extract \"%s\" to \"%s\", unable to seek internal file pointer", VAR_12->filename, VAR_19);
  FUNC_1(VAR_19);
  FUNC_9(VAR_18);
  return VAR_3;
 }

 if (VAR_9 != FUNC_10(FUNC_5(VAR_12, 0), VAR_18, VAR_12->uncompressed_filesize, ((void*)0))) {
  FUNC_14(VAR_15, 4096, "Cannot extract \"%s\" to \"%s\", copying contents failed", VAR_12->filename, VAR_19);
  FUNC_1(VAR_19);
  FUNC_9(VAR_18);
  return VAR_3;
 }

 FUNC_9(VAR_18);
 VAR_21 = (mode_t) VAR_12->flags & VAR_5;

 if (VAR_3 == FUNC_0(VAR_19, VAR_21)) {
  FUNC_14(VAR_15, 4096, "Cannot extract \"%s\" to \"%s\", setting file permissions failed", VAR_12->filename, VAR_19);
  FUNC_1(VAR_19);
  return VAR_3;
 }

 FUNC_1(VAR_19);
 return VAR_9;
}
