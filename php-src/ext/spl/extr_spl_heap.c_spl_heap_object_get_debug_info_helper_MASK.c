
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
typedef int zend_class_entry ;
typedef int spl_pqueue_elem ;
struct TYPE_7__ {int properties; } ;
struct TYPE_5__ {TYPE_3__* heap; int flags; TYPE_4__ std; } ;
typedef TYPE_1__ spl_heap_object ;
typedef int copy_ctor_func_t ;
struct TYPE_6__ {int flags; int count; } ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int * VAR_2 ;
 int * FUNC_6 (int *,char*,int) ;
 void* FUNC_7 (TYPE_3__*,int) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,int *) ;
 int * FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static HashTable* FUNC_15(zend_class_entry *VAR_4, zend_object *VAR_5, int *VAR_6) {
 spl_heap_object *VAR_7 = FUNC_8(VAR_5);
 zval VAR_8, VAR_9;
 zend_string *VAR_10;
 HashTable *VAR_11;
 int VAR_12;

 *VAR_6 = 1;

 if (!VAR_7->std.properties) {
  FUNC_5(&VAR_7->std);
 }

 VAR_11 = FUNC_13(FUNC_11(VAR_7->std.properties) + 1);
 FUNC_10(VAR_11, VAR_7->std.properties, (copy_ctor_func_t) VAR_3);

 VAR_10 = FUNC_6(VAR_4, "flags", sizeof("flags")-1);
 FUNC_1(&VAR_8, VAR_7->flags);
 FUNC_12(VAR_11, VAR_10, &VAR_8);
 FUNC_14(VAR_10, 0);

 VAR_10 = FUNC_6(VAR_4, "isCorrupted", sizeof("isCorrupted")-1);
 FUNC_0(&VAR_8, VAR_7->heap->flags&VAR_0);
 FUNC_12(VAR_11, VAR_10, &VAR_8);
 FUNC_14(VAR_10, 0);

 FUNC_4(&VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_7->heap->count; ++VAR_12) {
  if (VAR_4 == VAR_2) {
   spl_pqueue_elem *VAR_13 = FUNC_7(VAR_7->heap, VAR_12);
   zval VAR_14;
   FUNC_9(&VAR_14, VAR_13, VAR_1);
   FUNC_3(&VAR_9, VAR_12, &VAR_14);
  } else {
   zval *VAR_15 = FUNC_7(VAR_7->heap, VAR_12);
   FUNC_3(&VAR_9, VAR_12, VAR_15);
   FUNC_2(VAR_15);
  }
 }

 VAR_10 = FUNC_6(VAR_4, "heap", sizeof("heap")-1);
 FUNC_12(VAR_11, VAR_10, &VAR_9);
 FUNC_14(VAR_10, 0);

 return VAR_11;
}
