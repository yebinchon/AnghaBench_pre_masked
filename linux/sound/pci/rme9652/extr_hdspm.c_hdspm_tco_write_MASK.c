
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdspm {TYPE_1__* tco; } ;
struct TYPE_2__ {int input; int framerate; int wordclock; int samplerate; int pull; int term; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct hdspm*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct hdspm *VAR_14)
{
 unsigned int VAR_15[4] = { 0, 0, 0, 0};

 switch (VAR_14->tco->input) {
 case 0:
  VAR_15[2] |= VAR_9;
  break;
 case 1:
  VAR_15[2] |= VAR_8;
  break;
 default:
  break;
 }

 switch (VAR_14->tco->framerate) {
 case 1:
  VAR_15[1] |= VAR_0;
  break;
 case 2:
  VAR_15[1] |= VAR_1;
  break;
 case 3:
  VAR_15[1] |= VAR_1 +
   VAR_2;
  break;
 case 4:
  VAR_15[1] |= VAR_0 +
   VAR_1;
  break;
 case 5:
  VAR_15[1] |= VAR_0 +
   VAR_1 +
   VAR_2;
  break;
 default:
  break;
 }

 switch (VAR_14->tco->wordclock) {
 case 1:
  VAR_15[2] |= VAR_3;
  break;
 case 2:
  VAR_15[2] |= VAR_4;
  break;
 default:
  break;
 }

 switch (VAR_14->tco->samplerate) {
 case 1:
  VAR_15[2] |= VAR_6;
  break;
 case 2:
  VAR_15[2] |= VAR_7;
  break;
 default:
  break;
 }

 switch (VAR_14->tco->pull) {
 case 1:
  VAR_15[2] |= VAR_11;
  break;
 case 2:
  VAR_15[2] |= VAR_10;
  break;
 case 3:
  VAR_15[2] |= VAR_11 + VAR_5;
  break;
 case 4:
  VAR_15[2] |= VAR_10 + VAR_5;
  break;
 default:
  break;
 }

 if (1 == VAR_14->tco->term) {
  VAR_15[2] |= VAR_12;
 }

 FUNC_0(VAR_14, VAR_13, VAR_15[0]);
 FUNC_0(VAR_14, VAR_13+4, VAR_15[1]);
 FUNC_0(VAR_14, VAR_13+8, VAR_15[2]);
 FUNC_0(VAR_14, VAR_13+12, VAR_15[3]);
}
