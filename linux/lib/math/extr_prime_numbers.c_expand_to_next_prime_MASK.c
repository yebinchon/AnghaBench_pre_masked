
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct primes {unsigned long last; unsigned long sz; int primes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned long,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_5 (int ,unsigned long,unsigned long) ;
 int FUNC_6 (struct primes*) ;
 int FUNC_7 (struct primes*,int ) ;
 struct primes* FUNC_8 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ,struct primes*) ;
 struct primes* FUNC_13 (int ,int ) ;
 unsigned long FUNC_14 (unsigned long,int ) ;
 struct primes const VAR_6 ;

__attribute__((used)) static bool FUNC_15(unsigned long VAR_7)
{
 const struct primes *VAR_8;
 struct primes *VAR_9;
 unsigned long VAR_10, VAR_11;
 VAR_10 = 2 * VAR_7;
 if (VAR_10 < VAR_7)
  return 0;

 VAR_10 = FUNC_14(VAR_10, VAR_0);
 VAR_9 = FUNC_8(sizeof(*VAR_9) + FUNC_3(VAR_10),
        VAR_1 | VAR_2);
 if (!VAR_9)
  return 0;

 FUNC_10(&VAR_3);
 VAR_8 = FUNC_13(VAR_4, FUNC_9(&VAR_3));
 if (VAR_7 < VAR_8->last) {
  FUNC_6(VAR_9);
  goto unlock;
 }





 FUNC_2(VAR_9->primes, VAR_10);
 FUNC_1(VAR_9->primes, VAR_8->primes, VAR_8->sz);
 for (VAR_11 = 2UL; VAR_11 < VAR_10; VAR_11 = FUNC_5(VAR_9->primes, VAR_10, VAR_11 + 1))
  VAR_9->last = FUNC_4(VAR_11, VAR_9->primes, VAR_8->sz, VAR_10);
 VAR_9->sz = VAR_10;

 FUNC_0(VAR_9->last <= VAR_7);

 FUNC_12(VAR_4, VAR_9);
 if (VAR_8 != &VAR_6)
  FUNC_7((struct primes *)VAR_8, VAR_5);

unlock:
 FUNC_11(&VAR_3);
 return 1;
}
