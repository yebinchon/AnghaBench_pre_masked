
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_port_callback {struct snd_opl3* private_data; int private_free; int event_input; int unuse; int use; int owner; } ;
struct snd_opl3 {int hardware; TYPE_1__* chset; int seq_client; } ;
typedef int callbacks ;
struct TYPE_3__ {int port; int client; struct snd_opl3* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct snd_seq_port_callback*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,struct snd_seq_port_callback*,int,int,int,int,char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_opl3 * VAR_17)
{
 struct snd_seq_port_callback VAR_18;
 char VAR_19[32];
 int VAR_20, VAR_21;

 VAR_20 = (VAR_17->hardware < VAR_4) ?
  VAR_1 : VAR_2;
 VAR_17->chset = FUNC_1(16);
 if (VAR_17->chset == ((void*)0))
  return -VAR_0;
 VAR_17->chset->private_data = VAR_17;

 FUNC_0(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.owner = VAR_12;
 VAR_18.use = VAR_16;
 VAR_18.unuse = VAR_15;
 VAR_18.event_input = VAR_13;
 VAR_18.private_free = VAR_14;
 VAR_18.private_data = VAR_17;

 VAR_21 = (VAR_17->hardware & VAR_3) >> 8;
 FUNC_4(VAR_19, "OPL%i FM Port", VAR_21);

 VAR_17->chset->client = VAR_17->seq_client;
 VAR_17->chset->port = FUNC_3(VAR_17->seq_client, &VAR_18,
            VAR_6 |
            VAR_5,
            VAR_9 |
            VAR_10 |
            VAR_7 |
            VAR_8 |
            VAR_11,
            16, VAR_20,
            VAR_19);
 if (VAR_17->chset->port < 0) {
  int VAR_22;
  VAR_22 = VAR_17->chset->port;
  FUNC_2(VAR_17->chset);
  return VAR_22;
 }
 return 0;
}
