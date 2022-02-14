
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; int port; } ;
struct snd_seq_port_info {int client; TYPE_1__ addr; } ;
struct snd_seq_client_info {int client; TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_seq_port_info*) ;
 struct snd_seq_port_info* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int ,struct snd_seq_port_info*) ;
 int FUNC_3 (struct snd_seq_port_info*) ;

int
FUNC_4(int VAR_4)
{
 struct snd_seq_client_info *VAR_5;
 struct snd_seq_port_info *VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (! VAR_5 || ! VAR_6) {
  FUNC_0(VAR_5);
  FUNC_0(VAR_6);
  return -VAR_0;
 }
 VAR_5->client = -1;
 while (FUNC_2(VAR_4, VAR_2, VAR_5) == 0) {
  if (VAR_5->client == VAR_4)
   continue;
  VAR_6->addr.client = VAR_5->client;
  VAR_6->addr.port = -1;
  while (FUNC_2(VAR_4, VAR_3, VAR_6) == 0)
   FUNC_3(VAR_6);
 }
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 return 0;
}
