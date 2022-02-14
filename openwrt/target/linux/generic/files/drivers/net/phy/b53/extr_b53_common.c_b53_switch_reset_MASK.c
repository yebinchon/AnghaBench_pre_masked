
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct b53_device {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b53_device*) ;
 int FUNC_1 (struct b53_device*) ;
 int FUNC_2 (struct b53_device*) ;
 int FUNC_3 (struct b53_device*) ;
 int FUNC_4 (struct b53_device*) ;
 int FUNC_5 (struct b53_device*,int ,int ,int*) ;
 int FUNC_6 (struct b53_device*) ;
 int FUNC_7 (struct b53_device*,int ,int ,int) ;
 scalar_t__ FUNC_8 (struct b53_device*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct b53_device *VAR_6)
{
 int VAR_7 = 0;
 u8 VAR_8;

 FUNC_6(VAR_6);

 if (FUNC_8(VAR_6)) {
  FUNC_7(VAR_6, VAR_0, VAR_1, 0x83);
  FUNC_7(VAR_6, VAR_0, VAR_1, 0x00);
 }

 FUNC_5(VAR_6, VAR_0, VAR_2, &VAR_8);

 if (!(VAR_8 & VAR_4)) {
  VAR_8 &= ~VAR_5;
  VAR_8 |= VAR_4;

  FUNC_7(VAR_6, VAR_0, VAR_2, VAR_8);
  FUNC_5(VAR_6, VAR_0, VAR_2, &VAR_8);

  if (!(VAR_8 & VAR_4)) {
   FUNC_9("Failed to enable switch!\n");
   return -VAR_3;
  }
 }


 FUNC_3(VAR_6);

 if (VAR_6->dev->of_node)
  VAR_7 = FUNC_1(VAR_6);
 else
  VAR_7 = FUNC_0(VAR_6);

 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_6);

 return FUNC_4(VAR_6);
}
