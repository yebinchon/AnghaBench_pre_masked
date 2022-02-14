
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct primes {unsigned long sz; int primes; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 struct primes* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int ) ;

bool FUNC_6(unsigned long VAR_1)
{
 const struct primes *VAR_2;
 bool VAR_3;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_0);
 while (VAR_1 >= VAR_2->sz) {
  FUNC_3();

  if (!FUNC_0(VAR_1))
   return FUNC_4(VAR_1);

  FUNC_2();
  VAR_2 = FUNC_1(VAR_0);
 }
 VAR_3 = FUNC_5(VAR_1, VAR_2->primes);
 FUNC_3();

 return VAR_3;
}
