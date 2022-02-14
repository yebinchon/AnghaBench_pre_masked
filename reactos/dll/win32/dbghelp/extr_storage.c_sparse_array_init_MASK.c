
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparse_array {int elements; int key2index; } ;
struct key2index {int dummy; } ;


 int FUNC_0 (int *,unsigned int,unsigned int) ;

void FUNC_1(struct sparse_array* VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    FUNC_0(&VAR_0->key2index, sizeof(struct key2index), VAR_2);
    FUNC_0(&VAR_0->elements, VAR_1, VAR_2);
}
