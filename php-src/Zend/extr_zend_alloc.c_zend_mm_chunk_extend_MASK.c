
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* storage; } ;
typedef TYPE_2__ zend_mm_heap ;
struct TYPE_6__ {int (* chunk_extend ) (TYPE_4__*,void*,size_t,size_t) ;} ;
struct TYPE_8__ {TYPE_1__ handlers; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*,size_t,size_t,int ) ;
 int FUNC_3 (TYPE_4__*,void*,size_t,size_t) ;
 int * FUNC_4 (char*,size_t) ;

__attribute__((used)) static int FUNC_5(zend_mm_heap *VAR_1, void *VAR_2, size_t VAR_3, size_t VAR_4)
{
 return (FUNC_4((char*)VAR_2 + VAR_3, VAR_4 - VAR_3) != ((void*)0));



}
