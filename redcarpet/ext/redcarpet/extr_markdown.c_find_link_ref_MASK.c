
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct link_ref {unsigned int id; struct link_ref* next; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *,size_t) ;

__attribute__((used)) static struct link_ref *
FUNC_1(struct link_ref **VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2, VAR_3);
 struct link_ref *VAR_5 = ((void*)0);

 VAR_5 = VAR_1[VAR_4 % VAR_0];

 while (VAR_5 != ((void*)0)) {
  if (VAR_5->id == VAR_4)
   return VAR_5;

  VAR_5 = VAR_5->next;
 }

 return ((void*)0);
}
