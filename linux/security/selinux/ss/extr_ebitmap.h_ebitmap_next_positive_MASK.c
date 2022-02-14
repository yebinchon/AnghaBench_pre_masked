
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {unsigned int startbit; int maps; struct ebitmap_node* next; } ;
struct ebitmap {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct ebitmap*) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct ebitmap *VAR_1,
       struct ebitmap_node **VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_2((*VAR_2)->maps, VAR_0, VAR_3 - (*VAR_2)->startbit + 1);
 if (VAR_4 < VAR_0)
  return VAR_4 + (*VAR_2)->startbit;

 for (*VAR_2 = (*VAR_2)->next; *VAR_2; *VAR_2 = (*VAR_2)->next) {
  VAR_4 = FUNC_1((*VAR_2)->maps, VAR_0);
  if (VAR_4 < VAR_0)
   return VAR_4 + (*VAR_2)->startbit;
 }
 return FUNC_0(VAR_1);
}
