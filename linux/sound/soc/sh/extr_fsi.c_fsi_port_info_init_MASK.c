
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_fsi_port_info {int flags; } ;
struct fsi_priv {int spdif; int clk_cpg; int enable_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct fsi_priv *VAR_3,
          struct sh_fsi_port_info *VAR_4)
{
 if (VAR_4->flags & VAR_2)
  VAR_3->spdif = 1;

 if (VAR_4->flags & VAR_0)
  VAR_3->clk_cpg = 1;

 if (VAR_4->flags & VAR_1)
  VAR_3->enable_stream = 1;
}
