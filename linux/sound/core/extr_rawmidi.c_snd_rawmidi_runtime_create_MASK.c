
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {scalar_t__ stream; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int avail_min; scalar_t__ hw_ptr; scalar_t__ appl_ptr; int buffer; scalar_t__ buffer_size; scalar_t__ avail; int * event; int event_work; int sleep; int lock; struct snd_rawmidi_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_rawmidi_runtime*) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct snd_rawmidi_runtime* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_rawmidi_substream *VAR_5)
{
 struct snd_rawmidi_runtime *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->substream = VAR_5;
 FUNC_5(&VAR_6->lock);
 FUNC_1(&VAR_6->sleep);
 FUNC_0(&VAR_6->event_work, VAR_4);
 VAR_6->event = ((void*)0);
 VAR_6->buffer_size = VAR_2;
 VAR_6->avail_min = 1;
 if (VAR_5->stream == VAR_3)
  VAR_6->avail = 0;
 else
  VAR_6->avail = VAR_6->buffer_size;
 VAR_6->buffer = FUNC_3(VAR_6->buffer_size, VAR_1);
 if (!VAR_6->buffer) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }
 VAR_6->appl_ptr = VAR_6->hw_ptr = 0;
 VAR_5->runtime = VAR_6;
 return 0;
}
