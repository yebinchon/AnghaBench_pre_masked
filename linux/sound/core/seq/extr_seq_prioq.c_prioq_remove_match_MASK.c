
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int time; int tick; } ;
struct TYPE_8__ {scalar_t__ client; scalar_t__ port; } ;
struct snd_seq_remove_events {int remove_mode; scalar_t__ channel; int type; scalar_t__ tag; TYPE_6__ time; TYPE_2__ dest; } ;
struct TYPE_11__ {int time; int tick; } ;
struct TYPE_9__ {scalar_t__ channel; } ;
struct TYPE_10__ {TYPE_3__ note; } ;
struct TYPE_7__ {scalar_t__ client; scalar_t__ port; } ;
struct snd_seq_event {int type; scalar_t__ tag; TYPE_5__ time; TYPE_4__ data; TYPE_1__ dest; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct snd_seq_event*) ;

__attribute__((used)) static int FUNC_3(struct snd_seq_remove_events *VAR_8,
         struct snd_seq_event *VAR_9)
{
 int VAR_10;

 if (VAR_8->remove_mode & VAR_0) {
  if (VAR_9->dest.client != VAR_8->dest.client ||
    VAR_9->dest.port != VAR_8->dest.port)
   return 0;
 }
 if (VAR_8->remove_mode & VAR_1) {
  if (! FUNC_2(VAR_9))
   return 0;

  if (VAR_9->data.note.channel != VAR_8->channel)
   return 0;
 }
 if (VAR_8->remove_mode & VAR_5) {
  if (VAR_8->remove_mode & VAR_7)
   VAR_10 = FUNC_1(&VAR_9->time.tick, &VAR_8->time.tick);
  else
   VAR_10 = FUNC_0(&VAR_9->time.time, &VAR_8->time.time);
  if (!VAR_10)
   return 0;
 }
 if (VAR_8->remove_mode & VAR_6) {
  if (VAR_8->remove_mode & VAR_7)
   VAR_10 = FUNC_1(&VAR_9->time.tick, &VAR_8->time.tick);
  else
   VAR_10 = FUNC_0(&VAR_9->time.time, &VAR_8->time.time);
  if (VAR_10)
   return 0;
 }
 if (VAR_8->remove_mode & VAR_2) {
  if (VAR_9->type != VAR_8->type)
   return 0;
 }
 if (VAR_8->remove_mode & VAR_3) {

  switch (VAR_9->type) {
  case 128:

   return 0;
  default:
   break;
  }
 }
 if (VAR_8->remove_mode & VAR_4) {
  if (VAR_8->tag != VAR_9->tag)
   return 0;
 }

 return 1;
}
