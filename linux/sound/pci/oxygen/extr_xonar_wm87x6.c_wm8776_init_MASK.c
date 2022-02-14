
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {int* wm8776_regs; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct oxygen*) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_16)
{
 struct xonar_wm87x6 *VAR_17 = VAR_16->model_data;

 VAR_17->wm8776_regs[VAR_9] = (0x79 - 60) | VAR_12;
 VAR_17->wm8776_regs[VAR_11] = (0x79 - 60) | VAR_12;
 VAR_17->wm8776_regs[VAR_1] =
  VAR_0 | VAR_7 | VAR_3;
 VAR_17->wm8776_regs[VAR_13] =
  VAR_5 | VAR_8;
 VAR_17->wm8776_regs[VAR_14] = VAR_10;
 VAR_17->wm8776_regs[VAR_2] = 0xa5 | VAR_15;
 VAR_17->wm8776_regs[VAR_6] = 0xa5 | VAR_15;
 VAR_17->wm8776_regs[VAR_4] = 0x001;
 FUNC_0(VAR_16);
}
