
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct snd_info_buffer *VAR_3,
         unsigned int VAR_4)
{
 FUNC_0(VAR_3, "    formats [0x%x]:", VAR_4 & 0xf);
 if (VAR_4 & VAR_2)
  FUNC_0(VAR_3, " PCM");
 if (VAR_4 & VAR_1)
  FUNC_0(VAR_3, " FLOAT");
 if (VAR_4 & VAR_0)
  FUNC_0(VAR_3, " AC3");
 FUNC_0(VAR_3, "\n");
}
