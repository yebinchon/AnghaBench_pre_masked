
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hw {scalar_t__ model; TYPE_1__* card; } ;
struct daio_conf {int msr; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hw*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_9, const struct daio_conf *VAR_10)
{
 u32 VAR_11;
 int VAR_12;



 if (1 == VAR_10->msr) {
  FUNC_1(VAR_9, VAR_0, 0x01010101);
  FUNC_1(VAR_9, VAR_3, 0x01010101);
  FUNC_1(VAR_9, VAR_1, 0);
 } else if (2 == VAR_10->msr) {
  if (VAR_9->model != VAR_7) {
   FUNC_1(VAR_9, VAR_0, 0x11111111);
  } else {

   FUNC_1(VAR_9, VAR_0, 0x11011111);
  }
  FUNC_1(VAR_9, VAR_3, 0x11111111);
  FUNC_1(VAR_9, VAR_1, 0);
 } else if ((4 == VAR_10->msr) && (VAR_9->model == VAR_7)) {
  FUNC_1(VAR_9, VAR_0, 0x21011111);
  FUNC_1(VAR_9, VAR_3, 0x21212121);
  FUNC_1(VAR_9, VAR_1, 0);
 } else {
  FUNC_0(VAR_9->card->dev,
     "ERROR!!! Invalid sampling rate!!!\n");
  return -VAR_8;
 }

 for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
  if (VAR_12 <= 3) {



   if (VAR_12 == 3)
    VAR_11 = 0x1001001;
   else
    VAR_11 = 0x1000001;

   FUNC_1(VAR_9, (VAR_6+(0x40*VAR_12)), VAR_11);
   FUNC_1(VAR_9, (VAR_2+(0x40*VAR_12)), VAR_11);
   FUNC_1(VAR_9, VAR_5+(0x40*VAR_12),
     0x02109204);

   FUNC_1(VAR_9, VAR_4+(0x40*VAR_12), 0x0B);
  } else {


   VAR_11 = 0x11;
   FUNC_1(VAR_9, VAR_2+(0x40*VAR_12), VAR_11);
   if (2 == VAR_10->msr) {

    VAR_11 |= 0x1000;
   } else if (4 == VAR_10->msr) {

    VAR_11 |= 0x2000;
   }
   FUNC_1(VAR_9, VAR_6+(0x40*VAR_12), VAR_11);
  }
 }

 return 0;
}
