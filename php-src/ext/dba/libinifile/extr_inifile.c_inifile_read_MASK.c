
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {void* value; } ;
struct TYPE_11__ {char* name; void* group; } ;
struct TYPE_8__ {void* pos; TYPE_3__ val; TYPE_7__ key; } ;
typedef TYPE_1__ line_type ;
struct TYPE_9__ {int fp; } ;
typedef TYPE_2__ inifile ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*) ;
 char* FUNC_6 (int ,int *,int ) ;
 void* FUNC_7 (int ) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static int FUNC_9(inifile *VAR_0, line_type *VAR_1) {
 char *VAR_2;
 char *VAR_3;

 FUNC_5(&VAR_1->val);
 while ((VAR_2 = FUNC_6(VAR_0->fp, ((void*)0), 0)) != ((void*)0)) {
  if (VAR_2) {
   if (VAR_2[0] == '[') {



    VAR_3 = FUNC_8(VAR_2+1, ']');
    if (VAR_3) {
     *VAR_3 = '\0';
     FUNC_3(&VAR_1->key);
     VAR_1->key.group = FUNC_2(VAR_2+1);
     VAR_1->key.name = FUNC_1("");
     VAR_1->pos = FUNC_7(VAR_0->fp);
     FUNC_0(VAR_2);
     return 1;
    } else {
     FUNC_0(VAR_2);
     continue;
    }
   } else {
    VAR_3 = FUNC_8(VAR_2, '=');
    if (VAR_3) {
     *VAR_3 = '\0';

     if (!VAR_1->key.group) {
      VAR_1->key.group = FUNC_1("");
     }
     if (VAR_1->key.name) {
      FUNC_0(VAR_1->key.name);
     }
     VAR_1->key.name = FUNC_2(VAR_2);
     VAR_1->val.value = FUNC_2(VAR_3+1);
     VAR_1->pos = FUNC_7(VAR_0->fp);
     FUNC_0(VAR_2);
     return 1;
    } else {



      FUNC_0(VAR_2);
      continue;
    }
   }
  }
 }
 FUNC_4(VAR_1);
 return 0;
}
