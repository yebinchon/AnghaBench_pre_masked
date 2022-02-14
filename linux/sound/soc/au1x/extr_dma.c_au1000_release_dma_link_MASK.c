
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_period {struct pcm_period* next; } ;
struct audio_stream {struct pcm_period* buffer; scalar_t__ periods; scalar_t__ period_size; } ;


 int FUNC_0 (struct pcm_period*) ;

__attribute__((used)) static void FUNC_1(struct audio_stream *VAR_0)
{
 struct pcm_period *VAR_1;
 struct pcm_period *VAR_2;

 VAR_0->period_size = 0;
 VAR_0->periods = 0;
 VAR_1 = VAR_0->buffer;
 if (!VAR_1)
  return;
 do {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 } while (VAR_1 != VAR_0->buffer);
 VAR_0->buffer = ((void*)0);
}
