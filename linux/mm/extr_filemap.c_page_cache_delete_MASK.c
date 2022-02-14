
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int * mapping; int index; } ;
struct address_space {unsigned int nrexceptional; unsigned int nrpages; int i_pages; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (int ,int *,int ) ;
 unsigned int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *,struct address_space*) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,void*) ;

__attribute__((used)) static void FUNC_12(struct address_space *VAR_1,
       struct page *VAR_2, void *VAR_3)
{
 FUNC_4(VAR_0, &VAR_1->i_pages, VAR_2->index);
 unsigned int VAR_4 = 1;

 FUNC_7(&VAR_0, VAR_1);


 if (!FUNC_0(VAR_2)) {
  FUNC_10(&VAR_0, VAR_2->index, FUNC_6(VAR_2));
  VAR_4 = FUNC_5(VAR_2);
 }

 FUNC_3(!FUNC_1(VAR_2), VAR_2);
 FUNC_3(FUNC_2(VAR_2), VAR_2);
 FUNC_3(VAR_4 != 1 && VAR_3, VAR_2);

 FUNC_11(&VAR_0, VAR_3);
 FUNC_9(&VAR_0);

 VAR_2->mapping = ((void*)0);


 if (VAR_3) {
  VAR_1->nrexceptional += VAR_4;






  FUNC_8();
 }
 VAR_1->nrpages -= VAR_4;
}
