
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pos; } ;
typedef TYPE_1__ mt19937_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (unsigned long*,TYPE_1__*) ;
 int FUNC_3 (unsigned long*,int,int) ;

void FUNC_4(mt19937_state *VAR_3, const char *VAR_4) {
  unsigned long *VAR_5;
  int VAR_6;

  VAR_5 = (unsigned long *)FUNC_0(VAR_2, sizeof(unsigned long));

  for (VAR_6 = VAR_0 - 1; VAR_6 > -1; VAR_6--) {
    if (VAR_4[VAR_6] == '1')
      FUNC_3(VAR_5, VAR_6, 1);
  }


  if (VAR_3->pos >= VAR_1) {
    VAR_3->pos = 0;
  }

  FUNC_2(VAR_5, VAR_3);

  FUNC_1(VAR_5);
}
