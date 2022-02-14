
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigchain_signal {int n; int * old; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 struct sigchain_signal* VAR_1 ;

int FUNC_2(int VAR_2)
{
 struct sigchain_signal *VAR_3 = VAR_1 + VAR_2;
 FUNC_0(VAR_2);
 if (VAR_3->n < 1)
  return 0;

 if (FUNC_1(VAR_2, VAR_3->old[VAR_3->n - 1]) == VAR_0)
  return -1;
 VAR_3->n--;
 return 0;
}
