
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ fp_type; char tar_type; TYPE_1__* phar; scalar_t__ fp_refcount; TYPE_3__* link; scalar_t__ is_tar; int is_zip; scalar_t__ is_dir; scalar_t__ is_deleted; scalar_t__ is_modified; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_24__ {int for_write; void* zero; int * fp; scalar_t__ is_tar; int is_zip; TYPE_2__* internal_file; TYPE_4__* phar; scalar_t__ position; } ;
typedef TYPE_3__ phar_entry_data ;
struct TYPE_25__ {scalar_t__ is_persistent; scalar_t__ is_data; } ;
typedef TYPE_4__ phar_archive_data ;
struct TYPE_22__ {int refcount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,char**) ;
 int FUNC_5 (TYPE_4__**,char*,size_t,int *,int ,char**) ;
 int * FUNC_6 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,char*,size_t,char**,int) ;
 TYPE_2__* FUNC_8 (TYPE_4__*,char*,size_t,char,char**,int) ;
 void* FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,char**,int) ;
 int FUNC_12 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_2__*,char**) ;
 int VAR_5 ;
 int FUNC_14 (char**,int,char*,char*,...) ;

int FUNC_15(phar_entry_data **VAR_6, char *VAR_7, size_t VAR_8, char *VAR_9, size_t VAR_10, const char *VAR_11, char VAR_12, char **VAR_13, int VAR_14)
{
 phar_archive_data *VAR_15;
 phar_entry_info *VAR_16;
 int VAR_17 = VAR_11[0] != 'r' || VAR_11[1] == '+';
 int VAR_18 = VAR_11[0] == 'a';
 int VAR_19 = VAR_11[0] != 'r';
 int VAR_20 = VAR_11[0] == 'w';

 if (!VAR_6) {
  return VAR_0;
 }

 *VAR_6 = ((void*)0);

 if (VAR_13) {
  *VAR_13 = ((void*)0);
 }

 if (VAR_0 == FUNC_5(&VAR_15, VAR_7, VAR_8, ((void*)0), 0, VAR_13)) {
  return VAR_0;
 }

 if (VAR_17 && FUNC_0(VAR_5) && !VAR_15->is_data) {
  if (VAR_13) {
   FUNC_14(VAR_13, 4096, "phar error: file \"%s\" in phar \"%s\" cannot be opened for writing, disabled by ini setting", VAR_9, VAR_7);
  }
  return VAR_0;
 }

 if (!VAR_10) {
  if (VAR_13) {
   FUNC_14(VAR_13, 4096, "phar error: file \"\" in phar \"%s\" cannot be empty", VAR_7);
  }
  return VAR_0;
 }
really_get_entry:
 if (VAR_12) {
  if ((VAR_16 = FUNC_8(VAR_15, VAR_9, VAR_10, VAR_12, VAR_19 && !FUNC_0(VAR_5) && !VAR_15->is_data ? ((void*)0) : VAR_13, VAR_14)) == ((void*)0)) {
   if (VAR_19 && (!FUNC_0(VAR_5) || VAR_15->is_data)) {
    return VAR_3;
   }
   return VAR_0;
  }
 } else {
  if ((VAR_16 = FUNC_7(VAR_15, VAR_9, VAR_10, VAR_19 && !FUNC_0(VAR_5) && !VAR_15->is_data ? ((void*)0) : VAR_13, VAR_14)) == ((void*)0)) {
   if (VAR_19 && (!FUNC_0(VAR_5) || VAR_15->is_data)) {
    return VAR_3;
   }
   return VAR_0;
  }
 }

 if (VAR_17 && VAR_15->is_persistent) {
  if (VAR_0 == FUNC_3(&VAR_15)) {
   if (VAR_13) {
    FUNC_14(VAR_13, 4096, "phar error: file \"%s\" in phar \"%s\" cannot be opened for writing, could not make cached phar writeable", VAR_9, VAR_7);
   }
   return VAR_0;
  } else {
   goto really_get_entry;
  }
 }

 if (VAR_16->is_modified && !VAR_17) {
  if (VAR_13) {
   FUNC_14(VAR_13, 4096, "phar error: file \"%s\" in phar \"%s\" cannot be opened for reading, writable file pointers are open", VAR_9, VAR_7);
  }
  return VAR_0;
 }

 if (VAR_16->fp_refcount && VAR_17) {
  if (VAR_13) {
   FUNC_14(VAR_13, 4096, "phar error: file \"%s\" in phar \"%s\" cannot be opened for writing, readable file pointers are open", VAR_9, VAR_7);
  }
  return VAR_0;
 }

 if (VAR_16->is_deleted) {
  if (!VAR_19) {
   return VAR_0;
  }
  VAR_16->is_deleted = 0;
 }

 if (VAR_16->is_dir) {
  *VAR_6 = (phar_entry_data *) FUNC_2(sizeof(phar_entry_data));
  (*VAR_6)->position = 0;
  (*VAR_6)->fp = ((void*)0);
  (*VAR_6)->phar = VAR_15;
  (*VAR_6)->for_write = VAR_17;
  (*VAR_6)->internal_file = VAR_16;
  (*VAR_6)->is_zip = VAR_16->is_zip;
  (*VAR_6)->is_tar = VAR_16->is_tar;

  if (!VAR_15->is_persistent) {
   ++(VAR_16->phar->refcount);
   ++(VAR_16->fp_refcount);
  }

  return VAR_3;
 }

 if (VAR_16->fp_type == VAR_1) {
  if (VAR_20) {
   if (VAR_0 == FUNC_4(VAR_15, VAR_16, VAR_13)) {
    return VAR_0;
   }
  } else if (VAR_18) {
   FUNC_12(VAR_16, 0, VAR_2, 0, 0);
  }
 } else {
  if (VAR_17) {
   if (VAR_16->link) {
    FUNC_1(VAR_16->link);
    VAR_16->link = ((void*)0);
    VAR_16->tar_type = (VAR_16->is_tar ? VAR_4 : '\0');
   }

   if (VAR_20) {
    if (VAR_0 == FUNC_4(VAR_15, VAR_16, VAR_13)) {
     return VAR_0;
    }
   } else {
    if (VAR_0 == FUNC_13(VAR_16, VAR_13)) {
     return VAR_0;
    }
   }
  } else {
   if (VAR_0 == FUNC_11(VAR_16, VAR_13, 1)) {
    return VAR_0;
   }
  }
 }

 *VAR_6 = (phar_entry_data *) FUNC_2(sizeof(phar_entry_data));
 (*VAR_6)->position = 0;
 (*VAR_6)->phar = VAR_15;
 (*VAR_6)->for_write = VAR_17;
 (*VAR_6)->internal_file = VAR_16;
 (*VAR_6)->is_zip = VAR_16->is_zip;
 (*VAR_6)->is_tar = VAR_16->is_tar;
 (*VAR_6)->fp = FUNC_6(VAR_16, 1);
 if (VAR_16->link) {
  phar_entry_info *VAR_21 = FUNC_10(VAR_16);
  if(!VAR_21) {
   FUNC_1(*VAR_6);
   return VAR_0;
  }
  (*VAR_6)->zero = FUNC_9(VAR_21);
 } else {
  (*VAR_6)->zero = FUNC_9(VAR_16);
 }

 if (!VAR_15->is_persistent) {
  ++(VAR_16->fp_refcount);
  ++(VAR_16->phar->refcount);
 }

 return VAR_3;
}
