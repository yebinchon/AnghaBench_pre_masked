
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {int* wm8766_regs; } ;
struct oxygen {int* dac_volume; scalar_t__ dac_mute; struct xonar_wm87x6* model_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct oxygen*,size_t,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_15)
{
 struct xonar_wm87x6 *VAR_16 = VAR_15->model_data;

 FUNC_0(VAR_15, VAR_12, 0);
 FUNC_0(VAR_15, VAR_0, VAR_16->wm8766_regs[VAR_0]);
 FUNC_0(VAR_15, VAR_4, VAR_3 | VAR_5);
 FUNC_0(VAR_15, VAR_1,
       VAR_14 | (VAR_15->dac_mute ? VAR_2 : 0));
 FUNC_0(VAR_15, VAR_6, VAR_15->dac_volume[2]);
 FUNC_0(VAR_15, VAR_9, VAR_15->dac_volume[3]);
 FUNC_0(VAR_15, VAR_7, VAR_15->dac_volume[4]);
 FUNC_0(VAR_15, VAR_10, VAR_15->dac_volume[5]);
 FUNC_0(VAR_15, VAR_8, VAR_15->dac_volume[6]);
 FUNC_0(VAR_15, VAR_11, VAR_15->dac_volume[7] | VAR_13);
}
