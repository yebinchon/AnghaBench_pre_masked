
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int d_name; } ;
struct TYPE_8__ {TYPE_1__ entry; } ;
struct TYPE_9__ {TYPE_2__ dir; } ;
struct TYPE_10__ {int type; TYPE_3__ u; int file_name; void* file_name_len; int flags; } ;
typedef TYPE_4__ spl_filesystem_object ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*) ;
 char* FUNC_3 (TYPE_4__*,size_t*) ;
 void* FUNC_4 (int *,int ,char*,char*,...) ;

__attribute__((used)) static inline void FUNC_5(spl_filesystem_object *VAR_3)
{
 char VAR_4 = FUNC_0(VAR_3->flags, VAR_2) ? '/' : VAR_0;

 switch (VAR_3->type) {
  case 128:
  case 129:
   if (!VAR_3->file_name) {
    FUNC_2(((void*)0), VAR_1, "Object not initialized");
   }
   break;
  case 130:
   {
    size_t VAR_5 = 0;
    char *VAR_6 = FUNC_3(VAR_3, &VAR_5);
    if (VAR_3->file_name) {
     FUNC_1(VAR_3->file_name);
    }

    if (VAR_5 == 0) {
     VAR_3->file_name_len = FUNC_4(
      &VAR_3->file_name, 0, "%s", VAR_3->u.dir.entry.d_name);
    } else {
     VAR_3->file_name_len = FUNC_4(
      &VAR_3->file_name, 0, "%s%c%s", VAR_6, VAR_4, VAR_3->u.dir.entry.d_name);
    }
   }
   break;
 }
}
