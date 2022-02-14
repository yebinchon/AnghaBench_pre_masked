
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_core {scalar_t__ type; TYPE_1__* card; } ;
struct firmware {unsigned char* data; unsigned int size; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct vx_core*,unsigned int,int,unsigned char const) ;
 unsigned int FUNC_4 (struct vx_core*,int ) ;
 int FUNC_5 (struct vx_core*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct vx_core *VAR_8, const struct firmware *VAR_9)
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 const unsigned char *VAR_12;


 FUNC_5(VAR_8, VAR_0, VAR_4 | VAR_7);
 FUNC_4(VAR_8, VAR_0);
 FUNC_2(10);
 FUNC_5(VAR_8, VAR_0, VAR_4);
 FUNC_4(VAR_8, VAR_0);
 FUNC_2(10);

 if (VAR_8->type == VAR_6)
  VAR_11 = VAR_3;
 else
  VAR_11 = VAR_5;

 VAR_12 = VAR_9->data;
 for (VAR_10 = 0; VAR_10 < VAR_9->size; VAR_10++, VAR_12++) {
  if (FUNC_3(VAR_8, VAR_11, 8, *VAR_12) < 0)
   return -VAR_1;

  FUNC_0();
 }
 FUNC_3(VAR_8, VAR_11, 4, 0xff);

 FUNC_2(200);


 if (VAR_8->type != VAR_6) {

  VAR_10 = FUNC_4(VAR_8, VAR_2);
  if (VAR_10 & 0x0100)
   return 0;
  FUNC_1(VAR_8->card->dev,
   "xilinx test failed after load, GPIOC=0x%x\n", VAR_10);
  return -VAR_1;
 }

 return 0;
}
