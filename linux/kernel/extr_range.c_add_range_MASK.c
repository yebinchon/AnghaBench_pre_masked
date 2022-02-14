
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct range {scalar_t__ end; scalar_t__ start; } ;



int FUNC_0(struct range *VAR_0, int VAR_1, int VAR_2, u64 VAR_3, u64 VAR_4)
{
 if (VAR_3 >= VAR_4)
  return VAR_2;


 if (VAR_2 >= VAR_1)
  return VAR_2;

 VAR_0[VAR_2].start = VAR_3;
 VAR_0[VAR_2].end = VAR_4;

 VAR_2++;

 return VAR_2;
}
