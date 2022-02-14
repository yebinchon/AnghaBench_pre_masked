
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct token {int dummy; } ;
struct element {struct element* list_next; } ;


 struct element* FUNC_0 (int,int) ;
 struct element* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct element *FUNC_3(struct token *VAR_1)
{
 struct element *VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 if (!VAR_2) {
  FUNC_2(((void*)0));
  FUNC_1(1);
 }
 VAR_2->list_next = VAR_0;
 VAR_0 = VAR_2;
 return VAR_2;
}
