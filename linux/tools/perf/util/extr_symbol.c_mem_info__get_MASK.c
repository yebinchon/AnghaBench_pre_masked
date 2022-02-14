
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_info {int refcnt; } ;


 int FUNC_0 (int *) ;

struct mem_info *FUNC_1(struct mem_info *VAR_0)
{
 if (VAR_0)
  FUNC_0(&VAR_0->refcnt);
 return VAR_0;
}
