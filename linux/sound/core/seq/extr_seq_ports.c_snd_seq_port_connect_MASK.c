
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_port_subscribe {int flags; } ;
struct snd_seq_subscribers {int dest_list; int src_list; int ref_count; struct snd_seq_port_subscribe info; } ;
struct snd_seq_client_port {int dummy; } ;
struct snd_seq_client {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct snd_seq_client*,struct snd_seq_client_port*,struct snd_seq_subscribers*,int,int,int) ;
 int FUNC_3 (struct snd_seq_client*,struct snd_seq_client_port*,struct snd_seq_subscribers*,int,int) ;
 int FUNC_4 (struct snd_seq_subscribers*) ;
 struct snd_seq_subscribers* FUNC_5 (int,int ) ;

int FUNC_6(struct snd_seq_client *VAR_3,
    struct snd_seq_client *VAR_4,
    struct snd_seq_client_port *VAR_5,
    struct snd_seq_client *VAR_6,
    struct snd_seq_client_port *VAR_7,
    struct snd_seq_port_subscribe *VAR_8)
{
 struct snd_seq_subscribers *VAR_9;
 bool VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->info = *VAR_8;
 FUNC_1(&VAR_9->ref_count, 0);
 FUNC_0(&VAR_9->src_list);
 FUNC_0(&VAR_9->dest_list);

 VAR_10 = !!(VAR_8->flags & VAR_2);

 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_9, 1,
           VAR_10,
           VAR_3->number != VAR_4->number);
 if (VAR_11 < 0)
  goto error;
 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_9, 0,
           VAR_10,
           VAR_3->number != VAR_6->number);
 if (VAR_11 < 0)
  goto error_dest;

 return 0;

 error_dest:
 FUNC_3(VAR_4, VAR_5, VAR_9, 1,
        VAR_3->number != VAR_4->number);
 error:
 FUNC_4(VAR_9);
 return VAR_11;
}
