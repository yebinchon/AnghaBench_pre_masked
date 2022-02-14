
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ read_pos; scalar_t__ write_pos; int pending; } ;
typedef TYPE_1__ lzma_mf ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(lzma_mf *VAR_0)
{
 ++VAR_0->read_pos;
 FUNC_0(VAR_0->read_pos <= VAR_0->write_pos);
 ++VAR_0->pending;
}
