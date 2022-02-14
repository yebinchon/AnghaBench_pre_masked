
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int insertingAt; } ;
struct TYPE_4__ {TYPE_1__ l; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_5;






 for (VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++)
 {
  FUNC_0(&VAR_3[VAR_5].l.lock, VAR_0);
  FUNC_1(&VAR_3[VAR_5].l.lock,
      &VAR_3[VAR_5].l.insertingAt,
      VAR_2);
 }

 FUNC_0(&VAR_3[VAR_5].l.lock, VAR_0);

 VAR_4 = 1;
}
