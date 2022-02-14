
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int client; } ;
struct snd_seq_port_info {int type; int capability; int name; TYPE_1__ addr; } ;
struct seq_oss_midi {int flags; int seq_device; int coder; int name; int use_lock; scalar_t__ opened; int port; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct seq_oss_midi* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct seq_oss_midi*) ;
 struct seq_oss_midi* FUNC_2 (int,int ) ;
 int VAR_7 ;
 struct seq_oss_midi** VAR_8 ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,int ,int) ;

int
FUNC_12(struct snd_seq_port_info *VAR_10)
{
 int VAR_11;
 struct seq_oss_midi *VAR_12;
 unsigned long VAR_13;


 if (! (VAR_10->type & VAR_6))
  return 0;

 if ((VAR_10->capability & VAR_4) != VAR_4 &&
     (VAR_10->capability & VAR_3) != VAR_3)
  return 0;




 if ((VAR_12 = FUNC_0(VAR_10->addr.client, VAR_10->addr.port)) != ((void*)0)) {

  FUNC_7(&VAR_12->use_lock);
  return 0;
 }




 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;


 VAR_12->client = VAR_10->addr.client;
 VAR_12->port = VAR_10->addr.port;
 VAR_12->flags = VAR_10->capability;
 VAR_12->opened = 0;
 FUNC_8(&VAR_12->use_lock);


 FUNC_11(VAR_12->name, VAR_10->name, sizeof(VAR_12->name));


 if (FUNC_5(VAR_2, &VAR_12->coder) < 0) {
  FUNC_3("ALSA: seq_oss: can't malloc midi coder\n");
  FUNC_1(VAR_12);
  return -VAR_0;
 }

 FUNC_6(VAR_12->coder, 1);




 FUNC_9(&VAR_9, VAR_13);
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_8[VAR_11] == ((void*)0))
   break;
 }
 if (VAR_11 >= VAR_7) {
  if (VAR_7 >= VAR_5) {
   FUNC_10(&VAR_9, VAR_13);
   FUNC_4(VAR_12->coder);
   FUNC_1(VAR_12);
   return -VAR_0;
  }
  VAR_7++;
 }
 VAR_12->seq_device = VAR_11;
 VAR_8[VAR_12->seq_device] = VAR_12;
 FUNC_10(&VAR_9, VAR_13);

 return 0;
}
