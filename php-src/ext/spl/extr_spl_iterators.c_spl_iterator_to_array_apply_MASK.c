
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {TYPE_1__* funcs; } ;
typedef TYPE_2__ zend_object_iterator ;
struct TYPE_6__ {int (* get_current_key ) (TYPE_2__*,int *) ;int * (* get_current_data ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int VAR_2 ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(zend_object_iterator *VAR_3, void *VAR_4)
{
 zval *VAR_5, *VAR_6 = (zval*)VAR_4;

 VAR_5 = VAR_3->funcs->get_current_data(VAR_3);
 if (FUNC_0(VAR_2)) {
  return VAR_1;
 }
 if (VAR_5 == ((void*)0)) {
  return VAR_1;
 }
 if (VAR_3->funcs->get_current_key) {
  zval VAR_7;
  VAR_3->funcs->get_current_key(VAR_3, &VAR_7);
  if (FUNC_0(VAR_2)) {
   return VAR_1;
  }
  FUNC_4(FUNC_1(VAR_6), &VAR_7, VAR_5);
  FUNC_7(&VAR_7);
 } else {
  FUNC_2(VAR_5);
  FUNC_3(VAR_6, VAR_5);
 }
 return VAR_0;
}
