
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {struct generic_data* model_data; } ;
struct generic_data {int** ak4396_regs; unsigned int dacs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct oxygen*,unsigned int,size_t,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_8,
         struct snd_pcm_hw_params *VAR_9)
{
 struct generic_data *VAR_10 = VAR_8->model_data;
 unsigned int VAR_11;
 u8 VAR_12;

 VAR_12 = VAR_10->ak4396_regs[0][VAR_1] & ~VAR_3;
 if (FUNC_2(VAR_9) <= 54000)
  VAR_12 |= VAR_4;
 else if (FUNC_2(VAR_9) <= 108000)
  VAR_12 |= VAR_2;
 else
  VAR_12 |= VAR_5;

 FUNC_1(1);

 if (VAR_12 != VAR_10->ak4396_regs[0][VAR_1]) {
  for (VAR_11 = 0; VAR_11 < VAR_10->dacs; ++VAR_11) {
   FUNC_0(VAR_8, VAR_11, VAR_0,
         VAR_6);
   FUNC_0(VAR_8, VAR_11, VAR_1, VAR_12);
   FUNC_0(VAR_8, VAR_11, VAR_0,
         VAR_6 | VAR_7);
  }
 }
}
