
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_seq_port_subscribe {int dummy; } ;
struct snd_seq_port_subs_info {int count; int (* open ) (int ,struct snd_seq_port_subscribe*) ;} ;
struct TYPE_2__ {int port; int client; } ;
struct snd_seq_client_port {TYPE_1__ addr; int owner; int private_data; } ;
struct snd_seq_client {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct snd_seq_port_subscribe*,int ) ;
 int FUNC_2 (int ,struct snd_seq_port_subscribe*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_seq_client *VAR_3,
     struct snd_seq_client_port *VAR_4,
     struct snd_seq_port_subs_info *VAR_5,
     struct snd_seq_port_subscribe *VAR_6,
     int VAR_7)
{
 int VAR_8 = 0;

 if (!FUNC_3(VAR_4->owner))
  return -VAR_0;
 VAR_5->count++;
 if (VAR_5->open && VAR_5->count == 1) {
  VAR_8 = VAR_5->open(VAR_4->private_data, VAR_6);
  if (VAR_8 < 0) {
   FUNC_0(VAR_4->owner);
   VAR_5->count--;
  }
 }
 if (VAR_8 >= 0 && VAR_7 && VAR_3->type == VAR_2)
  FUNC_1(VAR_4->addr.client, VAR_4->addr.port,
         VAR_6, VAR_1);

 return VAR_8;
}
