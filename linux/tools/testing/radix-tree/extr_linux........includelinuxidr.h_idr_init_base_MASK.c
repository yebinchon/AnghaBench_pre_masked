
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int idr_base; scalar_t__ idr_next; int idr_rt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1(struct idr *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_1->idr_rt, VAR_0);
 VAR_1->idr_base = VAR_2;
 VAR_1->idr_next = 0;
}
