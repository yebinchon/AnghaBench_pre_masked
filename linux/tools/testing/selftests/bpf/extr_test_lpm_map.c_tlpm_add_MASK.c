
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tlpm_node {size_t n_bits; int key; struct tlpm_node* next; } ;


 int FUNC_0 (struct tlpm_node*) ;
 struct tlpm_node* FUNC_1 (int) ;
 int FUNC_2 (int ,int const*,size_t) ;
 struct tlpm_node* FUNC_3 (struct tlpm_node*,int const*,size_t) ;

__attribute__((used)) static struct tlpm_node *FUNC_4(struct tlpm_node *VAR_0,
      const uint8_t *VAR_1,
      size_t VAR_2)
{
 struct tlpm_node *VAR_3;
 size_t VAR_4;

 VAR_4 = (VAR_2 + 7) / 8;


 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3 && VAR_3->n_bits == VAR_2) {
  FUNC_2(VAR_3->key, VAR_1, VAR_4);
  return VAR_0;
 }



 VAR_3 = FUNC_1(sizeof(*VAR_3) + VAR_4);
 FUNC_0(VAR_3);

 VAR_3->next = VAR_0;
 VAR_3->n_bits = VAR_2;
 FUNC_2(VAR_3->key, VAR_1, VAR_4);

 return VAR_3;
}
