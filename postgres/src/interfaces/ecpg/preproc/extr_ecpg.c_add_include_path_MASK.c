
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _include_path {char* path; struct _include_path* next; } ;


 struct _include_path* VAR_0 ;
 struct _include_path* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_1)
{
 struct _include_path *VAR_2 = VAR_0,
      *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct _include_path));
 VAR_3->path = VAR_1;
 VAR_3->next = ((void*)0);

 if (VAR_2 == ((void*)0))
  VAR_0 = VAR_3;
 else
 {
  for (; VAR_2->next != ((void*)0); VAR_2 = VAR_2->next);
  VAR_2->next = VAR_3;
 }
}
