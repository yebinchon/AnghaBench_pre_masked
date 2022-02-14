
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int VAR_0 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,struct address_space*,int ,int,void**) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct page*,void*) ;

int FUNC_8(struct page *VAR_1, struct address_space *VAR_2,
    pgoff_t VAR_3, gfp_t VAR_4)
{
 void *VAR_5 = ((void*)0);
 int VAR_6;

 FUNC_3(VAR_1);
 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4, &VAR_5);
 if (FUNC_6(VAR_6))
  FUNC_2(VAR_1);
 else {
  FUNC_1(FUNC_0(VAR_1));
  if (!(VAR_4 & VAR_0) && VAR_5)
   FUNC_7(VAR_1, VAR_5);
  FUNC_5(VAR_1);
 }
 return VAR_6;
}
