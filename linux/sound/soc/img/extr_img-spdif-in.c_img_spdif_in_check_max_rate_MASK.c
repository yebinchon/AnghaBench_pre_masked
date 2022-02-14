
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_spdif_in {int clk_sys; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct img_spdif_in *VAR_1,
  unsigned int VAR_2, unsigned long *VAR_3)
{
 unsigned long VAR_4, VAR_5;


 VAR_4 = VAR_2 * 2 * 32 * 24;

 VAR_5 = FUNC_0(VAR_1->clk_sys);

 if (VAR_5 < VAR_4)
  return -VAR_0;

 *VAR_3 = VAR_5;

 return 0;
}
