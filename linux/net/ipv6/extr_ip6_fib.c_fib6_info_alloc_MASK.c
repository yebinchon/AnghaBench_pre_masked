
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_nh {int dummy; } ;
struct fib6_info {int fib6_ref; int fib6_siblings; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct fib6_info* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int) ;

struct fib6_info *FUNC_3(gfp_t VAR_0, bool VAR_1)
{
 struct fib6_info *VAR_2;
 size_t VAR_3 = sizeof(*VAR_2);

 if (VAR_1)
  VAR_3 += sizeof(struct fib6_nh);

 VAR_2 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_2)
  return ((void*)0);


 FUNC_0(&VAR_2->fib6_siblings);
 FUNC_2(&VAR_2->fib6_ref, 1);

 return VAR_2;
}
