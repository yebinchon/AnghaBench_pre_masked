
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_10__ {char* open_mode; int open_mode_len; char delimiter; char enclosure; } ;
struct TYPE_9__ {char* sub_path; int sub_path_len; int dirp; } ;
struct TYPE_11__ {TYPE_2__ file; TYPE_1__ dir; } ;
struct TYPE_13__ {int properties; } ;
struct TYPE_12__ {char* file_name; size_t file_name_len; scalar_t__ type; char* _path; int _path_len; TYPE_3__ u; TYPE_8__ std; } ;
typedef TYPE_4__ spl_filesystem_object ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_8__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,size_t*) ;
 char* FUNC_7 (TYPE_4__*,size_t*) ;
 int * FUNC_8 (int ,char*,int) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,int *) ;

__attribute__((used)) static HashTable *FUNC_12(zend_object *VAR_7, int *VAR_8)
{
 spl_filesystem_object *VAR_9 = FUNC_5(VAR_7);
 zval VAR_10;
 HashTable *VAR_11;
 zend_string *VAR_12;
 char *VAR_13;
 size_t VAR_14;
 char VAR_15[2];

 *VAR_8 = 1;

 if (!VAR_9->std.properties) {
  FUNC_4(&VAR_9->std);
 }

 VAR_11 = FUNC_9(VAR_9->std.properties);

 VAR_12 = FUNC_8(VAR_5, "pathName", sizeof("pathName")-1);
 VAR_13 = FUNC_7(VAR_9, &VAR_14);
 FUNC_2(&VAR_10, VAR_13 ? VAR_13 : "", VAR_14);
 FUNC_11(VAR_11, VAR_12, &VAR_10);
 FUNC_10(VAR_12, 0);

 if (VAR_9->file_name) {
  VAR_12 = FUNC_8(VAR_5, "fileName", sizeof("fileName")-1);
  FUNC_6(VAR_9, &VAR_14);

  if (VAR_14 && VAR_14 < VAR_9->file_name_len) {
   FUNC_2(&VAR_10, VAR_9->file_name + VAR_14 + 1, VAR_9->file_name_len - (VAR_14 + 1));
  } else {
   FUNC_2(&VAR_10, VAR_9->file_name, VAR_9->file_name_len);
  }
  FUNC_11(VAR_11, VAR_12, &VAR_10);
  FUNC_10(VAR_12, 0);
 }
 if (VAR_9->type == VAR_0) {
  VAR_12 = FUNC_8(VAR_4, "subPathName", sizeof("subPathName")-1);
  if (VAR_9->u.dir.sub_path) {
   FUNC_2(&VAR_10, VAR_9->u.dir.sub_path, VAR_9->u.dir.sub_path_len);
  } else {
   FUNC_0(&VAR_10);
  }
  FUNC_11(VAR_11, VAR_12, &VAR_10);
  FUNC_10(VAR_12, 0);
 }
 if (VAR_9->type == VAR_1) {
  VAR_12 = FUNC_8(VAR_6, "openMode", sizeof("openMode")-1);
  FUNC_2(&VAR_10, VAR_9->u.file.open_mode, VAR_9->u.file.open_mode_len);
  FUNC_11(VAR_11, VAR_12, &VAR_10);
  FUNC_10(VAR_12, 0);
  VAR_15[1] = '\0';
  VAR_15[0] = VAR_9->u.file.delimiter;
  VAR_12 = FUNC_8(VAR_6, "delimiter", sizeof("delimiter")-1);
  FUNC_2(&VAR_10, VAR_15, 1);
  FUNC_11(VAR_11, VAR_12, &VAR_10);
  FUNC_10(VAR_12, 0);
  VAR_15[0] = VAR_9->u.file.enclosure;
  VAR_12 = FUNC_8(VAR_6, "enclosure", sizeof("enclosure")-1);
  FUNC_2(&VAR_10, VAR_15, 1);
  FUNC_11(VAR_11, VAR_12, &VAR_10);
  FUNC_10(VAR_12, 0);
 }

 return VAR_11;
}
