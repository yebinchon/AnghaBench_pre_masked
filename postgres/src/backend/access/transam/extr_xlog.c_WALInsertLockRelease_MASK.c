
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int insertingAt; int lock; } ;
struct TYPE_4__ {TYPE_1__ l; } ;


 int FUNC_0 (int *,int *,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(void)
{
 if (VAR_3)
 {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_0(&VAR_2[VAR_4].l.lock,
          &VAR_2[VAR_4].l.insertingAt,
          0);

  VAR_3 = 0;
 }
 else
 {
  FUNC_0(&VAR_2[VAR_0].l.lock,
         &VAR_2[VAR_0].l.insertingAt,
         0);
 }
}
