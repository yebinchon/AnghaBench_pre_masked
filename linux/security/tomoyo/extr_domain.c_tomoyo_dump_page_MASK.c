
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_page_dump {scalar_t__ data; struct page* page; } ;
struct page {int dummy; } ;
struct linux_binprm {struct page** page; int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned long,int,int ,struct page**,int *,int *) ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (scalar_t__,char*,unsigned long) ;
 int FUNC_5 (struct page*) ;

bool FUNC_6(struct linux_binprm *VAR_4, unsigned long VAR_5,
        struct tomoyo_page_dump *VAR_6)
{
 struct page *VAR_7;


 if (!VAR_6->data) {
  VAR_6->data = FUNC_3(VAR_2, VAR_1);
  if (!VAR_6->data)
   return 0;
 }
 VAR_7 = VAR_4->page[VAR_5 / VAR_2];

 if (VAR_7 != VAR_6->page) {
  const unsigned int VAR_8 = VAR_5 % VAR_2;





  char *VAR_9 = FUNC_1(VAR_7);

  VAR_6->page = VAR_7;
  FUNC_4(VAR_6->data + VAR_8, VAR_9 + VAR_8,
         VAR_2 - VAR_8);
  FUNC_2(VAR_9);
 }




 return 1;
}
