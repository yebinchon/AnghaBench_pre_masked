
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hw {scalar_t__ model; TYPE_1__* card; } ;
struct adc_conf {int msr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct hw*,int,int,int) ;
 int FUNC_4 (struct hw*) ;
 int FUNC_5 (struct hw*,int ,int ) ;
 int FUNC_6 (struct hw*,int ) ;
 int FUNC_7 (struct hw*,int ) ;
 int FUNC_8 (struct hw*,int ,int ) ;
 int FUNC_9 (struct hw*,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct hw *VAR_7, const struct adc_conf *VAR_8)
{
 int VAR_9;
 u32 VAR_10, VAR_11;


 VAR_10 = FUNC_7(VAR_7, VAR_3);
 VAR_10 |= (0x1 << 15);
 FUNC_9(VAR_7, VAR_3, VAR_10);


 VAR_9 = FUNC_3(VAR_7, 0x1A, 1, 1);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7->card->dev, "Failure to acquire I2C!!!\n");
  goto error;
 }


 VAR_10 = FUNC_7(VAR_7, VAR_4);
 VAR_10 &= ~(0x1 << 15);
 FUNC_9(VAR_7, VAR_4, VAR_10);

 if (VAR_7->model == VAR_1) {

  VAR_10 &= ~0x0C;
  if (1 == VAR_8->msr)
   VAR_10 |= 0x00;
  else if (2 == VAR_8->msr)
   VAR_10 |= 0x08;
  else
   VAR_10 |= 0x04;
  FUNC_9(VAR_7, VAR_4, VAR_10);
 }

 FUNC_11(10000, 11000);

 VAR_10 |= (0x1 << 15);
 FUNC_9(VAR_7, VAR_4, VAR_10);
 FUNC_10(50);




 FUNC_5(VAR_7, FUNC_0(VAR_5, 0x26),
    FUNC_1(0x26));


 if (1 == VAR_8->msr) {

  FUNC_5(VAR_7, FUNC_0(VAR_6, 0x02),
      FUNC_1(0x02));
 } else if ((2 == VAR_8->msr) || (4 == VAR_8->msr)) {

  FUNC_5(VAR_7, FUNC_0(VAR_6, 0x0A),
      FUNC_1(0x0A));
 } else {
  FUNC_2(VAR_7->card->dev,
     "Invalid master sampling rate (msr %d)!!!\n",
     VAR_8->msr);
  VAR_9 = -VAR_2;
  goto error;
 }

 if (VAR_7->model != VAR_1) {

  VAR_11 = FUNC_7(VAR_7, VAR_3);
  VAR_11 |= 0x1 << 14;
  FUNC_9(VAR_7, VAR_3, VAR_11);
  FUNC_6(VAR_7, VAR_0);
 } else {
  FUNC_8(VAR_7, 0, 0);
 }

 return 0;
error:
 FUNC_4(VAR_7);
 return VAR_9;
}
