
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ptr; } ;
typedef TYPE_1__ zend_resource ;
struct TYPE_5__ {int magic; } ;
typedef TYPE_2__ php_fileinfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(zend_resource *VAR_0)
{
 if (VAR_0->ptr) {
  php_fileinfo *VAR_1 = (php_fileinfo *) VAR_0->ptr;
  FUNC_1(VAR_1->magic);
  FUNC_0(VAR_0->ptr);
  VAR_0->ptr = ((void*)0);
 }
}
