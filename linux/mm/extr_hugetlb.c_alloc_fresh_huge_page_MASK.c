
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 struct page* FUNC_0 (struct hstate*,int ,int,int *,int *) ;
 struct page* FUNC_1 (struct hstate*,int ,int,int *) ;
 scalar_t__ FUNC_2 (struct hstate*) ;
 int FUNC_3 (struct hstate*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ) ;
 int FUNC_6 (struct hstate*,struct page*,int ) ;

__attribute__((used)) static struct page *FUNC_7(struct hstate *VAR_0,
  gfp_t VAR_1, int VAR_2, nodemask_t *VAR_3,
  nodemask_t *VAR_4)
{
 struct page *VAR_5;

 if (FUNC_2(VAR_0))
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  VAR_5 = FUNC_0(VAR_0, VAR_1,
    VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_2(VAR_0))
  FUNC_5(VAR_5, FUNC_3(VAR_0));
 FUNC_6(VAR_0, VAR_5, FUNC_4(VAR_5));

 return VAR_5;
}
