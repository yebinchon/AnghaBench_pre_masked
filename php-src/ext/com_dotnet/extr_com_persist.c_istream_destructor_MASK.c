
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_resource ;
struct TYPE_6__ {scalar_t__ refcount; TYPE_1__* stream; int * res; } ;
typedef TYPE_2__ php_istream ;
struct TYPE_5__ {int * res; } ;
typedef int IUnknown ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(php_istream *VAR_0)
{
 if (VAR_0->res) {
  zend_resource *VAR_1 = VAR_0->res;
  VAR_0->res = ((void*)0);
  FUNC_2(VAR_1);
  return;
 }

 if (VAR_0->refcount > 0) {
  FUNC_0((IUnknown*)VAR_0, 0);
 }

 FUNC_2(VAR_0->stream->res);

 FUNC_1(VAR_0);
}
