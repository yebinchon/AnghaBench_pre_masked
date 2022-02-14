
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_32__ {TYPE_3__* funcs; } ;
typedef TYPE_8__ zend_object_iterator ;
struct TYPE_33__ {int name; } ;
typedef TYPE_9__ zend_class_entry ;
typedef int zend_bool ;
struct _phar_t {size_t l; char* b; int ret; int fp; TYPE_12__* p; TYPE_9__* c; } ;
struct TYPE_29__ {int d_name; } ;
struct TYPE_30__ {TYPE_5__ entry; } ;
struct TYPE_31__ {TYPE_6__ dir; } ;
struct TYPE_21__ {char* file_name; TYPE_7__ u; int type; } ;
typedef TYPE_10__ spl_filesystem_object ;
typedef int php_stream ;
struct TYPE_22__ {TYPE_2__* internal_file; int * fp; } ;
typedef TYPE_11__ phar_entry_data ;
struct TYPE_23__ {TYPE_1__* archive; } ;
typedef TYPE_12__ phar_archive_object ;
struct TYPE_28__ {int offset; } ;
struct TYPE_27__ {int (* get_current_key ) (TYPE_8__*,int *) ;int * (* get_current_data ) (TYPE_8__*) ;} ;
struct TYPE_26__ {scalar_t__ fp_type; void* offset_abs; void* offset; size_t uncompressed_filesize; size_t compressed_filesize; int * fp; } ;
struct TYPE_25__ {TYPE_4__* handlers; } ;
struct TYPE_24__ {int fname_len; int fname; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;



 int const VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_20__* FUNC_3 (int *) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int *) ;
 int const FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int ,size_t) ;
 int VAR_9 ;
 char* FUNC_13 (char*,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (TYPE_11__*) ;
 TYPE_11__* FUNC_17 (int ,int ,char*,size_t,char*,int ,char**,int) ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (char*,size_t,int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int ,size_t*) ;
 int FUNC_22 (int *,int *) ;
 int * FUNC_23 (char*,char*,int,int **) ;
 void* FUNC_24 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_25 (TYPE_10__*,int *) ;
 size_t FUNC_26 (char**,int ,char*,char*,int ,int ) ;
 size_t FUNC_27 (char*) ;
 scalar_t__ FUNC_28 (char*,char*) ;
 int * FUNC_29 (TYPE_8__*) ;
 int FUNC_30 (TYPE_8__*,int *) ;
 int FUNC_31 (TYPE_8__*,int *) ;
 int * FUNC_32 (char*,int,int ) ;
 int FUNC_33 (int *,int ) ;
 int FUNC_34 (int ,int ,char*,...) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;

__attribute__((used)) static int FUNC_37(zend_object_iterator *VAR_13, void *VAR_14)
{
 zval *VAR_15;
 zend_bool VAR_16 = 1;
 struct _phar_t *VAR_17 = (struct _phar_t*) VAR_14;
 size_t VAR_18, VAR_19 = VAR_17->l;
 phar_entry_data *VAR_20;
 php_stream *VAR_21;
 size_t VAR_22;
 size_t VAR_23;
 char *VAR_24, *VAR_25 = ((void*)0), *VAR_26 = VAR_17->b, *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
 zend_string *VAR_29;
 char *VAR_30;
 zend_class_entry *VAR_31 = VAR_17->c;
 phar_archive_object *VAR_32 = VAR_17->p;

 VAR_15 = VAR_13->funcs->get_current_data(VAR_13);

 if (FUNC_0(VAR_9)) {
  return VAR_8;
 }

 if (!VAR_15) {

  FUNC_34(VAR_12, 0, "Iterator %s returned no value", FUNC_1(VAR_31->name));
  return VAR_8;
 }

 switch (FUNC_9(VAR_15)) {
  case 131:
   break;
  case 132:
   FUNC_22(VAR_21, VAR_15);

   if (!VAR_21) {
    FUNC_34(VAR_10, 0, "Iterator %s returned an invalid stream handle", FUNC_1(VAR_31->name));
    return VAR_8;
   }

   if (VAR_13->funcs->get_current_key) {
    zval VAR_33;
    VAR_13->funcs->get_current_key(VAR_13, &VAR_33);

    if (FUNC_0(VAR_9)) {
     return VAR_8;
    }

    if (FUNC_8(VAR_33) != 131) {
     FUNC_35(&VAR_33);
     FUNC_34(VAR_12, 0, "Iterator %s returned an invalid key (must return a string)", FUNC_1(VAR_31->name));
     return VAR_8;
    }

    VAR_18 = FUNC_4(VAR_33);
    VAR_30 = FUNC_12(FUNC_6(VAR_33), VAR_18);

    VAR_27 = VAR_30;
    FUNC_36(&VAR_33);
   } else {
    FUNC_34(VAR_12, 0, "Iterator %s returned an invalid key (must return a string)", FUNC_1(VAR_31->name));
    return VAR_8;
   }

   VAR_16 = 0;
   VAR_29 = FUNC_32("[stream]", sizeof("[stream]") - 1, 0);
   goto after_open_fp;
  case 133:
   if (FUNC_14(FUNC_2(VAR_15), VAR_11)) {
    char *VAR_34 = ((void*)0);
    zval VAR_35;
    spl_filesystem_object *VAR_36 = (spl_filesystem_object*)((char*)FUNC_3(VAR_15) - FUNC_3(VAR_15)->handlers->offset);

    if (!VAR_19) {
     FUNC_34(VAR_10, 0, "Iterator %s returns an SplFileInfo object, so base directory must be specified", FUNC_1(VAR_31->name));
     return VAR_8;
    }

    switch (VAR_36->type) {
     case 130:
      VAR_34 = FUNC_25(VAR_36, ((void*)0));
      VAR_22 = FUNC_26(&VAR_24, 0, "%s%c%s", VAR_34, VAR_0, VAR_36->u.dir.entry.d_name);
      FUNC_19(VAR_24, VAR_22, VAR_1, &VAR_35);

      if (FUNC_8(VAR_35) == VAR_2) {

       FUNC_11(VAR_24);
       return VAR_7;
      }

      VAR_34 = FUNC_13(VAR_24, ((void*)0));
      FUNC_11(VAR_24);

      if (VAR_34) {
       VAR_24 = VAR_34;
       VAR_22 = FUNC_27(VAR_24);
      } else {
       FUNC_34(VAR_12, 0, "Could not resolve file path");
       return VAR_8;
      }

      VAR_27 = VAR_24;
      goto phar_spl_fileinfo;
     case 128:
     case 129:
      VAR_24 = FUNC_13(VAR_36->file_name, ((void*)0));
      if (!VAR_24) {
       FUNC_34(VAR_12, 0, "Could not resolve file path");
       return VAR_8;
      }

      VAR_22 = FUNC_27(VAR_24);
      VAR_27 = VAR_24;
      goto phar_spl_fileinfo;
    }
   }

  default:
   FUNC_34(VAR_12, 0, "Iterator %s returned an invalid value (must return a string)", FUNC_1(VAR_31->name));
   return VAR_8;
 }

 VAR_24 = FUNC_7(VAR_15);
 VAR_22 = FUNC_5(VAR_15);

phar_spl_fileinfo:
 if (VAR_19) {
  VAR_28 = FUNC_13(VAR_26, ((void*)0));
  if (!VAR_28) {
   FUNC_34(VAR_12, 0, "Could not resolve file path");
   if (VAR_27) {
    FUNC_11(VAR_27);
   }
   return VAR_8;
  }

  VAR_26 = VAR_28;
  VAR_19 = FUNC_27(VAR_26);

  if (FUNC_28(VAR_24, VAR_26)) {
   VAR_18 = VAR_22 - VAR_19;

   if (VAR_18 <= 0) {
    if (VAR_27) {
     FUNC_11(VAR_27);
     FUNC_11(VAR_28);
    }
    return VAR_7;
   }

   VAR_30 = VAR_24 + VAR_19;

   if (*VAR_30 == '/' || *VAR_30 == '\\') {
    VAR_30++;
    VAR_18--;
   }

  } else {
   FUNC_34(VAR_12, 0, "Iterator %s returned a path \"%s\" that is not in the base directory \"%s\"", FUNC_1(VAR_31->name), VAR_24, VAR_26);

   if (VAR_27) {
    FUNC_11(VAR_27);
    FUNC_11(VAR_28);
   }

   return VAR_8;
  }
 } else {
  if (VAR_13->funcs->get_current_key) {
   zval VAR_37;
   VAR_13->funcs->get_current_key(VAR_13, &VAR_37);

   if (FUNC_0(VAR_9)) {
    return VAR_8;
   }

   if (FUNC_8(VAR_37) != 131) {
    FUNC_35(&VAR_37);
    FUNC_34(VAR_12, 0, "Iterator %s returned an invalid key (must return a string)", FUNC_1(VAR_31->name));
    return VAR_8;
   }

   VAR_18 = FUNC_4(VAR_37);
   VAR_30 = FUNC_12(FUNC_6(VAR_37), VAR_18);

   VAR_27 = VAR_30;
   FUNC_36(&VAR_37);
  } else {
   FUNC_34(VAR_12, 0, "Iterator %s returned an invalid key (must return a string)", FUNC_1(VAR_31->name));
   return VAR_8;
  }
 }

 if (FUNC_18(VAR_24)) {
  FUNC_34(VAR_12, 0, "Iterator %s returned a path \"%s\" that open_basedir prevents opening", FUNC_1(VAR_31->name), VAR_24);

  if (VAR_27) {
   FUNC_11(VAR_27);
  }

  if (VAR_28) {
   FUNC_11(VAR_28);
  }

  return VAR_8;
 }


 VAR_21 = FUNC_23(VAR_24, "rb", VAR_6|0, &VAR_29);

 if (!VAR_21) {
  FUNC_34(VAR_12, 0, "Iterator %s returned a file that could not be opened \"%s\"", FUNC_1(VAR_31->name), VAR_24);

  if (VAR_27) {
   FUNC_11(VAR_27);
  }

  if (VAR_28) {
   FUNC_11(VAR_28);
  }

  return VAR_8;
 }
after_open_fp:
 if (VAR_18 >= sizeof(".phar")-1 && !FUNC_15(VAR_30, ".phar", sizeof(".phar")-1)) {

  if (VAR_27) {
   FUNC_11(VAR_27);
  }

  if (VAR_28) {
   FUNC_11(VAR_28);
  }

  if (VAR_29) {
   FUNC_33(VAR_29, 0);
  }

  if (VAR_16) {
   FUNC_20(VAR_21);
  }

  return VAR_7;
 }

 if (!(VAR_20 = FUNC_17(VAR_32->archive->fname, VAR_32->archive->fname_len, VAR_30, VAR_18, "w+b", 0, &VAR_25, 1))) {
  FUNC_34(VAR_10, 0, "Entry %s cannot be created: %s", VAR_30, VAR_25);
  FUNC_11(VAR_25);

  if (VAR_27) {
   FUNC_11(VAR_27);
  }

  if (VAR_29) {
   FUNC_33(VAR_29, 0);
  }

  if (VAR_28) {
   FUNC_11(VAR_28);
  }

  if (VAR_16) {
   FUNC_20(VAR_21);
  }

  return VAR_8;

 } else {
  if (VAR_25) {
   FUNC_11(VAR_25);
  }

  if (VAR_20->internal_file->fp_type == VAR_3) {
   FUNC_20(VAR_20->internal_file->fp);
  }

  VAR_20->internal_file->fp = ((void*)0);
  VAR_20->internal_file->fp_type = VAR_4;
  VAR_20->internal_file->offset_abs = VAR_20->internal_file->offset = FUNC_24(VAR_17->fp);
  VAR_20->fp = ((void*)0);
  FUNC_21(VAR_21, VAR_17->fp, VAR_5, &VAR_23);
  VAR_20->internal_file->uncompressed_filesize = VAR_20->internal_file->compressed_filesize =
   FUNC_24(VAR_17->fp) - VAR_20->internal_file->offset;
 }

 if (VAR_16) {
  FUNC_20(VAR_21);
 }

 FUNC_10(VAR_17->ret, VAR_30, VAR_29);

 if (VAR_27) {
  FUNC_11(VAR_27);
 }

 if (VAR_28) {
  FUNC_11(VAR_28);
 }

 VAR_20->internal_file->compressed_filesize = VAR_20->internal_file->uncompressed_filesize = VAR_23;
 FUNC_16(VAR_20);

 return VAR_7;
}
