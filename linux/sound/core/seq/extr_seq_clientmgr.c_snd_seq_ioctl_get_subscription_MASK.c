
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int client; } ;
struct snd_seq_port_subscribe {int dest; TYPE_1__ sender; } ;
struct snd_seq_client_port {int c_src; } ;
struct snd_seq_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,struct snd_seq_port_subscribe*) ;
 int FUNC_3 (struct snd_seq_client_port*) ;
 struct snd_seq_client_port* FUNC_4 (struct snd_seq_client*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_seq_client *VAR_1,
       void *VAR_2)
{
 struct snd_seq_port_subscribe *VAR_3 = VAR_2;
 int VAR_4;
 struct snd_seq_client *VAR_5 = ((void*)0);
 struct snd_seq_client_port *VAR_6 = ((void*)0);

 VAR_4 = -VAR_0;
 if ((VAR_5 = FUNC_1(VAR_3->sender.client)) == ((void*)0))
  goto __end;
 if ((VAR_6 = FUNC_4(VAR_5, VAR_3->sender.port)) == ((void*)0))
  goto __end;
 VAR_4 = FUNC_2(&VAR_6->c_src, &VAR_3->dest,
            VAR_3);
      __end:
       if (VAR_6)
  FUNC_3(VAR_6);
 if (VAR_5)
  FUNC_0(VAR_5);

 return VAR_4;
}
