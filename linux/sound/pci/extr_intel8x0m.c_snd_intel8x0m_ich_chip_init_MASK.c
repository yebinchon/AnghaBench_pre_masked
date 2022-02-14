
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel8x0m {scalar_t__ device_type; TYPE_2__* ac97; TYPE_1__* card; } ;
struct TYPE_4__ {int num; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (struct intel8x0m*,int ) ;
 unsigned int FUNC_3 (struct intel8x0m*,int ) ;
 int FUNC_4 (struct intel8x0m*,int) ;
 int FUNC_5 (struct intel8x0m*,int ,unsigned int) ;
 int FUNC_6 (struct intel8x0m*,int,int) ;
 int VAR_14 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (unsigned long,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct intel8x0m *VAR_15, int VAR_16)
{
 unsigned long VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20;



 VAR_19 = VAR_11 | VAR_8 | VAR_9;
 VAR_18 = FUNC_3(VAR_15, FUNC_0(VAR_3));
 FUNC_5(VAR_15, FUNC_0(VAR_3), VAR_18 & VAR_19);


 VAR_18 = FUNC_3(VAR_15, FUNC_0(VAR_2));
 VAR_18 &= ~(VAR_7);

 VAR_18 |= (VAR_18 & VAR_5) == 0 ? VAR_5 : VAR_6;
 FUNC_5(VAR_15, FUNC_0(VAR_2), VAR_18);
 FUNC_9(500, 1000);
 VAR_17 = VAR_14 + VAR_4 / 4;
 do {
  if ((FUNC_3(VAR_15, FUNC_0(VAR_2)) & VAR_6) == 0)
   goto __ok;
  FUNC_7(1);
 } while (FUNC_8(VAR_17, VAR_14));
 FUNC_1(VAR_15->card->dev, "AC'97 warm reset still in progress? [0x%x]\n",
     FUNC_3(VAR_15, FUNC_0(VAR_2)));
 return -VAR_1;

      __ok:
 if (VAR_16) {




  VAR_17 = VAR_14 + VAR_4;
  do {
   VAR_19 = FUNC_3(VAR_15, FUNC_0(VAR_3)) &
    (VAR_10 | VAR_12 | VAR_13);
   if (VAR_19)
    break;
   FUNC_7(1);
  } while (FUNC_8(VAR_17, VAR_14));
  if (! VAR_19) {

   FUNC_1(VAR_15->card->dev,
    "codec_ready: codec is not ready [0x%x]\n",
       FUNC_3(VAR_15, FUNC_0(VAR_3)));
   return -VAR_1;
  }


  VAR_20 = VAR_10 | VAR_12;


  VAR_17 = VAR_14 + VAR_4 / 4;
  while (VAR_19 != VAR_20 && FUNC_8(VAR_17, VAR_14)) {
   FUNC_7(1);
   VAR_19 |= FUNC_3(VAR_15, FUNC_0(VAR_3)) & VAR_20;
  }

 } else {

  VAR_19 = 0;
  if (VAR_15->ac97)
   VAR_19 |= FUNC_2(VAR_15, VAR_15->ac97->num);

  VAR_17 = VAR_14 + VAR_4;
  do {
   VAR_20 = FUNC_3(VAR_15, FUNC_0(VAR_3)) &
    (VAR_10 | VAR_12 | VAR_13);
   if (VAR_19 == VAR_20)
    break;
   FUNC_7(1);
  } while (FUNC_8(VAR_17, VAR_14));
 }

 if (VAR_15->device_type == VAR_0) {

  FUNC_6(VAR_15, 0x4c, FUNC_4(VAR_15, 0x4c) | 1);
 }

       return 0;
}
