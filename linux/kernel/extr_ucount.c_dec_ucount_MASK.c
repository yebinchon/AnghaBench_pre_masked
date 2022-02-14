
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucounts {int * ucount; TYPE_1__* ns; } ;
typedef enum ucount_type { ____Placeholder_ucount_type } ucount_type ;
struct TYPE_2__ {struct ucounts* ucounts; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ucounts*) ;

void FUNC_3(struct ucounts *VAR_0, enum ucount_type VAR_1)
{
 struct ucounts *VAR_2;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->ns->ucounts) {
  int VAR_3 = FUNC_1(&VAR_2->ucount[VAR_1]);
  FUNC_0(VAR_3 < 0);
 }
 FUNC_2(VAR_0);
}
