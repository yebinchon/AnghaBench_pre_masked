
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_i2s_in {int active_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct img_i2s_in*,int,int ) ;
 int FUNC_1 (struct img_i2s_in*,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct img_i2s_in *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->active_channels; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
  VAR_4 |= VAR_1;
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0);
  VAR_4 &= ~VAR_1;
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0);
 }
}
