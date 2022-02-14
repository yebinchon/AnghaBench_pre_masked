
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_frag_cache {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 void* FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 void* FUNC_6 (struct page_frag_cache*,unsigned int,int ) ;
 struct page_frag_cache* FUNC_7 (int *) ;

void *FUNC_8(unsigned int VAR_2)
{
 struct page_frag_cache *VAR_3;
 void *VAR_4;

 VAR_2 = FUNC_0(VAR_2);
 if (FUNC_2() || FUNC_3()) {
  VAR_3 = FUNC_7(&VAR_1);
  VAR_4 = FUNC_6(VAR_3, VAR_2, VAR_0);
 } else {
  FUNC_4();
  VAR_4 = FUNC_1(VAR_2, VAR_0);
  FUNC_5();
 }
 return VAR_4;
}
