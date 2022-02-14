
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_sof_dev {int dev; } ;
struct TYPE_3__ {scalar_t__ code; int msg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (struct snd_sof_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_sof_dev *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3, VAR_0,
      VAR_1);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_4 == VAR_2[VAR_5].code) {
   FUNC_2(VAR_3->dev, "%s - code %8.8x\n",
    VAR_2[VAR_5].msg, VAR_4);
   return;
  }
 }


 FUNC_1(VAR_3->dev, "unknown ROM status value %8.8x\n", VAR_4);
}
