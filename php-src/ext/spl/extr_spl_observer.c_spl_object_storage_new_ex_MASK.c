
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int zval ;
struct TYPE_22__ {int * handlers; } ;
typedef TYPE_2__ zend_object ;
struct TYPE_23__ {struct TYPE_23__* parent; int function_table; } ;
typedef TYPE_3__ zend_class_entry ;
struct TYPE_24__ {TYPE_2__ std; TYPE_8__* fptr_get_hash; int storage; scalar_t__ pos; } ;
typedef TYPE_4__ spl_SplObjectStorage ;
struct TYPE_21__ {TYPE_3__* scope; } ;
struct TYPE_25__ {TYPE_1__ common; } ;


 TYPE_4__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ,int *,int ,int ) ;
 TYPE_8__* FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static zend_object *FUNC_9(zend_class_entry *VAR_3, zend_object *VAR_4)
{
 spl_SplObjectStorage *VAR_5;
 zend_class_entry *VAR_6 = VAR_3;

 VAR_5 = FUNC_0(sizeof(spl_SplObjectStorage) + FUNC_7(VAR_6));
 FUNC_1(VAR_5, 0, sizeof(spl_SplObjectStorage) - sizeof(zval));
 VAR_5->pos = 0;

 FUNC_8(&VAR_5->std, VAR_3);
 FUNC_2(&VAR_5->std, VAR_3);

 FUNC_5(&VAR_5->storage, 0, ((void*)0), VAR_2, 0);

 VAR_5->std.handlers = &VAR_1;

 while (VAR_6) {
  if (VAR_6 == VAR_0) {
   if (VAR_3 != VAR_0) {
    VAR_5->fptr_get_hash = FUNC_6(&VAR_3->function_table, "gethash", sizeof("gethash") - 1);
    if (VAR_5->fptr_get_hash->common.scope == VAR_0) {
     VAR_5->fptr_get_hash = ((void*)0);
    }
   }
   break;
  }

  VAR_6 = VAR_6->parent;
 }

 if (VAR_4) {
  spl_SplObjectStorage *VAR_7 = FUNC_4(VAR_4);
  FUNC_3(VAR_5, VAR_7);
 }

 return &VAR_5->std;
}
