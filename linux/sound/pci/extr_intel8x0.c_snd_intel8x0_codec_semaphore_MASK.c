
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0 {unsigned int codec_isr_bits; unsigned int* codec_bit; size_t* ac97_sdin; TYPE_1__* card; scalar_t__ buggy_semaphore; scalar_t__ in_sdin_init; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,unsigned int) ;
 int FUNC_2 (struct intel8x0*,int ) ;
 int FUNC_3 (struct intel8x0*,int ) ;
 unsigned int FUNC_4 (struct intel8x0*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct intel8x0 *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 > 2)
  return -VAR_2;
 if (VAR_5->in_sdin_init) {


  VAR_6 = VAR_5->codec_isr_bits;
 } else {
  VAR_6 = VAR_5->codec_bit[VAR_5->ac97_sdin[VAR_6]];
 }


 if ((FUNC_4(VAR_5, FUNC_0(VAR_3)) & VAR_6) == 0)
  return -VAR_2;

 if (VAR_5->buggy_semaphore)
  return 0;


 VAR_7 = 100;
       do {
        if (!(FUNC_3(VAR_5, FUNC_0(VAR_0)) & VAR_4))
         return 0;
  FUNC_5(10);
 } while (VAR_7--);




 FUNC_1(VAR_5->card->dev,
  "codec_semaphore: semaphore is not ready [0x%x][0x%x]\n",
   FUNC_3(VAR_5, FUNC_0(VAR_0)), FUNC_4(VAR_5, FUNC_0(VAR_3)));
 FUNC_2(VAR_5, 0);

 return -VAR_1;
}
