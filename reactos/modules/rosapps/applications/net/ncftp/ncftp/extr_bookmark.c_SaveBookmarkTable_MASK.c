
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ deleted; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

int
FUNC_4(void)
{
 int VAR_2;
 FILE *VAR_3;
 int VAR_4;

 if ((VAR_1 < 1) || (VAR_0 == ((void*)0)))
  return (0);


 for (VAR_2=0, VAR_4=0; VAR_2<VAR_1; VAR_2++) {
  if (VAR_0[VAR_2].deleted == 0)
   VAR_4++;
 }
 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3 == ((void*)0)) {
  return (-1);
 }

 for (VAR_2=0; VAR_2<VAR_1; VAR_2++) {
  if (VAR_0[VAR_2].deleted == 0) {
   if (FUNC_3(VAR_0 + VAR_2, VAR_3, 1) < 0) {
    FUNC_0(VAR_3);
    return (-1);
   }
  }
 }
 FUNC_0(VAR_3);
 if (FUNC_2() < 0) {
  return (-1);
 }
 return (0);
}
