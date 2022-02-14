
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_6__ {char* current_line; scalar_t__ max_line_len; size_t current_line_len; int current_line_num; int stream; int current_zval; } ;
struct TYPE_7__ {TYPE_1__ file; } ;
struct TYPE_8__ {TYPE_2__ u; int flags; int file_name; } ;
typedef TYPE_3__ spl_filesystem_object ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (int ,char*,scalar_t__,size_t*) ;
 char* FUNC_6 (scalar_t__,int,int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_3__*) ;
 size_t FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_10(spl_filesystem_object *VAR_4, int VAR_5)
{
 char *VAR_6;
 size_t VAR_7 = 0;
 zend_long VAR_8 = (VAR_4->u.file.current_line || !FUNC_1(VAR_4->u.file.current_zval)) ? 1 : 0;

 FUNC_7(VAR_4);

 if (FUNC_4(VAR_4->u.file.stream)) {
  if (!VAR_5) {
   FUNC_9(VAR_3, 0, "Cannot read from file %s", VAR_4->file_name);
  }
  return VAR_0;
 }

 if (VAR_4->u.file.max_line_len > 0) {
  VAR_6 = FUNC_6((VAR_4->u.file.max_line_len + 1), sizeof(char), 0);
  if (FUNC_5(VAR_4->u.file.stream, VAR_6, VAR_4->u.file.max_line_len + 1, &VAR_7) == ((void*)0)) {
   FUNC_2(VAR_6);
   VAR_6 = ((void*)0);
  } else {
   VAR_6[VAR_7] = '\0';
  }
 } else {
  VAR_6 = FUNC_5(VAR_4->u.file.stream, ((void*)0), 0, &VAR_7);
 }

 if (!VAR_6) {
  VAR_4->u.file.current_line = FUNC_3("");
  VAR_4->u.file.current_line_len = 0;
 } else {
  if (FUNC_0(VAR_4->flags, VAR_1)) {
   VAR_7 = FUNC_8(VAR_6, "\r\n");
   VAR_6[VAR_7] = '\0';
  }

  VAR_4->u.file.current_line = VAR_6;
  VAR_4->u.file.current_line_len = VAR_7;
 }
 VAR_4->u.file.current_line_num += VAR_8;

 return VAR_2;
}
