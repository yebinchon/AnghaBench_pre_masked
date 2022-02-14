
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {scalar_t__ free_huge_pages; scalar_t__ resv_huge_pages; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (struct hstate*,int ,int,int *) ;
 struct page* FUNC_1 (struct hstate*,int ,int,int *) ;
 int FUNC_2 (struct hstate*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct page *FUNC_5(struct hstate *VAR_3, int VAR_4)
{
 gfp_t VAR_5 = FUNC_2(VAR_3);
 struct page *VAR_6 = ((void*)0);

 if (VAR_4 != VAR_0)
  VAR_5 |= VAR_1;

 FUNC_3(&VAR_2);
 if (VAR_3->free_huge_pages - VAR_3->resv_huge_pages > 0)
  VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_4, ((void*)0));
 FUNC_4(&VAR_2);

 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_4, ((void*)0));

 return VAR_6;
}
