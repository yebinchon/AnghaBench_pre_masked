
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int client; } ;
struct snd_seq_port_info {TYPE_1__ addr; } ;
struct snd_seq_client_port {TYPE_1__ addr; } ;
struct snd_seq_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_seq_client_port*,struct snd_seq_port_info*) ;
 struct snd_seq_client_port* FUNC_3 (struct snd_seq_client*,struct snd_seq_port_info*) ;
 int FUNC_4 (struct snd_seq_client_port*) ;

__attribute__((used)) static int FUNC_5(struct snd_seq_client *VAR_2,
      void *VAR_3)
{
 struct snd_seq_port_info *VAR_4 = VAR_3;
 struct snd_seq_client *VAR_5;
 struct snd_seq_client_port *VAR_6 = ((void*)0);

 VAR_5 = FUNC_1(VAR_4->addr.client);
 if (VAR_5 == ((void*)0))
  return -VAR_1;


 VAR_4->addr.port++;
 VAR_6 = FUNC_3(VAR_5, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }


 VAR_4->addr = VAR_6->addr;
 FUNC_2(VAR_6, VAR_4);
 FUNC_4(VAR_6);
 FUNC_0(VAR_5);

 return 0;
}
