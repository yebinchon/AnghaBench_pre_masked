
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_proc; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 unsigned int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(int *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4;

 VAR_2 = -1;
 VAR_3 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0->p.nr_proc; VAR_4++) {
  unsigned int VAR_5 = FUNC_0(VAR_4);

  if (!VAR_5) {
   *VAR_1 = 0;
   return;
  }

  VAR_2 = FUNC_2(VAR_5, VAR_2);
  VAR_3 = FUNC_1(VAR_5, VAR_3);
 }


 if (VAR_2 == 1 && VAR_3 == 1) {
  *VAR_1 = 1;
 } else {
  *VAR_1 = 0;
  FUNC_3(" {%d-%d}", VAR_2, VAR_3);
 }
}
