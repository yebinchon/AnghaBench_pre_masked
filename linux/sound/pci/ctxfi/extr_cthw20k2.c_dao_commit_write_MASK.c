
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw {int dummy; } ;
struct TYPE_3__ {scalar_t__ atxcsl; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct dao_ctrl_blk {TYPE_2__ dirty; int atxcsl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hw*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct hw *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 struct dao_ctrl_blk *VAR_4 = VAR_3;

 if (VAR_4->dirty.bf.atxcsl) {
  if (VAR_2 < 4) {

   FUNC_0(VAR_1, VAR_0+0x40*VAR_2,
       VAR_4->atxcsl);
  }
  VAR_4->dirty.bf.atxcsl = 0;
 }

 return 0;
}
