
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zval ;
typedef int zend_error_handling ;
struct TYPE_14__ {TYPE_6__* constructor; } ;
typedef TYPE_2__ zend_class_entry ;
struct TYPE_15__ {int std; TYPE_2__* info_class; } ;
typedef TYPE_3__ spl_filesystem_object ;
struct TYPE_13__ {scalar_t__ scope; } ;
struct TYPE_16__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,size_t,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*,TYPE_6__**,char*,int *,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,char*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static spl_filesystem_object *FUNC_13(spl_filesystem_object *VAR_3, char *VAR_4, size_t VAR_5, int VAR_6, zend_class_entry *VAR_7, zval *VAR_8)
{
 spl_filesystem_object *VAR_9;
 zval VAR_10;
 zend_error_handling VAR_11;

 if (!VAR_4 || !VAR_5) {






  if (VAR_4 && !VAR_6) {
   FUNC_3(VAR_4);
  }
  VAR_5 = 1;
  VAR_4 = "/";

  return ((void*)0);
 }

 FUNC_8(VAR_0, VAR_1, &VAR_11);

 VAR_7 = VAR_7 ? VAR_7 : VAR_3->info_class;

 FUNC_11(VAR_7);

 VAR_9 = FUNC_4(FUNC_6(VAR_7));
 FUNC_0(VAR_8, &VAR_9->std);

 if (VAR_7->constructor->common.scope != VAR_2) {
  FUNC_1(&VAR_10, VAR_4, VAR_5);
  FUNC_7(FUNC_2(VAR_8), VAR_7, &VAR_7->constructor, "__construct", ((void*)0), &VAR_10);
  FUNC_12(&VAR_10);
 } else {
  FUNC_5(VAR_9, VAR_4, VAR_5, VAR_6);
 }

 FUNC_9(&VAR_11);
 return VAR_9;
}
