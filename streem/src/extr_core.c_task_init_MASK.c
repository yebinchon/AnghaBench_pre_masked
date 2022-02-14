
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strm_worker {int dummy; } ;
struct TYPE_4__ {int th; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 void* VAR_1 ;
 int FUNC_1 (int *,int *,int ,TYPE_1__*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 void* FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_5()
{
  int VAR_7;

  if (VAR_6) return;

  VAR_3 = VAR_0;
  FUNC_2();

  VAR_2 = FUNC_3();
  VAR_1 = FUNC_3();
  VAR_5 = FUNC_4();
  VAR_6 = FUNC_0(sizeof(struct strm_worker)*VAR_5);
  for (VAR_7=0; VAR_7<VAR_5; VAR_7++) {
    FUNC_1(&VAR_6[VAR_7].th, ((void*)0), VAR_4, &VAR_6[VAR_7]);
  }
}
