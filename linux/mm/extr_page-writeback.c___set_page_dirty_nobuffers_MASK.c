
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {scalar_t__ host; int i_pages; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct page*,struct address_space*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 struct address_space* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

int FUNC_14(struct page *VAR_2)
{
 FUNC_8(VAR_2);
 if (!FUNC_3(VAR_2)) {
  struct address_space *VAR_3 = FUNC_10(VAR_2);
  unsigned long VAR_4;

  if (!VAR_3) {
   FUNC_11(VAR_2);
   return 1;
  }

  FUNC_12(&VAR_3->i_pages, VAR_4);
  FUNC_0(FUNC_10(VAR_2) != VAR_3);
  FUNC_4(!FUNC_1(VAR_2) && !FUNC_2(VAR_2));
  FUNC_7(VAR_2, VAR_3);
  FUNC_6(&VAR_3->i_pages, FUNC_9(VAR_2),
       VAR_1);
  FUNC_13(&VAR_3->i_pages, VAR_4);
  FUNC_11(VAR_2);

  if (VAR_3->host) {

   FUNC_5(VAR_3->host, VAR_0);
  }
  return 1;
 }
 FUNC_11(VAR_2);
 return 0;
}
