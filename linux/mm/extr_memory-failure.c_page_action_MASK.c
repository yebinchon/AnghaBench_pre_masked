
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_state {int (* action ) (struct page*,unsigned long) ;size_t type; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (unsigned long,size_t,int) ;
 int FUNC_1 (struct page*,unsigned long) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (char*,unsigned long,int ,int) ;
 int FUNC_4 (struct page*,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct page_state *VAR_5, struct page *VAR_6,
   unsigned long VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_8 = VAR_5->action(VAR_6, VAR_7);

 VAR_9 = FUNC_2(VAR_6) - 1;
 if (VAR_5->action == FUNC_1 && VAR_8 == VAR_1)
  VAR_9--;
 if (VAR_9 > 0) {
  FUNC_3("Memory failure: %#lx: %s still referenced by %d users\n",
         VAR_7, VAR_4[VAR_5->type], VAR_9);
  VAR_8 = VAR_2;
 }
 FUNC_0(VAR_7, VAR_5->type, VAR_8);






 return (VAR_8 == VAR_3 || VAR_8 == VAR_1) ? 0 : -VAR_0;
}
