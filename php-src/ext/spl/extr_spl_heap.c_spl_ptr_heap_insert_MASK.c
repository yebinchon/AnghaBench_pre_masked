
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; int max_size; size_t elem_size; scalar_t__ (* cmp ) (void*,void*,void*) ;int flags; scalar_t__ elements; } ;
typedef TYPE_1__ spl_ptr_heap ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,size_t) ;
 void* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,void*,void*) ;
 scalar_t__ FUNC_5 (void*,void*,void*) ;

__attribute__((used)) static void FUNC_6(spl_ptr_heap *VAR_2, void *VAR_3, void *VAR_4) {
 int VAR_5;

 if (VAR_2->count+1 > VAR_2->max_size) {
  size_t VAR_6 = VAR_2->max_size * VAR_2->elem_size;

  VAR_2->elements = FUNC_1(VAR_2->elements, 2 * VAR_6);
  FUNC_2((char *) VAR_2->elements + VAR_6, 0, VAR_6);
  VAR_2->max_size *= 2;
 }


 for (VAR_5 = VAR_2->count; VAR_5 > 0 && VAR_2->cmp(FUNC_3(VAR_2, (VAR_5-1)/2), VAR_3, VAR_4) < 0; VAR_5 = (VAR_5-1)/2) {
  FUNC_4(VAR_2, FUNC_3(VAR_2, VAR_5), FUNC_3(VAR_2, (VAR_5-1)/2));
 }
 VAR_2->count++;

 if (FUNC_0(VAR_1)) {

  VAR_2->flags |= VAR_0;
 }

 FUNC_4(VAR_2, FUNC_3(VAR_2, VAR_5), VAR_3);
}
