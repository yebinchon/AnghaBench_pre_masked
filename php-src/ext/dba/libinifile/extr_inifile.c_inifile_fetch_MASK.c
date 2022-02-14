
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {char* value; } ;
typedef TYPE_3__ val_type ;
struct TYPE_17__ {char* group; scalar_t__ name; } ;
struct TYPE_13__ {int * member_0; } ;
struct TYPE_12__ {int * member_1; int * member_0; } ;
struct TYPE_15__ {TYPE_3__ val; void* pos; TYPE_9__ key; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_4__ line_type ;
typedef int key_type ;
struct TYPE_16__ {int fp; TYPE_4__ next; } ;
typedef TYPE_5__ inifile ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_9__*,int const*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*,int ) ;
 void* FUNC_6 (int ) ;

val_type FUNC_7(inifile *VAR_1, const key_type *VAR_2, int VAR_3) {
 line_type VAR_4 = {{((void*)0),((void*)0)},((void*)0)};
 val_type VAR_5;
 int VAR_6, VAR_7 = 0;

 if (VAR_3 == -1 && VAR_1->next.key.group && VAR_1->next.key.name && !FUNC_1(&VAR_1->next.key, VAR_2)) {

  FUNC_5(VAR_1->fp, VAR_1->next.pos, VAR_0);
  VAR_4.key.group = FUNC_0(VAR_1->next.key.group);
 } else {


  FUNC_4(VAR_1->fp);
  FUNC_2(&VAR_1->next);
 }
 if (VAR_3 == -1) {
  VAR_3 = 0;
 }
 while(FUNC_3(VAR_1, &VAR_4)) {
  if (!(VAR_6=FUNC_1(&VAR_4.key, VAR_2))) {
   if (!VAR_3) {
    VAR_5.value = FUNC_0(VAR_4.val.value ? VAR_4.val.value : "");

    FUNC_2(&VAR_1->next);
    VAR_1->next = VAR_4;
    VAR_1->next.pos = FUNC_6(VAR_1->fp);
    return VAR_5;
   }
   VAR_3--;
  } else if (VAR_6 == 1) {
   VAR_7 = 1;
  } else if (VAR_7) {

   break;
  }
 }
 FUNC_2(&VAR_4);
 VAR_1->next.pos = FUNC_6(VAR_1->fp);
 return VAR_4.val;
}
