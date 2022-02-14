
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* storage; } ;
typedef TYPE_2__ zend_mm_heap ;
struct TYPE_6__ {int (* chunk_truncate ) (TYPE_4__*,void*,size_t,size_t) ;} ;
struct TYPE_8__ {TYPE_1__ handlers; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,void*,size_t,size_t) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static int FUNC_3(zend_mm_heap *VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3)
{
 FUNC_2((char*)VAR_1 + VAR_3, VAR_2 - VAR_3);
 return 1;



}
