
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int idr_rt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct idr *VAR_1)
{
 return FUNC_0(&VAR_1->idr_rt) &&
  FUNC_1(&VAR_1->idr_rt, VAR_0);
}
