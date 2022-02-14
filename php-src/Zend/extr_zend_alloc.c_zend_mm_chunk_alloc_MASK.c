
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t zend_uintptr_t ;
struct TYPE_7__ {TYPE_4__* storage; } ;
typedef TYPE_2__ zend_mm_heap ;
struct TYPE_6__ {void* (* chunk_alloc ) (TYPE_4__*,size_t,size_t) ;} ;
struct TYPE_8__ {TYPE_1__ handlers; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (TYPE_4__*,size_t,size_t) ;
 void* FUNC_3 (size_t,size_t) ;

__attribute__((used)) static void *FUNC_4(zend_mm_heap *VAR_0, size_t VAR_1, size_t VAR_2)
{







 return FUNC_3(VAR_1, VAR_2);
}
