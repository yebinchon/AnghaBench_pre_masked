
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_ps3_card_info {int substream; scalar_t__ silent; int running; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_ps3_card_info*) ;
 int FUNC_5 (struct snd_ps3_card_info*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{

 uint32_t VAR_9;
 int VAR_10 = 0;
 struct snd_ps3_card_info *VAR_11 = VAR_8;

 if (!VAR_11->running) {
  FUNC_6(VAR_1, 0);
  FUNC_6(VAR_2, 0);
  return VAR_0;
 }

 VAR_9 = FUNC_2(VAR_1);




 if (VAR_9 & FUNC_0(0)) {
  FUNC_7(VAR_1, FUNC_0(0));
  if (VAR_9 & FUNC_1(0)) {
   FUNC_7(VAR_1, VAR_9);
   VAR_10 = 1;
  }
  if (VAR_11->silent) {

   FUNC_5(VAR_11,
    (VAR_10) ?
    VAR_5 :
    VAR_6);
   FUNC_4(VAR_11);
   VAR_11->silent--;
  } else {
   FUNC_5(VAR_11,
    (VAR_10) ?
    VAR_3 :
    VAR_4);
   FUNC_4(VAR_11);
   FUNC_3(VAR_11->substream);
  }
 } else if (VAR_9 & FUNC_1(0)) {
  FUNC_7(VAR_1, FUNC_1(0));
  FUNC_5(VAR_11,
        VAR_5);
  FUNC_4(VAR_11);
  FUNC_5(VAR_11,
        VAR_5);
  FUNC_4(VAR_11);
 }

 return VAR_0;
}
