
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_11__ {int ce; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_12__ {int obj; void* dest; void* src; int error; } ;
typedef TYPE_2__ php_converter_object ;
typedef int UErrorCode ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ,TYPE_2__**) ;
 int FUNC_8 (TYPE_2__*,void*) ;
 void* FUNC_9 (void*,int *,int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static zend_object *FUNC_13(zend_object *VAR_1) {
 php_converter_object *VAR_2, *VAR_3 = FUNC_6(VAR_1);
 zend_object *VAR_4 = FUNC_7(VAR_1->ce, &VAR_2);
 UErrorCode VAR_5 = VAR_0;

 FUNC_5(&VAR_3->error);

 VAR_2->src = FUNC_9(VAR_3->src, ((void*)0), ((void*)0), &VAR_5);
 if (FUNC_2(VAR_5)) {
  VAR_5 = VAR_0;
  VAR_2->dest = FUNC_9(VAR_3->dest, ((void*)0), ((void*)0), &VAR_5);
 }
 if (FUNC_1(VAR_5)) {
  zend_string *VAR_6;
  FUNC_0(VAR_3, "ucnv_safeClone", VAR_5);

  VAR_6 = FUNC_4(&VAR_3->error);
  FUNC_12(((void*)0), FUNC_3(VAR_6), 0);
  FUNC_11(VAR_6, 0);

  return VAR_4;
 }


 FUNC_8(VAR_2, VAR_2->src );
 FUNC_8(VAR_2, VAR_2->dest);

 FUNC_10(&(VAR_2->obj), &(VAR_3->obj));



 return VAR_4;
}
