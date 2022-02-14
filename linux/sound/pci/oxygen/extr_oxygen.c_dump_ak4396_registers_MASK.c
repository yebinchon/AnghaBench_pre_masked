
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct oxygen {struct generic_data* model_data; } ;
struct generic_data {unsigned int dacs; int ** ak4396_regs; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0,
      struct snd_info_buffer *VAR_1)
{
 struct generic_data *VAR_2 = VAR_0->model_data;
 unsigned int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->dacs; ++VAR_3) {
  FUNC_0(VAR_1, "\nAK4396 %u:", VAR_3 + 1);
  for (VAR_4 = 0; VAR_4 < 5; ++VAR_4)
   FUNC_0(VAR_1, " %02x", VAR_2->ak4396_regs[VAR_3][VAR_4]);
 }
 FUNC_0(VAR_1, "\n");
}
