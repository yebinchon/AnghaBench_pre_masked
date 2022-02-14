
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct hstate*,int ,int,int *,int *) ;
 scalar_t__ FUNC_2 (struct hstate*) ;

struct page *FUNC_3(struct hstate *VAR_0, gfp_t VAR_1,
         int VAR_2, nodemask_t *VAR_3)
{
 struct page *VAR_4;

 if (FUNC_2(VAR_0))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0));
 if (!VAR_4)
  return ((void*)0);





 FUNC_0(VAR_4);

 return VAR_4;
}
