
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfs_rq {int dummy; } ;
struct rq {struct cfs_rq cfs; } ;


 int VAR_0 ;
 int FUNC_0 (struct rq*,int) ;
 struct rq* FUNC_1 (struct cfs_rq*) ;

__attribute__((used)) static inline void FUNC_2(struct cfs_rq *VAR_1, int VAR_2)
{
 struct rq *VAR_3 = FUNC_1(VAR_1);

 if (&VAR_3->cfs == VAR_1 || (VAR_2 & VAR_0)) {
  FUNC_0(VAR_3, VAR_2);
 }
}
