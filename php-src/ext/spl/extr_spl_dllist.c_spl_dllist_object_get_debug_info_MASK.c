
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_7__ {int data; struct TYPE_7__* next; } ;
typedef TYPE_2__ spl_ptr_llist_element ;
struct TYPE_9__ {int properties; } ;
struct TYPE_8__ {int flags; TYPE_5__ std; TYPE_1__* llist; } ;
typedef TYPE_3__ spl_dllist_object ;
typedef int copy_ctor_func_t ;
struct TYPE_6__ {TYPE_2__* head; } ;
typedef int HashTable ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int * FUNC_10 (int) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static HashTable* FUNC_12(zend_object *VAR_2, int *VAR_3)
{
 spl_dllist_object *VAR_4 = FUNC_6(VAR_2);
 spl_ptr_llist_element *VAR_5 = VAR_4->llist->head, *VAR_6;
 zval VAR_7, VAR_8;
 zend_string *VAR_9;
 int VAR_10 = 0;
 HashTable *VAR_11;
 *VAR_3 = 1;

 if (!VAR_4->std.properties) {
  FUNC_5(&VAR_4->std);
 }

 VAR_11 = FUNC_10(1);
 FUNC_9(VAR_11, VAR_4->std.properties, (copy_ctor_func_t) VAR_1);

 VAR_9 = FUNC_7(VAR_0, "flags", sizeof("flags")-1);
 FUNC_0(&VAR_7, VAR_4->flags);
 FUNC_8(VAR_11, VAR_9, &VAR_7);
 FUNC_11(VAR_9, 0);

 FUNC_4(&VAR_8);

 while (VAR_5) {
  VAR_6 = VAR_5->next;

  FUNC_3(&VAR_8, VAR_10, &VAR_5->data);
  if (FUNC_2(VAR_5->data)) {
   FUNC_1(VAR_5->data);
  }
  VAR_10++;

  VAR_5 = VAR_6;
 }

 VAR_9 = FUNC_7(VAR_0, "dllist", sizeof("dllist")-1);
 FUNC_8(VAR_11, VAR_9, &VAR_8);
 FUNC_11(VAR_9, 0);

 return VAR_11;
}
