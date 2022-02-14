
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client {int dummy; } ;
struct ioctl_handler {unsigned int cmd; int (* func ) (struct snd_seq_client*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct snd_seq_client* FUNC_2 (int) ;
 struct ioctl_handler* VAR_2 ;
 int FUNC_3 (char*,unsigned int,int ,int ) ;
 int FUNC_4 (struct snd_seq_client*,void*) ;

int FUNC_5(int VAR_3, unsigned int VAR_4, void *VAR_5)
{
 const struct ioctl_handler *VAR_6;
 struct snd_seq_client *VAR_7;

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 for (VAR_6 = VAR_2; VAR_6->cmd > 0; ++VAR_6) {
  if (VAR_6->cmd == VAR_4)
   return VAR_6->func(VAR_7, VAR_5);
 }

 FUNC_3("ALSA: seq unknown ioctl() 0x%x (type='%c', number=0x%02x)\n",
   VAR_4, FUNC_1(VAR_4), FUNC_0(VAR_4));
 return -VAR_0;
}
