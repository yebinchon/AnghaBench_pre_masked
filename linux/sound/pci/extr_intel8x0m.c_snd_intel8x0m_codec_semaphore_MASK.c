
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0m {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,unsigned int) ;
 unsigned int FUNC_2 (struct intel8x0m*,unsigned int) ;
 int FUNC_3 (struct intel8x0m*,int ) ;
 int FUNC_4 (struct intel8x0m*,int ) ;
 unsigned int FUNC_5 (struct intel8x0m*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct intel8x0m *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 > 1)
  return -VAR_2;
 VAR_6 = FUNC_2(VAR_5, VAR_6);


 if ((FUNC_5(VAR_5, FUNC_0(VAR_3)) & VAR_6) == 0)
  return -VAR_2;


 VAR_7 = 100;
       do {
        if (!(FUNC_4(VAR_5, FUNC_0(VAR_0)) & VAR_4))
         return 0;
  FUNC_6(10);
 } while (VAR_7--);




 FUNC_1(VAR_5->card->dev,
  "codec_semaphore: semaphore is not ready [0x%x][0x%x]\n",
   FUNC_4(VAR_5, FUNC_0(VAR_0)), FUNC_5(VAR_5, FUNC_0(VAR_3)));
 FUNC_3(VAR_5, 0);

 return -VAR_1;
}
