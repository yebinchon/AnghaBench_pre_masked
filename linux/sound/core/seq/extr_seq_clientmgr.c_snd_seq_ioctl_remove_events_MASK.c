
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_remove_events {int remove_mode; } ;
struct TYPE_3__ {scalar_t__ fifo; } ;
struct TYPE_4__ {TYPE_1__ user; } ;
struct snd_seq_client {scalar_t__ type; int number; TYPE_2__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct snd_seq_remove_events*) ;

__attribute__((used)) static int FUNC_2(struct snd_seq_client *VAR_3,
           void *VAR_4)
{
 struct snd_seq_remove_events *VAR_5 = VAR_4;




 if (VAR_5->remove_mode & VAR_0) {




  if (VAR_3->type == VAR_2 && VAR_3->data.user.fifo)
   FUNC_0(VAR_3->data.user.fifo);
 }

 if (VAR_5->remove_mode & VAR_1)
  FUNC_1(VAR_3->number, VAR_5);

 return 0;
}
