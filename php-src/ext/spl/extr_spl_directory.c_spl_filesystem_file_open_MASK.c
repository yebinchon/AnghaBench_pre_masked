
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_11__ {TYPE_3__* ce; } ;
struct TYPE_8__ {char* open_mode; int open_mode_len; char delimiter; char enclosure; unsigned char escape; int func_getCurr; TYPE_7__* stream; int zresource; int context; int zcontext; } ;
struct TYPE_9__ {TYPE_1__ file; } ;
struct TYPE_12__ {char* file_name; int file_name_len; TYPE_4__ std; TYPE_2__ u; void* orig_path; int type; } ;
typedef TYPE_5__ spl_filesystem_object ;
struct TYPE_13__ {char* orig_path; int res; } ;
struct TYPE_10__ {int function_table; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (char*,int) ;
 int VAR_7 ;
 int FUNC_5 (char*,int,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 TYPE_7__* FUNC_7 (char*,char*,int,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_11(spl_filesystem_object *VAR_10, int VAR_11, int VAR_12)
{
 zval VAR_13;

 VAR_10->type = VAR_4;

 FUNC_5(VAR_10->file_name, VAR_10->file_name_len, VAR_1, &VAR_13);
 if (FUNC_3(VAR_13) == VAR_2) {
  VAR_10->u.file.open_mode = ((void*)0);
  VAR_10->file_name = ((void*)0);
  FUNC_10(VAR_8, 0, "Cannot use SplFileObject with directories");
  return VAR_0;
 }

 VAR_10->u.file.context = FUNC_6(VAR_10->u.file.zcontext, 0);
 VAR_10->u.file.stream = FUNC_7(VAR_10->file_name, VAR_10->u.file.open_mode, (VAR_11 ? VAR_6 : 0) | VAR_3, ((void*)0), VAR_10->u.file.context);

 if (!VAR_10->file_name_len || !VAR_10->u.file.stream) {
  if (!FUNC_0(VAR_7)) {
   FUNC_10(VAR_9, 0, "Cannot open file '%s'", VAR_10->file_name_len ? VAR_10->file_name : "");
  }
  VAR_10->file_name = ((void*)0);
  VAR_10->u.file.open_mode = ((void*)0);
  return VAR_0;
 }
 if (VAR_10->file_name_len > 1 && FUNC_1(VAR_10->file_name, VAR_10->file_name_len-1)) {
  VAR_10->file_name_len--;
 }

 VAR_10->orig_path = FUNC_4(VAR_10->u.file.stream->orig_path, FUNC_8(VAR_10->u.file.stream->orig_path));

 VAR_10->file_name = FUNC_4(VAR_10->file_name, VAR_10->file_name_len);
 VAR_10->u.file.open_mode = FUNC_4(VAR_10->u.file.open_mode, VAR_10->u.file.open_mode_len);


 FUNC_2(&VAR_10->u.file.zresource, VAR_10->u.file.stream->res);




 VAR_10->u.file.delimiter = ',';
 VAR_10->u.file.enclosure = '"';
 VAR_10->u.file.escape = (unsigned char) '\\';

 VAR_10->u.file.func_getCurr = FUNC_9(&VAR_10->std.ce->function_table, "getcurrentline", sizeof("getcurrentline") - 1);

 return VAR_5;
}
