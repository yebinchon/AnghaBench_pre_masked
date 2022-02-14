
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {int * cs2000_regs; scalar_t__ has_cs2000; } ;
struct snd_info_buffer {int dummy; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0,
      struct snd_info_buffer *VAR_1)
{
 struct xonar_pcm179x *VAR_2 = VAR_0->model_data;
 unsigned int VAR_3;

 if (VAR_2->has_cs2000) {
  FUNC_0(VAR_1, "\nCS2000:\n00:   ");
  for (VAR_3 = 1; VAR_3 < 0x10; ++VAR_3)
   FUNC_0(VAR_1, " %02x", VAR_2->cs2000_regs[VAR_3]);
  FUNC_0(VAR_1, "\n10:");
  for (VAR_3 = 0x10; VAR_3 < 0x1f; ++VAR_3)
   FUNC_0(VAR_1, " %02x", VAR_2->cs2000_regs[VAR_3]);
  FUNC_0(VAR_1, "\n");
 }
}
