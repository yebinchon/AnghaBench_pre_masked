
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vringh_range {scalar_t__ offset; scalar_t__ start; scalar_t__ end_incl; } ;
struct vringh {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct vringh *VAR_3, u64 VAR_4, struct vringh_range *VAR_5)
{
 if (VAR_4 < (u64)(unsigned long)VAR_1 - VAR_2)
  return 0;
 if (VAR_4 >= (u64)(unsigned long)VAR_0 - VAR_2)
  return 0;

 VAR_5->start = VAR_4;
 VAR_5->end_incl = VAR_5->start;
 VAR_5->offset = VAR_2;
 return 1;
}
