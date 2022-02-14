
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * zf; } ;
typedef TYPE_1__ zip_read_rsrc ;
struct TYPE_6__ {int * ptr; } ;
typedef TYPE_2__ zend_resource ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(zend_resource *VAR_0)
{
 zip_read_rsrc *VAR_1 = (zip_read_rsrc *) VAR_0->ptr;

 if (VAR_1) {
  if (VAR_1->zf) {
   FUNC_1(VAR_1->zf);
   VAR_1->zf = ((void*)0);
  }
  FUNC_0(VAR_1);
  VAR_0->ptr = ((void*)0);
 }
}
