
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tb_buf; scalar_t__ tb_noremap; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3()
{
    if (VAR_2.tb_buf == VAR_3)
 FUNC_0(FUNC_1(VAR_0), "Free typebuf 1");
    else
 FUNC_2(VAR_2.tb_buf);
    if (VAR_2.tb_noremap == VAR_1)
 FUNC_0(FUNC_1(VAR_0), "Free typebuf 2");
    else
 FUNC_2(VAR_2.tb_noremap);
}
