
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int dummy; } ;
struct shrink_control {int gfp_mask; int nr_to_scan; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long
FUNC_2(struct shrinker *VAR_3, struct shrink_control *VAR_4)

{
 if ((VAR_4->gfp_mask & VAR_0) != VAR_0)
  return VAR_1;


 if (FUNC_0(&VAR_2))
  return VAR_1;

 return FUNC_1(VAR_4->nr_to_scan);
}
