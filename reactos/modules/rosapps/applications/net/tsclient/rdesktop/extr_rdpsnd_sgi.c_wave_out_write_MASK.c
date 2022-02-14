
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_4__ {int p; int size; int data; } ;
struct audio_packet {TYPE_1__ s; int index; int tick; } ;
struct TYPE_5__ {int dsp_bu; } ;
typedef TYPE_1__* STREAM ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct audio_packet* VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;

void
FUNC_3(STREAM VAR_6, uint16 VAR_7, uint8 VAR_8)
{
 struct audio_packet *VAR_9 = &VAR_2[VAR_3];
 unsigned int VAR_10 = (VAR_3 + 1) % VAR_0;

 if (VAR_10 == VAR_4)
 {
  FUNC_0(VAR_5, "No space to queue audio packet\n");
  return;
 }

 VAR_3 = VAR_10;

 VAR_9->s = *VAR_6;
 VAR_9->tick = VAR_7;
 VAR_9->index = VAR_8;
 VAR_9->s.p += 4;


 VAR_6->data = FUNC_1(VAR_6->size);

 if (!VAR_1->dsp_bu)
  FUNC_2();
}
