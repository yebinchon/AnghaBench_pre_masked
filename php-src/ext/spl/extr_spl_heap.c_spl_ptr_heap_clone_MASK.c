
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_size; int count; int elem_size; int (* ctor ) (int ) ;int elements; int flags; int cmp; int dtor; } ;
typedef TYPE_1__ spl_ptr_heap ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static spl_ptr_heap *FUNC_5(spl_ptr_heap *VAR_0) {
 int VAR_1;

 spl_ptr_heap *VAR_2 = FUNC_0(sizeof(spl_ptr_heap));

 VAR_2->dtor = VAR_0->dtor;
 VAR_2->ctor = VAR_0->ctor;
 VAR_2->cmp = VAR_0->cmp;
 VAR_2->max_size = VAR_0->max_size;
 VAR_2->count = VAR_0->count;
 VAR_2->flags = VAR_0->flags;
 VAR_2->elem_size = VAR_0->elem_size;

 VAR_2->elements = FUNC_2(VAR_0->elem_size, VAR_0->max_size, 0);
 FUNC_1(VAR_2->elements, VAR_0->elements, VAR_0->elem_size * VAR_0->max_size);

 for (VAR_1 = 0; VAR_1 < VAR_2->count; ++VAR_1) {
  VAR_2->ctor(FUNC_3(VAR_2, VAR_1));
 }

 return VAR_2;
}
