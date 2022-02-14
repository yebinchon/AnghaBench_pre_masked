
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client_port {int dummy; } ;
struct snd_seq_client {int dummy; } ;
struct snd_seq_addr {int port; int client; } ;


 int FUNC_0 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_1 (int ) ;
 struct snd_seq_client_port* FUNC_2 (struct snd_seq_client*,int ) ;

__attribute__((used)) static struct snd_seq_client_port *FUNC_3(struct snd_seq_addr *VAR_0,
         struct snd_seq_client **VAR_1)
{
 struct snd_seq_client_port *VAR_2;
 *VAR_1 = FUNC_1(VAR_0->client);
 if (*VAR_1) {
  VAR_2 = FUNC_2(*VAR_1, VAR_0->port);
  if (! VAR_2) {
   FUNC_0(*VAR_1);
   *VAR_1 = ((void*)0);
  }
  return VAR_2;
 }
 return ((void*)0);
}
