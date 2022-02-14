
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct rfkill {TYPE_1__ dev; int registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct rfkill*,int ) ;

__attribute__((used)) static void FUNC_2(struct rfkill *VAR_2)
{
 if (!VAR_2->registered)
  return;

 FUNC_0(&VAR_2->dev.kobj, VAR_0);


 FUNC_1(VAR_2, VAR_1);
}
