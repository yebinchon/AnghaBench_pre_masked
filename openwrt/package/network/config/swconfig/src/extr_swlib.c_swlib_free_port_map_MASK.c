
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int ports; TYPE_1__* maps; } ;
struct TYPE_2__ {struct TYPE_2__* segment; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct switch_dev *VAR_0)
{
 int VAR_1;

 if (!VAR_0 || !VAR_0->maps)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->ports; VAR_1++)
  FUNC_0(VAR_0->maps[VAR_1].segment);
 FUNC_0(VAR_0->maps);
}
