
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tlpm_node {size_t n_bits; struct tlpm_node* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tlpm_node*) ;
 struct tlpm_node* FUNC_2 (struct tlpm_node*,int const*,size_t) ;

__attribute__((used)) static struct tlpm_node *FUNC_3(struct tlpm_node *VAR_0,
         const uint8_t *VAR_1,
         size_t VAR_2)
{
 struct tlpm_node *VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 struct tlpm_node *VAR_4;

 if (!VAR_3 || VAR_3->n_bits != VAR_2)
  return VAR_0;

 if (VAR_3 == VAR_0) {
  VAR_4 = VAR_3->next;
  FUNC_1(VAR_3);
  return VAR_4;
 }

 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->next == VAR_3) {
   VAR_4->next = VAR_3->next;
   FUNC_1(VAR_3);
   return VAR_0;
  }
 }

 FUNC_0(0);
 return VAR_0;
}
