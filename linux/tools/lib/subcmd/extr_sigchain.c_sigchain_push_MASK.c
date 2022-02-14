
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigchain_signal {scalar_t__* old; int n; int alloc; } ;
typedef int sigchain_fun ;


 int FUNC_0 (scalar_t__*,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 struct sigchain_signal* VAR_1 ;

__attribute__((used)) static int FUNC_3(int VAR_2, sigchain_fun VAR_3)
{
 struct sigchain_signal *VAR_4 = VAR_1 + VAR_2;
 FUNC_1(VAR_2);

 FUNC_0(VAR_4->old, VAR_4->n + 1, VAR_4->alloc);
 VAR_4->old[VAR_4->n] = FUNC_2(VAR_2, VAR_3);
 if (VAR_4->old[VAR_4->n] == VAR_0)
  return -1;
 VAR_4->n++;
 return 0;
}
