
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {TYPE_1__* dev; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_2(struct urb *VAR_1, gfp_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0 && VAR_3 != -VAR_0)
  FUNC_0(&VAR_1->dev->dev, "usb_submit_urb: %d\n", VAR_3);
 return VAR_3;
}
