
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subtitle_list {struct subtitle_list* next; } ;


 int FUNC_0 (struct subtitle_list*) ;
 int FUNC_1 (struct subtitle_list*) ;
 struct subtitle_list* VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct subtitle_list *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
 }
 VAR_0 = ((void*)0);
 FUNC_1(VAR_0);
}
