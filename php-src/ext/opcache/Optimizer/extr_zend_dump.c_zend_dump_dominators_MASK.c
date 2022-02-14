
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
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__ const*,int,int ) ;
 int FUNC_2 (int const*) ;

void FUNC_3(const zend_op_array *VAR_2, const zend_cfg *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1, "\nDOMINATORS-TREE for \"");
 FUNC_2(VAR_2);
 FUNC_0(VAR_1, "\"\n");
 for (VAR_4 = 0; VAR_4 < VAR_3->blocks_count; VAR_4++) {
  zend_basic_block *VAR_5 = VAR_3->blocks + VAR_4;
  if (VAR_5->flags & VAR_0) {
   FUNC_1(VAR_3, VAR_4, 0);
  }
 }
}
