
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emu10k1x_voice {scalar_t__ use; } ;
struct TYPE_2__ {int (* interrupt ) (struct emu10k1x*,unsigned int) ;} ;
struct emu10k1x {scalar_t__ port; TYPE_1__ midi; struct emu10k1x_voice capture_voice; struct emu10k1x_voice* voices; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (struct emu10k1x*,int) ;
 int FUNC_3 (struct emu10k1x*,struct emu10k1x_voice*) ;
 int FUNC_4 (struct emu10k1x*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_13, void *VAR_14)
{
 unsigned int VAR_15;

 struct emu10k1x *VAR_16 = VAR_14;
 struct emu10k1x_voice *VAR_17 = VAR_16->voices;
 int VAR_18;
 int VAR_19;

 VAR_15 = FUNC_0(VAR_16->port + VAR_4);

 if (! VAR_15)
  return VAR_12;


 if (VAR_15 & (VAR_6 | VAR_5)) {
  struct emu10k1x_voice *VAR_20 = &VAR_16->capture_voice;
  if (VAR_20->use)
   FUNC_3(VAR_16, VAR_20);
  else
   FUNC_2(VAR_16,
        VAR_1 |
        VAR_0);
 }

 VAR_19 = VAR_8|VAR_7;
 for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
  if (VAR_15 & VAR_19) {
   if (VAR_17->use)
    FUNC_3(VAR_16, VAR_17);
   else
    FUNC_2(VAR_16, VAR_19);
  }
  VAR_17++;
  VAR_19 <<= 1;
 }

 if (VAR_15 & (VAR_10|VAR_9)) {
  if (VAR_16->midi.interrupt)
   VAR_16->midi.interrupt(VAR_16, VAR_15);
  else
   FUNC_2(VAR_16, VAR_3|VAR_2);
 }


 FUNC_1(VAR_15, VAR_16->port + VAR_4);


 return VAR_11;
}
