
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct echoaudio {int asic_loaded; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct echoaudio*,scalar_t__*) ;
 int FUNC_2 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6;

 VAR_3->asic_loaded = 0;
 for (VAR_6 = VAR_5 = 0; VAR_6 < 5; VAR_6++) {
  FUNC_2(VAR_3, VAR_1);



  if (FUNC_1(VAR_3, &VAR_4) < 0) {
   FUNC_0(VAR_3->card->dev,
    "check_asic_status: failed on read_dsp\n");
   return -VAR_2;
  }

  if (VAR_4 == VAR_0) {
   if (++VAR_5 == 3) {
    VAR_3->asic_loaded = 1;
    return 0;
   }
  }
 }
 return -VAR_2;
}
