
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {scalar_t__ current_line_num; int stream; } ;
struct TYPE_8__ {TYPE_1__ file; } ;
struct TYPE_9__ {int flags; TYPE_2__ u; int file_name; } ;
typedef TYPE_3__ spl_filesystem_object ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 int FUNC_4 (int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_5(zval * VAR_2, spl_filesystem_object *VAR_3)
{
 if(!VAR_3->u.file.stream) {
  FUNC_4(VAR_1, 0, "Object not initialized");
  return;
 }
 if (-1 == FUNC_1(VAR_3->u.file.stream)) {
  FUNC_4(VAR_1, 0, "Cannot rewind file %s", VAR_3->file_name);
 } else {
  FUNC_2(VAR_3);
  VAR_3->u.file.current_line_num = 0;
 }
 if (FUNC_0(VAR_3->flags, VAR_0)) {
  FUNC_3(VAR_2, VAR_3, 1);
 }
}
