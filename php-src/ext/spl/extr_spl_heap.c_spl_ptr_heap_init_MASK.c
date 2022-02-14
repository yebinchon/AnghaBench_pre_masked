
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spl_ptr_heap_dtor_func ;
typedef int spl_ptr_heap_ctor_func ;
typedef int spl_ptr_heap_cmp_func ;
struct TYPE_4__ {size_t elem_size; scalar_t__ flags; scalar_t__ count; int max_size; int elements; int cmp; int ctor; int dtor; } ;
typedef TYPE_1__ spl_ptr_heap ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static spl_ptr_heap *FUNC_2(spl_ptr_heap_cmp_func VAR_1, spl_ptr_heap_ctor_func VAR_2, spl_ptr_heap_dtor_func VAR_3, size_t VAR_4)
{
 spl_ptr_heap *VAR_5 = FUNC_1(sizeof(spl_ptr_heap));

 VAR_5->dtor = VAR_3;
 VAR_5->ctor = VAR_2;
 VAR_5->cmp = VAR_1;
 VAR_5->elements = FUNC_0(VAR_0, VAR_4);
 VAR_5->max_size = VAR_0;
 VAR_5->count = 0;
 VAR_5->flags = 0;
 VAR_5->elem_size = VAR_4;

 return VAR_5;
}
