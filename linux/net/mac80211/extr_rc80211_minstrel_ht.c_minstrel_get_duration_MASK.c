
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_group {unsigned int* duration; unsigned int shift; } ;


 int VAR_0 ;
 struct mcs_group* VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(int VAR_2)
{
 const struct mcs_group *VAR_3 = &VAR_1[VAR_2 / VAR_0];
 unsigned int VAR_4 = VAR_3->duration[VAR_2 % VAR_0];
 return VAR_4 << VAR_3->shift;
}
