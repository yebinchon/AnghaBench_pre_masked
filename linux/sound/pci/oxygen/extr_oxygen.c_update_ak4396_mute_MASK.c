
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxygen {scalar_t__ dac_mute; struct generic_data* model_data; } ;
struct generic_data {int** ak4396_regs; unsigned int dacs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxygen*,unsigned int,size_t,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_2)
{
 struct generic_data *VAR_3 = VAR_2->model_data;
 unsigned int VAR_4;
 u8 VAR_5;

 VAR_5 = VAR_3->ak4396_regs[0][VAR_0] & ~VAR_1;
 if (VAR_2->dac_mute)
  VAR_5 |= VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_3->dacs; ++VAR_4)
  FUNC_0(VAR_2, VAR_4, VAR_0, VAR_5);
}
