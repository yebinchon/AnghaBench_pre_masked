
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int slab_cache; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (void const*) ;
 int VAR_1 ;
 int FUNC_4 (struct page*,unsigned int) ;
 unsigned int FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,struct page*,void*,int *,int,int ) ;
 int FUNC_10 (int ,void const*) ;
 scalar_t__ FUNC_11 (int) ;
 struct page* FUNC_12 (void const*) ;

void FUNC_13(const void *VAR_2)
{
 struct page *VAR_3;
 void *VAR_4 = (void *)VAR_2;

 FUNC_10(VAR_1, VAR_2);

 if (FUNC_11(FUNC_3(VAR_2)))
  return;

 VAR_3 = FUNC_12(VAR_2);
 if (FUNC_11(!FUNC_2(VAR_3))) {
  unsigned int VAR_5 = FUNC_5(VAR_3);

  FUNC_0(!FUNC_1(VAR_3));
  FUNC_6(VAR_4);
  FUNC_7(FUNC_8(VAR_3), VAR_0,
        -(1 << VAR_5));
  FUNC_4(VAR_3, VAR_5);
  return;
 }
 FUNC_9(VAR_3->slab_cache, VAR_3, VAR_4, ((void*)0), 1, VAR_1);
}
