
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct primes {int sz; int * primes; int last; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int *,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ,char*) ;
 int VAR_2 ;
 struct primes* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void)
{
 const struct primes *VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0);

 FUNC_6();
 VAR_3 = FUNC_5(VAR_2);

 if (VAR_4)
  FUNC_1(1, VAR_4, VAR_3->primes, VAR_3->sz);
 FUNC_4("primes.{last=%lu, .sz=%lu, .primes[]=...x%lx} = %s",
  VAR_3->last, VAR_3->sz, VAR_3->primes[FUNC_0(VAR_3->sz) - 1], VAR_4);

 FUNC_7();

 FUNC_2(VAR_4);
}
