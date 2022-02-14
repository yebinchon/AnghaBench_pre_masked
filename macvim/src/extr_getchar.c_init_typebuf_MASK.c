
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tb_change_cnt; scalar_t__ tb_off; scalar_t__ tb_len; int tb_buflen; int tb_noremap; int * tb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_0()
{
    if (VAR_2.tb_buf == ((void*)0))
    {
 VAR_2.tb_buf = VAR_3;
 VAR_2.tb_noremap = VAR_1;
 VAR_2.tb_buflen = VAR_0;
 VAR_2.tb_len = 0;
 VAR_2.tb_off = 0;
 VAR_2.tb_change_cnt = 1;
    }
}
