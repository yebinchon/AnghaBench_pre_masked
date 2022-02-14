
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int srtctl; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct dai_ctrl_blk {TYPE_2__ dirty; int srtctl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2)
{
 struct dai_ctrl_blk *VAR_3 = VAR_1;

 FUNC_0(&VAR_3->srtctl, VAR_0, VAR_2 ? 1 : 0);
 VAR_3->dirty.bf.srtctl = 1;
 return 0;
}
