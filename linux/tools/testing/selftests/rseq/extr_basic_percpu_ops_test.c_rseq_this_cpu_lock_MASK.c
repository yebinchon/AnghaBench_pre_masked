
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct percpu_lock {TYPE_1__* c; } ;
struct TYPE_2__ {int v; } ;


 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;

int FUNC_4(struct percpu_lock *VAR_0)
{
 int VAR_1;

 for (;;) {
  int VAR_2;

  VAR_1 = FUNC_1();
  VAR_2 = FUNC_0(&VAR_0->c[VAR_1].v,
      0, 1, VAR_1);
  if (FUNC_2(!VAR_2))
   break;

 }




 FUNC_3();
 return VAR_1;
}
