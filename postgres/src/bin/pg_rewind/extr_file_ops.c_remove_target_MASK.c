
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ action; int type; int path; } ;
typedef TYPE_1__ file_entry_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(file_entry_t *VAR_1)
{
 FUNC_0(VAR_1->action == VAR_0);

 switch (VAR_1->type)
 {
  case 130:
   FUNC_1(VAR_1->path);
   break;

  case 129:
   FUNC_2(VAR_1->path, 0);
   break;

  case 128:
   FUNC_3(VAR_1->path);
   break;
 }
}
