
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_cs43xx {int * cs4398_regs; } ;
struct snd_info_buffer {int dummy; } ;
struct oxygen {struct xonar_cs43xx* model_data; } ;


 int FUNC_0 (struct xonar_cs43xx*,struct snd_info_buffer*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_0,
         struct snd_info_buffer *VAR_1)
{
 struct xonar_cs43xx *VAR_2 = VAR_0->model_data;
 unsigned int VAR_3;

 FUNC_1(VAR_1, "\nCS4398: 7?");
 for (VAR_3 = 2; VAR_3 < 8; ++VAR_3)
  FUNC_1(VAR_1, " %02x", VAR_2->cs4398_regs[VAR_3]);
 FUNC_1(VAR_1, "\n");
 FUNC_0(VAR_2, VAR_1);
}
