
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rds_iovec {int addr; int bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct rds_iovec *VAR_3)
{
 if ((VAR_3->addr + VAR_3->bytes <= VAR_3->addr) ||
     (VAR_3->bytes > (u64)VAR_2))
  return 0;

 return ((VAR_3->addr + VAR_3->bytes + VAR_1 - 1) >> VAR_0) -
  (VAR_3->addr >> VAR_0);
}
