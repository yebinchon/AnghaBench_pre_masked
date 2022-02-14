
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zend_off_t ;
struct _phar_zip_pass {char** error; int centralfp; int filefp; } ;
struct TYPE_8__ {scalar_t__ s; } ;
typedef TYPE_1__ smart_str ;
typedef int php_stream ;
struct TYPE_9__ {char* filename; int filename_len; int is_modified; size_t uncompressed_filesize; size_t compressed_filesize; TYPE_3__* phar; int * fp; int fp_type; int member_0; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_10__ {size_t sig_flags; char* fname; int is_data; } ;
typedef TYPE_3__ phar_archive_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*,int *,char**,size_t*,char**) ;
 int FUNC_6 (TYPE_2__*,void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int ,int *) ;
 void* FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;
 size_t FUNC_12 (int *,char*,size_t) ;
 int FUNC_13 (char**,int ,char*,...) ;

__attribute__((used)) static int FUNC_14(phar_archive_data *VAR_4, struct _phar_zip_pass *VAR_5,
       smart_str *VAR_6)
{

 if (!VAR_4->is_data || VAR_4->sig_flags) {
  size_t VAR_7;
  char *VAR_8, VAR_9[8];
  phar_entry_info VAR_10 = {0};
  php_stream *VAR_11;
  zend_off_t VAR_12;

  VAR_11 = FUNC_9();
  if (VAR_11 == ((void*)0)) {
   FUNC_13(VAR_5->error, 0, "phar error: unable to create temporary file for the signature file");
   return VAR_0;
  }
  VAR_12 = FUNC_11(VAR_5->filefp);

  FUNC_10(VAR_5->filefp, 0, VAR_2);
  FUNC_8(VAR_5->filefp, VAR_11, VAR_12, ((void*)0));
  VAR_12 = FUNC_11(VAR_5->centralfp);
  FUNC_10(VAR_5->centralfp, 0, VAR_2);
  FUNC_8(VAR_5->centralfp, VAR_11, VAR_12, ((void*)0));
  if (VAR_6->s) {
   FUNC_12(VAR_11, FUNC_2(VAR_6->s), FUNC_1(VAR_6->s));
  }

  if (VAR_0 == FUNC_5(VAR_4, VAR_11, &VAR_8, &VAR_7, VAR_5->error)) {
   if (VAR_5->error) {
    char *VAR_13 = *(VAR_5->error);
    FUNC_13(VAR_5->error, 0, "phar error: unable to write signature to zip-based phar: %s", VAR_13);
    FUNC_4(VAR_13);
   }

   FUNC_7(VAR_11);
   return VAR_0;
  }

  VAR_10.filename = ".phar/signature.bin";
  VAR_10.filename_len = sizeof(".phar/signature.bin")-1;
  VAR_10.fp = FUNC_9();
  VAR_10.fp_type = VAR_1;
  VAR_10.is_modified = 1;
  if (VAR_10.fp == ((void*)0)) {
   FUNC_13(VAR_5->error, 0, "phar error: unable to create temporary file for signature");
   return VAR_0;
  }

  FUNC_0(VAR_9, VAR_4->sig_flags);
  FUNC_0(VAR_9 + 4, VAR_7);

  if (FUNC_3(8) != FUNC_12(VAR_10.fp, VAR_9, 8) || VAR_7 != FUNC_12(VAR_10.fp, VAR_8, VAR_7)) {
   FUNC_4(VAR_8);
   if (VAR_5->error) {
    FUNC_13(VAR_5->error, 0, "phar error: unable to write signature to zip-based phar %s", VAR_4->fname);
   }

   FUNC_7(VAR_11);
   return VAR_0;
  }

  FUNC_4(VAR_8);
  VAR_10.uncompressed_filesize = VAR_10.compressed_filesize = VAR_7 + 8;
  VAR_10.phar = VAR_4;

  FUNC_6(&VAR_10, (void *)VAR_5);
  FUNC_7(VAR_11);

  if (VAR_5->error && *(VAR_5->error)) {

   return VAR_0;
  }
 }
 return VAR_3;
}
