
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int nb_streams_capt; int nb_streams_play; struct pcxhr_stream* playback_stream; struct pcxhr_stream* capture_stream; } ;
struct pcxhr_stream {scalar_t__ status; int timer_period_frag; } ;
struct pcxhr_pipe {int first_audio; } ;
struct pcxhr_mgr {int num_cards; TYPE_1__* pci; int setup_mutex; int lock; scalar_t__ granularity; struct snd_pcxhr** chip; } ;
typedef int ktime_t ;
struct TYPE_2__ {int dev; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,long,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pcxhr_stream*) ;
 int FUNC_8 (struct pcxhr_mgr*,int,int,int) ;
 int FUNC_9 (struct snd_pcxhr*,struct pcxhr_stream*) ;
 scalar_t__ FUNC_10 (struct pcxhr_stream*,struct pcxhr_pipe**) ;
 int FUNC_11 (struct pcxhr_stream*) ;

__attribute__((used)) static void FUNC_12(struct pcxhr_mgr *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct pcxhr_pipe *VAR_6;
 struct snd_pcxhr *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;






 FUNC_5(&VAR_2->setup_mutex);


 for (VAR_3 = 0; VAR_3 < VAR_2->num_cards; VAR_3++) {
  VAR_7 = VAR_2->chip[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_7->nb_streams_capt; VAR_4++) {
   if (FUNC_10(&VAR_7->capture_stream[VAR_4], &VAR_6))
    VAR_8 |= (1 << VAR_6->first_audio);
  }
  for (VAR_4 = 0; VAR_4 < VAR_7->nb_streams_play; VAR_4++) {
   if (FUNC_10(&VAR_7->playback_stream[VAR_4], &VAR_6)) {
    VAR_9 |= (1 << VAR_6->first_audio);
    break;


   }
  }
 }
 if (VAR_8 == 0 && VAR_9 == 0) {
  FUNC_6(&VAR_2->setup_mutex);
  FUNC_1(&VAR_2->pci->dev, "pcxhr_start_linked_stream : no pipes\n");
  return;
 }

 FUNC_0(&VAR_2->pci->dev, "pcxhr_start_linked_stream : "
      "playback_mask=%x capture_mask=%x\n",
      VAR_9, VAR_8);


 VAR_5 = FUNC_8(VAR_2, VAR_9, VAR_8, 0);
 if (VAR_5) {
  FUNC_6(&VAR_2->setup_mutex);
  FUNC_1(&VAR_2->pci->dev, "pcxhr_start_linked_stream : "
      "error stop pipes (P%x C%x)\n",
      VAR_9, VAR_8);
  return;
 }


 for (VAR_3 = 0; VAR_3 < VAR_2->num_cards; VAR_3++) {
  struct pcxhr_stream *VAR_10;
  VAR_7 = VAR_2->chip[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_7->nb_streams_capt; VAR_4++) {
   VAR_10 = &VAR_7->capture_stream[VAR_4];
   if (FUNC_10(VAR_10, &VAR_6)) {
    VAR_5 = FUNC_7(VAR_10);
    VAR_5 = FUNC_11(VAR_10);
   }
  }
  for (VAR_4 = 0; VAR_4 < VAR_7->nb_streams_play; VAR_4++) {
   VAR_10 = &VAR_7->playback_stream[VAR_4];
   if (FUNC_10(VAR_10, &VAR_6)) {
    VAR_5 = FUNC_7(VAR_10);
    VAR_5 = FUNC_11(VAR_10);
   }
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->num_cards; VAR_3++) {
  struct pcxhr_stream *VAR_11;
  VAR_7 = VAR_2->chip[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_7->nb_streams_capt; VAR_4++) {
   VAR_11 = &VAR_7->capture_stream[VAR_4];
   if (FUNC_10(VAR_11, &VAR_6))
    VAR_5 = FUNC_9(VAR_7, VAR_11);
  }
  for (VAR_4 = 0; VAR_4 < VAR_7->nb_streams_play; VAR_4++) {
   VAR_11 = &VAR_7->playback_stream[VAR_4];
   if (FUNC_10(VAR_11, &VAR_6))
    VAR_5 = FUNC_9(VAR_7, VAR_11);
  }
 }


 VAR_5 = FUNC_8(VAR_2, VAR_9, VAR_8, 1);
 if (VAR_5) {
  FUNC_6(&VAR_2->setup_mutex);
  FUNC_1(&VAR_2->pci->dev, "pcxhr_start_linked_stream : "
      "error start pipes (P%x C%x)\n",
      VAR_9, VAR_8);
  return;
 }




 FUNC_5(&VAR_2->lock);
 for ( VAR_3 =0; VAR_3 < VAR_2->num_cards; VAR_3++) {
  struct pcxhr_stream *VAR_12;
  VAR_7 = VAR_2->chip[VAR_3];
  for(VAR_4 = 0; VAR_4 < VAR_7->nb_streams_capt; VAR_4++) {
   VAR_12 = &VAR_7->capture_stream[VAR_4];
   if(VAR_12->status == VAR_1)
    VAR_12->status = VAR_0;
  }
  for (VAR_4 = 0; VAR_4 < VAR_7->nb_streams_play; VAR_4++) {
   VAR_12 = &VAR_7->playback_stream[VAR_4];
   if (VAR_12->status == VAR_1) {

    VAR_12->timer_period_frag += VAR_2->granularity;
    VAR_12->status = VAR_0;
   }
  }
 }
 FUNC_6(&VAR_2->lock);

 FUNC_6(&VAR_2->setup_mutex);







}
