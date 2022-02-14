
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_off_t ;
typedef int php_stream ;
struct TYPE_10__ {scalar_t__ fp_type; int offset; int * fp; int * cfp; int filename; TYPE_1__* phar; int uncompressed_filesize; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_9__ {int fname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char**,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,char*,int ,int ,...) ;

__attribute__((used)) static int FUNC_8(phar_entry_info *VAR_6, php_stream *VAR_7)
{
 char *VAR_8;
 zend_off_t VAR_9;
 phar_entry_info *VAR_10;

 if (VAR_0 == FUNC_3(VAR_6, &VAR_8, 1)) {
  if (VAR_8) {
   FUNC_7(VAR_5, 0,
    "Cannot convert phar archive \"%s\", unable to open entry \"%s\" contents: %s", VAR_6->phar->fname, VAR_6->filename, VAR_8);
   FUNC_0(VAR_8);
  } else {
   FUNC_7(VAR_5, 0,
    "Cannot convert phar archive \"%s\", unable to open entry \"%s\" contents", VAR_6->phar->fname, VAR_6->filename);
  }
  return VAR_0;
 }


 FUNC_4(VAR_6, 0, VAR_3, 0, 1);
 VAR_9 = FUNC_6(VAR_7);
 VAR_10 = FUNC_2(VAR_6);

 if (!VAR_10) {
  VAR_10 = VAR_6;
 }

 if (VAR_4 != FUNC_5(FUNC_1(VAR_10, 0), VAR_7, VAR_10->uncompressed_filesize, ((void*)0))) {
  FUNC_7(VAR_5, 0,
   "Cannot convert phar archive \"%s\", unable to copy entry \"%s\" contents", VAR_6->phar->fname, VAR_6->filename);
  return VAR_0;
 }

 if (VAR_6->fp_type == VAR_2) {

  VAR_6->cfp = VAR_6->fp;
  VAR_6->fp = ((void*)0);
 }


 VAR_6->fp_type = VAR_1;
 VAR_6->offset = VAR_9;
 return VAR_4;
}
