
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * d_name; } ;
struct TYPE_8__ {TYPE_1__ entry; } ;
struct TYPE_9__ {TYPE_2__ dir; } ;
struct TYPE_10__ {int type; size_t file_name_len; char* file_name; TYPE_3__ u; } ;
typedef TYPE_4__ spl_filesystem_object ;





 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static char *FUNC_1(spl_filesystem_object *VAR_0, size_t *VAR_1) {
 switch (VAR_0->type) {
  case 128:
  case 129:
   *VAR_1 = VAR_0->file_name_len;
   return VAR_0->file_name;
  case 130:
   if (VAR_0->u.dir.entry.d_name[0]) {
    FUNC_0(VAR_0);
    *VAR_1 = VAR_0->file_name_len;
    return VAR_0->file_name;
   }
 }
 *VAR_1 = 0;
 return ((void*)0);
}
