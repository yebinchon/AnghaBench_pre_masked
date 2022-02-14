
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ s; int index; int tick; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(void)
{

 while (VAR_4 != VAR_3)
 {
  FUNC_3(VAR_2[VAR_4].tick, VAR_2[VAR_4].index);
  FUNC_2(VAR_2[VAR_4].s.data);
  VAR_4 = (VAR_4 + 1) % VAR_0;
 }

 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1);

 FUNC_1();
}
