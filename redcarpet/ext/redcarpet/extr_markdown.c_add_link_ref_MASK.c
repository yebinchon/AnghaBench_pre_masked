
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct link_ref {size_t id; struct link_ref* next; } ;


 size_t VAR_0 ;
 struct link_ref* FUNC_0 (int,int) ;
 size_t FUNC_1 (int const*,size_t) ;

__attribute__((used)) static struct link_ref *
FUNC_2(
 struct link_ref **VAR_1,
 const uint8_t *VAR_2, size_t VAR_3)
{
 struct link_ref *VAR_4 = FUNC_0(1, sizeof(struct link_ref));

 if (!VAR_4)
  return ((void*)0);

 VAR_4->id = FUNC_1(VAR_2, VAR_3);
 VAR_4->next = VAR_1[VAR_4->id % VAR_0];

 VAR_1[VAR_4->id % VAR_0] = VAR_4;
 return VAR_4;
}
