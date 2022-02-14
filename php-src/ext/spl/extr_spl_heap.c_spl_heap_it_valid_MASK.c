
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_2__ zend_object_iterator ;
struct TYPE_7__ {TYPE_1__* heap; } ;
struct TYPE_5__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(zend_object_iterator *VAR_2)
{
 return ((FUNC_0(&VAR_2->data))->heap->count != 0 ? VAR_1 : VAR_0);
}
