
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct primes {int dummy; } ;


 int FUNC_0 (struct primes*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,struct primes const*) ;
 struct primes* FUNC_5 (int ,int ) ;
 struct primes const VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
 const struct primes *VAR_4;

 FUNC_2(&VAR_0);
 VAR_4 = FUNC_5(VAR_1, FUNC_1(&VAR_0));
 if (VAR_4 != &VAR_3) {
  FUNC_4(VAR_1, &VAR_3);
  FUNC_0((struct primes *)VAR_4, VAR_2);
 }
 FUNC_3(&VAR_0);
}
