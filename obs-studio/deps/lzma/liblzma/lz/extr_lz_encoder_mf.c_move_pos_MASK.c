
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cyclic_pos; scalar_t__ cyclic_size; scalar_t__ read_pos; scalar_t__ write_pos; scalar_t__ offset; } ;
typedef TYPE_1__ lzma_mf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(lzma_mf *VAR_1)
{
 if (++VAR_1->cyclic_pos == VAR_1->cyclic_size)
  VAR_1->cyclic_pos = 0;

 ++VAR_1->read_pos;
 FUNC_0(VAR_1->read_pos <= VAR_1->write_pos);

 if (FUNC_2(VAR_1->read_pos + VAR_1->offset == VAR_0))
  FUNC_1(VAR_1);
}
