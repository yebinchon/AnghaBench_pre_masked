
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mempolicy {int dummy; } ;
struct hstate {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 struct page* FUNC_0 (struct hstate*,int,int *) ;
 int FUNC_1 (struct hstate*) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ,struct mempolicy**,int **) ;
 int FUNC_3 (struct mempolicy*) ;

struct page *FUNC_4(struct hstate *VAR_0, struct vm_area_struct *VAR_1,
  unsigned long VAR_2)
{
 struct mempolicy *VAR_3;
 nodemask_t *VAR_4;
 struct page *VAR_5;
 gfp_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_0);
 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_6, &VAR_3, &VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_7, VAR_4);
 FUNC_3(VAR_3);

 return VAR_5;
}
