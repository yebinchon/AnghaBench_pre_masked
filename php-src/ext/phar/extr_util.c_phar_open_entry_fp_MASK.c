
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
typedef int php_stream_filter ;
struct TYPE_24__ {int writefilters; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_25__ {scalar_t__ fp_type; int old_flags; int flags; int crc32; int offset; int filename; scalar_t__ uncompressed_filesize; int compressed_filesize; int tmp; scalar_t__ fp; scalar_t__ is_modified; scalar_t__ link; TYPE_4__* phar; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_26__ {TYPE_1__* fp; int zero; TYPE_4__* phar; TYPE_2__* internal_file; } ;
typedef TYPE_3__ phar_entry_data ;
struct TYPE_27__ {int fname; } ;
typedef TYPE_4__ phar_archive_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,char**,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,int ,int *) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int ,char*,int,int *) ;
 int FUNC_18 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (char**,int,char*,int ,...) ;

int FUNC_21(phar_entry_info *VAR_9, char **VAR_10, int VAR_11)
{
 php_stream_filter *VAR_12;
 phar_archive_data *VAR_13 = VAR_9->phar;
 char *VAR_14;
 zend_off_t VAR_15;
 php_stream *VAR_16;
 phar_entry_data VAR_17;

 if (VAR_11 && VAR_9->link) {
  phar_entry_info *VAR_18 = FUNC_4(VAR_9);
  if (VAR_18 && VAR_18 != VAR_9) {
   return FUNC_21(VAR_18, VAR_10, 1);
  }
 }

 if (VAR_9->is_modified) {
  return VAR_8;
 }

 if (VAR_9->fp_type == VAR_3) {
  if (!VAR_9->fp) {
   VAR_9->fp = FUNC_17(VAR_9->tmp, "rb", VAR_7|0, ((void*)0));
  }
  return VAR_8;
 }

 if (VAR_9->fp_type != VAR_2) {

  return VAR_8;
 }

 if (!FUNC_5(VAR_13)) {
  if (VAR_0 == FUNC_6(VAR_13)) {
   FUNC_20(VAR_10, 4096, "phar error: Cannot open phar archive \"%s\" for reading", VAR_13->fname);
   return VAR_0;
  }
 }

 if ((VAR_9->old_flags && !(VAR_9->old_flags & VAR_1)) || !(VAR_9->flags & VAR_1)) {
  VAR_17.internal_file = VAR_9;
  VAR_17.phar = VAR_13;
  VAR_17.zero = VAR_9->offset;
  VAR_17.fp = FUNC_5(VAR_13);
  if (VAR_0 == FUNC_7(&VAR_17, VAR_9->crc32, VAR_10, 1)) {
   return VAR_0;
  }
  return VAR_8;
 }

 if (!FUNC_2(VAR_9)) {
  FUNC_8(VAR_9, FUNC_16());
  if (!FUNC_2(VAR_9)) {
   FUNC_20(VAR_10, 4096, "phar error: Cannot open temporary file for decompressing phar archive \"%s\" file \"%s\"", VAR_13->fname, VAR_9->filename);
   return VAR_0;
  }
 }

 VAR_17.internal_file = VAR_9;
 VAR_17.phar = VAR_13;
 VAR_17.zero = VAR_9->offset;
 VAR_17.fp = FUNC_5(VAR_13);
 if (VAR_0 == FUNC_7(&VAR_17, VAR_9->crc32, VAR_10, 1)) {
  return VAR_0;
 }

 VAR_16 = FUNC_2(VAR_9);

 if ((VAR_14 = FUNC_0(VAR_9, 0)) != ((void*)0)) {
  VAR_12 = FUNC_12(VAR_14, ((void*)0), 0);
 } else {
  VAR_12 = ((void*)0);
 }

 if (!VAR_12) {
  FUNC_20(VAR_10, 4096, "phar error: unable to read phar \"%s\" (cannot create %s filter while decompressing file \"%s\")", VAR_13->fname, FUNC_0(VAR_9, 1), VAR_9->filename);
  return VAR_0;
 }



 FUNC_18(VAR_16, 0, VAR_5);
 VAR_15 = FUNC_19(VAR_16);
 FUNC_11(&VAR_16->writefilters, VAR_12);
 FUNC_18(FUNC_1(VAR_9), FUNC_3(VAR_9), VAR_6);

 if (VAR_9->uncompressed_filesize) {
  if (VAR_8 != FUNC_10(FUNC_1(VAR_9), VAR_16, VAR_9->compressed_filesize, ((void*)0))) {
   FUNC_20(VAR_10, 4096, "phar error: internal corruption of phar \"%s\" (actual filesize mismatch on file \"%s\")", VAR_13->fname, VAR_9->filename);
   FUNC_14(VAR_12, 1);
   return VAR_0;
  }
 }

 FUNC_13(VAR_12, 1);
 FUNC_15(VAR_16);
 FUNC_14(VAR_12, 1);

 if (FUNC_19(VAR_16) - VAR_15 != (zend_off_t) VAR_9->uncompressed_filesize) {
  FUNC_20(VAR_10, 4096, "phar error: internal corruption of phar \"%s\" (actual filesize mismatch on file \"%s\")", VAR_13->fname, VAR_9->filename);
  return VAR_0;
 }

 VAR_9->old_flags = VAR_9->flags;


 FUNC_9(VAR_9, VAR_4, VAR_15);
 VAR_17.zero = VAR_9->offset;
 VAR_17.fp = VAR_16;
 if (VAR_0 == FUNC_7(&VAR_17, VAR_9->crc32, VAR_10, 0)) {
  return VAR_0;
 }
 return VAR_8;
}
