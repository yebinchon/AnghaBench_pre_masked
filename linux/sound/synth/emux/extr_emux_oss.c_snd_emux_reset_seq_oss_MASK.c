
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_oss_arg {struct snd_emux_port* private_data; } ;
struct snd_emux_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emux_port*) ;

__attribute__((used)) static int
FUNC_2(struct snd_seq_oss_arg *VAR_1)
{
 struct snd_emux_port *VAR_2;

 if (FUNC_0(!VAR_1))
  return -VAR_0;
 VAR_2 = VAR_1->private_data;
 if (FUNC_0(!VAR_2))
  return -VAR_0;
 FUNC_1(VAR_2);
 return 0;
}
