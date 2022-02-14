
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct primes {unsigned long last; int primes; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 int VAR_0 ;
 struct primes* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (unsigned long) ;

unsigned long FUNC_6(unsigned long VAR_1)
{
 const struct primes *VAR_2;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0);
 while (VAR_1 >= VAR_2->last) {
  FUNC_4();

  if (!FUNC_0(VAR_1))
   return FUNC_5(VAR_1);

  FUNC_3();
  VAR_2 = FUNC_2(VAR_0);
 }
 VAR_1 = FUNC_1(VAR_2->primes, VAR_2->last, VAR_1 + 1);
 FUNC_4();

 return VAR_1;
}
