
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct devlink_trap {scalar_t__ id; int name; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct devlink_trap *VAR_4)
{
 int VAR_5;

 if (VAR_4->id <= VAR_0)
  return -VAR_2;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  if (!FUNC_1(VAR_4->name, VAR_3[VAR_5].name))
   return -VAR_1;
 }

 return 0;
}
