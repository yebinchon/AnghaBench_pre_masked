
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct snd_seq_subscribers {int info; struct list_head dest_list; struct list_head src_list; } ;
struct snd_seq_port_subs_info {int list_mutex; int list_lock; scalar_t__ exclusive; } ;
struct snd_seq_client_port {struct snd_seq_port_subs_info c_dest; struct snd_seq_port_subs_info c_src; } ;
struct snd_seq_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct snd_seq_client*,struct snd_seq_client_port*,struct snd_seq_port_subs_info*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct snd_seq_client *VAR_0,
     struct snd_seq_client_port *VAR_1,
     struct snd_seq_subscribers *VAR_2,
     bool VAR_3, bool VAR_4)
{
 struct snd_seq_port_subs_info *VAR_5;
 struct list_head *VAR_6;
 bool VAR_7;

 VAR_5 = VAR_3 ? &VAR_1->c_src : &VAR_1->c_dest;
 VAR_6 = VAR_3 ? &VAR_2->src_list : &VAR_2->dest_list;
 FUNC_0(&VAR_5->list_mutex);
 FUNC_5(&VAR_5->list_lock);
 VAR_7 = FUNC_2(VAR_6);
 if (!VAR_7)
  FUNC_1(VAR_6);
 VAR_5->exclusive = 0;
 FUNC_6(&VAR_5->list_lock);

 if (!VAR_7)
  FUNC_3(VAR_0, VAR_1, VAR_5, &VAR_2->info, VAR_4);
 FUNC_4(&VAR_5->list_mutex);
}
