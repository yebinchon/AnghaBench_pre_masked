
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int zval ;
typedef int zend_error_handling ;
struct TYPE_27__ {TYPE_10__* constructor; } ;
typedef TYPE_6__ zend_class_entry ;
typedef int zend_bool ;
struct TYPE_25__ {char* open_mode; int open_mode_len; int zcontext; } ;
struct TYPE_22__ {int * d_name; } ;
struct TYPE_23__ {TYPE_1__ entry; } ;
struct TYPE_26__ {TYPE_4__ file; TYPE_2__ dir; } ;
struct TYPE_28__ {int type; char* file_name; int file_name_len; char* _path; int _path_len; TYPE_5__ u; int std; TYPE_6__* file_class; TYPE_6__* info_class; } ;
typedef TYPE_7__ spl_filesystem_object ;
struct TYPE_24__ {int scope; } ;
struct TYPE_21__ {TYPE_3__ common; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_7__*,int ,int ) ;
 TYPE_7__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_7__*) ;
 void* FUNC_9 (TYPE_7__*,int*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int ,TYPE_6__*,TYPE_10__**,char*,int *,int *) ;
 int FUNC_12 (int ,TYPE_6__*,TYPE_10__**,char*,int *,int *,int *) ;
 int FUNC_13 (int,char*,char**,int*,int *,int *) ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,char*) ;
 int FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static spl_filesystem_object *FUNC_19(int VAR_6, spl_filesystem_object *VAR_7, int VAR_8, zend_class_entry *VAR_9, zval *VAR_10)
{
 spl_filesystem_object *VAR_11;
 zend_bool VAR_12 = 0;
 zval VAR_13, VAR_14;
 zend_error_handling VAR_15;

 FUNC_14(VAR_0, VAR_3, &VAR_15);

 switch (VAR_7->type) {
  case 128:
  case 129:
   break;
  case 130:
   if (!VAR_7->u.dir.entry.d_name[0]) {
    FUNC_16(VAR_3, 0, "Could not open file");
    FUNC_15(&VAR_15);
    return ((void*)0);
   }
 }

 switch (VAR_8) {
  case 128:
   VAR_9 = VAR_9 ? VAR_9 : VAR_7->info_class;

   if (FUNC_0(FUNC_17(VAR_9) != VAR_2)) {
    break;
   }

   VAR_11 = FUNC_7(FUNC_10(VAR_9));
   FUNC_2(VAR_10, &VAR_11->std);

   FUNC_8(VAR_7);
   if (VAR_9->constructor->common.scope != VAR_4) {
    FUNC_3(&VAR_13, VAR_7->file_name, VAR_7->file_name_len);
    FUNC_11(FUNC_4(VAR_10), VAR_9, &VAR_9->constructor, "__construct", ((void*)0), &VAR_13);
    FUNC_18(&VAR_13);
   } else {
    VAR_11->file_name = FUNC_5(VAR_7->file_name, VAR_7->file_name_len);
    VAR_11->file_name_len = VAR_7->file_name_len;
    VAR_11->_path = FUNC_9(VAR_7, &VAR_11->_path_len);
    VAR_11->_path = FUNC_5(VAR_11->_path, VAR_11->_path_len);
   }
   break;
  case 129:
   VAR_9 = VAR_9 ? VAR_9 : VAR_7->file_class;

   if (FUNC_0(FUNC_17(VAR_9) != VAR_2)) {
    break;
   }

   VAR_11 = FUNC_7(FUNC_10(VAR_9));

   FUNC_2(VAR_10, &VAR_11->std);

   FUNC_8(VAR_7);

   if (VAR_9->constructor->common.scope != VAR_5) {
    FUNC_3(&VAR_13, VAR_7->file_name, VAR_7->file_name_len);
    FUNC_3(&VAR_14, "r", 1);
    FUNC_12(FUNC_4(VAR_10), VAR_9, &VAR_9->constructor, "__construct", ((void*)0), &VAR_13, &VAR_14);
    FUNC_18(&VAR_13);
    FUNC_18(&VAR_14);
   } else {
    VAR_11->file_name = VAR_7->file_name;
    VAR_11->file_name_len = VAR_7->file_name_len;
    VAR_11->_path = FUNC_9(VAR_7, &VAR_11->_path_len);
    VAR_11->_path = FUNC_5(VAR_11->_path, VAR_11->_path_len);

    VAR_11->u.file.open_mode = "r";
    VAR_11->u.file.open_mode_len = 1;

    if (VAR_6 && FUNC_13(VAR_6, "|sbr",
       &VAR_11->u.file.open_mode, &VAR_11->u.file.open_mode_len,
       &VAR_12, &VAR_11->u.file.zcontext) == VAR_1) {
     FUNC_15(&VAR_15);
     VAR_11->u.file.open_mode = ((void*)0);
     VAR_11->file_name = ((void*)0);
     FUNC_18(VAR_10);
     FUNC_1(VAR_10);
     return ((void*)0);
    }

    if (FUNC_6(VAR_11, VAR_12, 0) == VAR_1) {
     FUNC_15(&VAR_15);
     FUNC_18(VAR_10);
     FUNC_1(VAR_10);
     return ((void*)0);
    }
   }
   break;
  case 130:
   FUNC_15(&VAR_15);
   FUNC_16(VAR_3, 0, "Operation not supported");
   return ((void*)0);
 }
 FUNC_15(&VAR_15);
 return ((void*)0);
}
