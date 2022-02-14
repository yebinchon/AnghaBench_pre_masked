
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int atxcsl; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct dao_ctrl_blk {unsigned int atxcsl; TYPE_2__ dirty; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 ((struct dao_ctrl_blk *)VAR_0)->atxcsl = VAR_1;
 ((struct dao_ctrl_blk *)VAR_0)->dirty.bf.atxcsl = 1;
 return 0;
}
