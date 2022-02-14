
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_i2s_out {int max_i2s_chan; int active_channels; int rst; int force_clk_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct img_i2s_out*,int) ;
 int FUNC_1 (struct img_i2s_out*,int ,int ) ;
 int FUNC_2 (struct img_i2s_out*,int,int,int ) ;
 int FUNC_3 (struct img_i2s_out*) ;
 int FUNC_4 (struct img_i2s_out*,int ) ;
 int FUNC_5 (struct img_i2s_out*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct img_i2s_out *VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_4(VAR_6, VAR_2) &
   ~VAR_5 &
   ~VAR_4;

 if (!VAR_6->force_clk_active)
  VAR_8 &= ~VAR_3;

 VAR_9 = FUNC_1(VAR_6, 0, VAR_1) &
   ~VAR_0;

 FUNC_6(VAR_6->rst);
 FUNC_7(VAR_6->rst);

 for (VAR_7 = 0; VAR_7 < VAR_6->max_i2s_chan; VAR_7++)
  FUNC_2(VAR_6, VAR_7, VAR_9, VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_6->active_channels; VAR_7++)
  FUNC_0(VAR_6, VAR_7);

 FUNC_5(VAR_6, VAR_8, VAR_2);
 FUNC_3(VAR_6);
}
