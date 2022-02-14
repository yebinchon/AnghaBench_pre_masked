
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tlpm_node {size_t n_bits; int* key; struct tlpm_node* next; } ;



__attribute__((used)) static struct tlpm_node *FUNC_0(struct tlpm_node *VAR_0,
        const uint8_t *VAR_1,
        size_t VAR_2)
{
 struct tlpm_node *VAR_3 = ((void*)0);
 size_t VAR_4;







 for ( ; VAR_0; VAR_0 = VAR_0->next) {
  for (VAR_4 = 0; VAR_4 < VAR_2 && VAR_4 < VAR_0->n_bits; ++VAR_4) {
   if ((VAR_1[VAR_4 / 8] & (1 << (7 - VAR_4 % 8))) !=
       (VAR_0->key[VAR_4 / 8] & (1 << (7 - VAR_4 % 8))))
    break;
  }

  if (VAR_4 >= VAR_0->n_bits) {
   if (!VAR_3 || VAR_4 > VAR_3->n_bits)
    VAR_3 = VAR_0;
  }
 }

 return VAR_3;
}
