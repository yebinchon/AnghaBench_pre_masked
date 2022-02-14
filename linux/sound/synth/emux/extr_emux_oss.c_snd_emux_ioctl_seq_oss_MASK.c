
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_oss_arg {struct snd_emux_port* private_data; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct snd_emux {int memhdr; int sflist; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct snd_seq_oss_arg *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct snd_emux_port *VAR_4;
 struct snd_emux *VAR_5;

 if (FUNC_0(!VAR_1))
  return -VAR_0;
 VAR_4 = VAR_1->private_data;
 if (FUNC_0(!VAR_4))
  return -VAR_0;

 VAR_5 = VAR_4->emu;
 if (FUNC_0(!VAR_5))
  return -VAR_0;

 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_5->sflist);
  return 0;

 case 128:
  if (VAR_5->memhdr)
   return FUNC_2(VAR_5->memhdr);
  return 0;
 }

 return 0;
}
