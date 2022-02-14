
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_info {int refcnt; } ;


 int FUNC_0 (int *,int) ;
 struct block_info* FUNC_1 (int) ;

struct block_info *FUNC_2(void)
{
 struct block_info *VAR_0 = FUNC_1(sizeof(*VAR_0));

 if (VAR_0)
  FUNC_0(&VAR_0->refcnt, 1);
 return VAR_0;
}
