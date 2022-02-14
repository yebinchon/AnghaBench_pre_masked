
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
struct TYPE_3__ {scalar_t__ p; scalar_t__ end; int data; } ;
struct audio_packet {int tick; int index; TYPE_1__ s; } ;
struct TYPE_4__ {int dsp_bu; int channels; } ;
typedef TYPE_1__* STREAM ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (char*,scalar_t__,int) ;
 int VAR_7 ;
 struct audio_packet* VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_6 (unsigned int,int ) ;

void
FUNC_7(void)
{
 struct audio_packet *VAR_11;
 STREAM VAR_12;
 char VAR_13[VAR_3];
 int VAR_14, VAR_15, VAR_16;
 static long VAR_17, VAR_18;
 unsigned int VAR_19;
 struct timeval VAR_20;
 int VAR_21;

 if (VAR_4)
 {
  VAR_4 = VAR_0;
  FUNC_4(&VAR_20, ((void*)0));
  VAR_17 = VAR_20.tv_sec;
  VAR_18 = VAR_20.tv_usec;
 }

 if (VAR_10 == VAR_9)
 {
  VAR_2->dsp_bu = 0;
  return;
 }

 VAR_11 = &VAR_8[VAR_10];
 VAR_12 = &VAR_11->s;

 if (((VAR_10 + 1) % VAR_1) != VAR_9)
 {
  VAR_21 = VAR_8[(VAR_10 + 1) % VAR_1].tick;
 }
 else
 {
  VAR_21 = (VAR_11->tick + 65535) % 65536;
 }

 VAR_15 = 0;

 if (VAR_5 == 22050)
 {

  for (VAR_16 = 0; (VAR_16 < ((VAR_3 / 4) * (3 - VAR_6))) && (VAR_12->p < VAR_12->end);
       VAR_16++)
  {





   if (VAR_2->channels == 2)
    VAR_14 = ((VAR_16 * 2) - (VAR_16 & 1)) * VAR_6;
   else
    VAR_14 = (VAR_16 * 2) * VAR_6;

   FUNC_5(&VAR_13[VAR_14], VAR_12->p, VAR_6);
   FUNC_5(&VAR_13[VAR_2->channels * VAR_6 + VAR_14], VAR_12->p, VAR_6);

   VAR_12->p += VAR_6;
   VAR_15 += 2 * VAR_6;
  }
 }
 else
 {
  VAR_15 = (VAR_3 > (VAR_12->end - VAR_12->p)) ? (VAR_12->end - VAR_12->p) : VAR_3;
  FUNC_5(VAR_13, VAR_12->p, VAR_15);
  VAR_12->p += VAR_15;
 }

 FUNC_2(VAR_7, VAR_13, VAR_15);

 FUNC_4(&VAR_20, ((void*)0));

 VAR_19 = ((VAR_20.tv_sec - VAR_17) * 1000000 + (VAR_20.tv_usec - VAR_18)) / 1000;

 if (VAR_11->tick > VAR_21)
  VAR_21 += 65536;

 if ((VAR_12->p == VAR_12->end) || VAR_19 > VAR_21 - VAR_11->tick + 500)
 {
  VAR_17 = VAR_20.tv_sec;
  VAR_18 = VAR_20.tv_usec;

  if (abs((VAR_21 - VAR_11->tick) - VAR_19) > 20)
  {
   FUNC_0(("duration: %d, calc: %d, ", VAR_19, VAR_21 - VAR_11->tick));
   FUNC_0(("last: %d, is: %d, should: %d\n", VAR_11->tick,
          (VAR_11->tick + VAR_19) % 65536, VAR_21 % 65536));
  }



  FUNC_6(((VAR_11->tick + VAR_19) % 65536) - 50, VAR_11->index);
  FUNC_3(VAR_12->data);
  VAR_10 = (VAR_10 + 1) % VAR_1;
 }

 VAR_2->dsp_bu = 1;
 return;
}
