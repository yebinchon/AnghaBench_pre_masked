
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chars_in_buf; int block_loc; int block_buf; scalar_t__ analysis_valid; } ;
typedef TYPE_1__ lz_info ;


 int FUNC_0 (int,int,int) ;

void FUNC_1(lz_info *VAR_0)
{
  int VAR_1 = VAR_0->chars_in_buf - VAR_0->block_loc;
  FUNC_0(VAR_0->block_buf, VAR_0->block_buf + VAR_0->block_loc, VAR_1);
  VAR_0->chars_in_buf = VAR_1;
  VAR_0->block_loc = 0;
  VAR_0->analysis_valid = 0;
}
