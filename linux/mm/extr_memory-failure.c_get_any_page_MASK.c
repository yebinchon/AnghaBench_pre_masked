
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,unsigned long,int) ;
 int FUNC_4 (char*,unsigned long,int ,int *) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,int) ;

__attribute__((used)) static int FUNC_7(struct page *VAR_1, unsigned long VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);

 if (VAR_4 == 1 && !FUNC_0(VAR_1) &&
     !FUNC_1(VAR_1) && !FUNC_2(VAR_1)) {



  FUNC_5(VAR_1);
  FUNC_6(VAR_1, 1);




  VAR_4 = FUNC_3(VAR_1, VAR_2, 0);
  if (VAR_4 == 1 && !FUNC_1(VAR_1)) {

   FUNC_5(VAR_1);
   FUNC_4("soft_offline: %#lx: unknown non LRU page type %lx (%pGp)\n",
    VAR_2, VAR_1->flags, &VAR_1->flags);
   return -VAR_0;
  }
 }
 return VAR_4;
}
