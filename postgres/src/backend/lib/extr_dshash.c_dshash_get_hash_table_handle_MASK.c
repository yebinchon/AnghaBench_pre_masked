
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dshash_table_handle ;
struct TYPE_5__ {TYPE_1__* control; } ;
typedef TYPE_2__ dshash_table ;
struct TYPE_4__ {scalar_t__ magic; int handle; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

dshash_table_handle
FUNC_1(dshash_table *VAR_1)
{
 FUNC_0(VAR_1->control->magic == VAR_0);

 return VAR_1->control->handle;
}
