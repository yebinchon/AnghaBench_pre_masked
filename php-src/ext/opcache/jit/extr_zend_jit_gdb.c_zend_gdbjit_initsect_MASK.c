
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* zend_gdbjit_initf ) (TYPE_3__*) ;
struct TYPE_8__ {TYPE_1__* sect; } ;
struct TYPE_9__ {scalar_t__ startp; scalar_t__ p; TYPE_2__ obj; } ;
typedef TYPE_3__ zend_gdbjit_ctx ;
struct TYPE_7__ {uintptr_t ofs; uintptr_t size; } ;



__attribute__((used)) static void FUNC_0(zend_gdbjit_ctx *VAR_0, int VAR_1, zend_gdbjit_initf VAR_2)
{
 VAR_0->startp = VAR_0->p;
 VAR_0->obj.sect[VAR_1].ofs = (uintptr_t)((char *)VAR_0->p - (char *)&VAR_0->obj);
 VAR_2(VAR_0);
 VAR_0->obj.sect[VAR_1].size = (uintptr_t)(VAR_0->p - VAR_0->startp);
}
