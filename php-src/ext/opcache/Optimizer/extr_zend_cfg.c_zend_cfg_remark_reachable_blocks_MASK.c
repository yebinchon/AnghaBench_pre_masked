
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_op_array ;
struct TYPE_5__ {int blocks_count; TYPE_2__* blocks; } ;
typedef TYPE_1__ zend_cfg ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ zend_basic_block ;


 int VAR_0 ;
 int FUNC_0 (int const*,TYPE_1__*,int) ;

void FUNC_1(const zend_op_array *VAR_1, zend_cfg *VAR_2)
{
 zend_basic_block *VAR_3 = VAR_2->blocks;
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->blocks_count; VAR_4++) {
  if (VAR_3[VAR_4].flags & VAR_0) {
   VAR_5 = VAR_4;
   VAR_4++;
   break;
  }
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->blocks_count; VAR_4++) {
  VAR_3[VAR_4].flags = 0;
 }

 FUNC_0(VAR_1, VAR_2, VAR_5);
}
