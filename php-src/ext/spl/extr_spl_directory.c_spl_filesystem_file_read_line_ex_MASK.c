
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
typedef int zend_execute_data ;
struct TYPE_11__ {int current_zval; int current_line_len; scalar_t__ current_line; int current_line_num; TYPE_5__* func_getCurr; int escape; int enclosure; int delimiter; int stream; } ;
struct TYPE_12__ {TYPE_2__ file; } ;
struct TYPE_13__ {TYPE_3__ u; int flags; int file_name; } ;
typedef TYPE_4__ spl_filesystem_object ;
struct TYPE_10__ {scalar_t__ scope; } ;
struct TYPE_14__ {TYPE_1__ common; } ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (TYPE_4__*,int ,int ,int ,int *) ;
 int FUNC_14 (int ,int ,TYPE_5__**,char*,int *) ;
 int FUNC_15 (int ,int ,char*,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(zval * VAR_8, spl_filesystem_object *VAR_9, int VAR_10)
{
 zval VAR_11;


 if (FUNC_1(VAR_9->flags, VAR_2) || VAR_9->u.file.func_getCurr->common.scope != VAR_7) {
  if (FUNC_10(VAR_9->u.file.stream)) {
   if (!VAR_10) {
    FUNC_15(VAR_6, 0, "Cannot read from file %s", VAR_9->file_name);
   }
   return VAR_0;
  }
  if (FUNC_1(VAR_9->flags, VAR_2)) {
   return FUNC_13(VAR_9, VAR_9->u.file.delimiter, VAR_9->u.file.enclosure, VAR_9->u.file.escape, ((void*)0));
  } else {
   zend_execute_data *VAR_12 = FUNC_0(VAR_5);
   FUNC_14(FUNC_5(VAR_8), FUNC_4(VAR_4), &VAR_9->u.file.func_getCurr, "getCurrentLine", &VAR_11);
  }
  if (!FUNC_3(VAR_11)) {
   if (VAR_9->u.file.current_line || !FUNC_3(VAR_9->u.file.current_zval)) {
    VAR_9->u.file.current_line_num++;
   }
   FUNC_11(VAR_9);
   if (FUNC_8(VAR_11) == VAR_1) {
    VAR_9->u.file.current_line = FUNC_9(FUNC_7(VAR_11), FUNC_6(VAR_11));
    VAR_9->u.file.current_line_len = FUNC_6(VAR_11);
   } else {
    zval *VAR_13 = &VAR_11;

    FUNC_2(&VAR_9->u.file.current_zval, VAR_13);
   }
   FUNC_16(&VAR_11);
   return VAR_3;
  } else {
   return VAR_0;
  }
 } else {
  return FUNC_12(VAR_9, VAR_10);
 }
}
