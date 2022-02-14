
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xonar_wm87x6 {int* wm8776_regs; } ;
struct oxygen {int* dac_volume; struct xonar_wm87x6* model_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct oxygen*,size_t,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_4)
{
 struct xonar_wm87x6 *VAR_5 = VAR_4->model_data;
 u8 VAR_6;

 if (VAR_4->dac_volume[0] == VAR_4->dac_volume[1]) {
  if (VAR_4->dac_volume[0] != VAR_5->wm8776_regs[VAR_0] ||
      VAR_4->dac_volume[1] != VAR_5->wm8776_regs[VAR_2]) {
   FUNC_0(VAR_4, VAR_1,
         VAR_4->dac_volume[0] | VAR_3);
   VAR_5->wm8776_regs[VAR_0] = VAR_4->dac_volume[0];
   VAR_5->wm8776_regs[VAR_2] = VAR_4->dac_volume[0];
  }
 } else {
  VAR_6 = (VAR_4->dac_volume[0] !=
        VAR_5->wm8776_regs[VAR_0]) << 0;
  VAR_6 |= (VAR_4->dac_volume[1] !=
         VAR_5->wm8776_regs[VAR_0]) << 1;
  if (VAR_6 & 1)
   FUNC_0(VAR_4, VAR_0, VAR_4->dac_volume[0] |
         ((VAR_6 & 2) ? 0 : VAR_3));
  if (VAR_6 & 2)
   FUNC_0(VAR_4, VAR_2,
         VAR_4->dac_volume[1] | VAR_3);
 }
}
