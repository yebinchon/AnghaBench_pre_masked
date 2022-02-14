
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_exception_bucket {int dummy; } ;
struct fib6_nh {int rt6i_exception_bucket; } ;
typedef int spinlock_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 struct rt6_exception_bucket* FUNC_1 (int ) ;
 struct rt6_exception_bucket* FUNC_2 (int ,int ) ;

__attribute__((used)) static
struct rt6_exception_bucket *FUNC_3(const struct fib6_nh *VAR_1,
             spinlock_t *VAR_2)
{
 struct rt6_exception_bucket *VAR_3;

 if (VAR_2)
  VAR_3 = FUNC_2(VAR_1->rt6i_exception_bucket,
         FUNC_0(VAR_2));
 else
  VAR_3 = FUNC_1(VAR_1->rt6i_exception_bucket);


 if (VAR_3) {
  unsigned long VAR_4 = (unsigned long)VAR_3;

  VAR_4 &= ~VAR_0;
  VAR_3 = (struct rt6_exception_bucket *)VAR_4;
 }

 return VAR_3;
}
