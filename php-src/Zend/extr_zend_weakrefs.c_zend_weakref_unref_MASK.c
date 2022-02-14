
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int * referent; } ;
typedef TYPE_1__ zend_weakref ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(zval *VAR_1) {
 zend_weakref *VAR_2 = (zend_weakref*) FUNC_1(VAR_1);

 FUNC_0(VAR_2->referent, VAR_0);

 VAR_2->referent = ((void*)0);
}
