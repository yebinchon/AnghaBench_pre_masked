
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {scalar_t__ resv_huge_pages; int surplus_huge_pages; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hstate*,int *,int) ;
 scalar_t__ FUNC_2 (struct hstate*) ;
 int VAR_1 ;
 unsigned long FUNC_3 (unsigned long,int ) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_4(struct hstate *VAR_3,
     unsigned long VAR_4)
{
 unsigned long VAR_5;


 if (FUNC_2(VAR_3))
  goto out;





 VAR_5 = FUNC_3(VAR_4, VAR_3->surplus_huge_pages);
 while (VAR_5--) {
  VAR_3->resv_huge_pages--;
  VAR_4--;
  if (!FUNC_1(VAR_3, &VAR_2[VAR_0], 1))
   goto out;
  FUNC_0(&VAR_1);
 }

out:

 VAR_3->resv_huge_pages -= VAR_4;
}
