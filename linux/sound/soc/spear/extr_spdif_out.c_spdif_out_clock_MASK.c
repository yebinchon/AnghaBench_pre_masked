
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_out_dev {scalar_t__ io_base; int clk; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct spdif_out_dev *VAR_3, u32 VAR_4,
  u32 VAR_5)
{
 u32 VAR_6, VAR_7;

 FUNC_2(VAR_3->clk, VAR_4);
 VAR_6 = FUNC_0(FUNC_1(VAR_3->clk), (VAR_5 * 128));

 VAR_7 = FUNC_3(VAR_3->io_base + VAR_2);
 VAR_7 &= ~VAR_0;
 VAR_7 |= (VAR_6 << VAR_1) & VAR_0;
 FUNC_4(VAR_7, VAR_3->io_base + VAR_2);
}
