
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rq {int rt; } ;
typedef enum schedutil_type { ____Placeholder_schedutil_type } schedutil_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rq*) ;
 struct rq* FUNC_2 (int) ;
 unsigned long FUNC_3 (struct rq*) ;
 unsigned long FUNC_4 (struct rq*) ;
 unsigned long FUNC_5 (struct rq*) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (int *) ;
 unsigned long FUNC_8 (unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_9 (struct rq*,unsigned long,struct task_struct*) ;
 scalar_t__ FUNC_10 (int) ;

unsigned long FUNC_11(int VAR_3, unsigned long VAR_4,
     unsigned long VAR_5, enum schedutil_type VAR_6,
     struct task_struct *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 struct rq *VAR_11 = FUNC_2(VAR_3);

 if (!FUNC_0(VAR_0) &&
     VAR_6 == VAR_2 && FUNC_7(&VAR_11->rt)) {
  return VAR_5;
 }






 VAR_10 = FUNC_4(VAR_11);
 if (FUNC_10(VAR_10 >= VAR_5))
  return VAR_5;
 VAR_9 = VAR_4 + FUNC_5(VAR_11);
 if (VAR_6 == VAR_2)
  VAR_9 = FUNC_9(VAR_11, VAR_9, VAR_7);

 VAR_8 = FUNC_3(VAR_11);
 if (VAR_9 + VAR_8 >= VAR_5)
  return VAR_5;





 if (VAR_6 == VAR_1)
  VAR_9 += VAR_8;
 VAR_9 = FUNC_8(VAR_9, VAR_10, VAR_5);
 VAR_9 += VAR_10;
 if (VAR_6 == VAR_2)
  VAR_9 += FUNC_1(VAR_11);

 return FUNC_6(VAR_5, VAR_9);
}
