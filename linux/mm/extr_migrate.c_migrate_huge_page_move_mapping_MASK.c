
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; int index; } ;
struct address_space {int i_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (struct page*,int) ;
 int VAR_2 ;
 struct page* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct page*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct address_space *VAR_3,
       struct page *VAR_4, struct page *VAR_5)
{
 FUNC_0(VAR_2, &VAR_3->i_pages, FUNC_4(VAR_5));
 int VAR_6;

 FUNC_8(&VAR_2);
 VAR_6 = 2 + FUNC_3(VAR_5);
 if (FUNC_2(VAR_5) != VAR_6 || FUNC_7(&VAR_2) != VAR_5) {
  FUNC_10(&VAR_2);
  return -VAR_0;
 }

 if (!FUNC_5(VAR_5, VAR_6)) {
  FUNC_10(&VAR_2);
  return -VAR_0;
 }

 VAR_4->index = VAR_5->index;
 VAR_4->mapping = VAR_5->mapping;

 FUNC_1(VAR_4);

 FUNC_9(&VAR_2, VAR_4);

 FUNC_6(VAR_5, VAR_6 - 1);

 FUNC_10(&VAR_2);

 return VAR_1;
}
