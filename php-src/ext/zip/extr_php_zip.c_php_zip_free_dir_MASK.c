
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * za; } ;
typedef TYPE_1__ zip_rsrc ;
struct TYPE_5__ {int * ptr; } ;
typedef TYPE_2__ zend_resource ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_resource *VAR_1)
{
 zip_rsrc * VAR_2 = (zip_rsrc *) VAR_1->ptr;

 if (VAR_2) {
  if (VAR_2->za) {
   if (FUNC_2(VAR_2->za) != 0) {
    FUNC_1(((void*)0), VAR_0, "Cannot destroy the zip context");
   }
   VAR_2->za = ((void*)0);
  }

  FUNC_0(VAR_1->ptr);

  VAR_1->ptr = ((void*)0);
 }
}
