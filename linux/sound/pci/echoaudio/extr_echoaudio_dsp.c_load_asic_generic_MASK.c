
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct firmware {size_t size; scalar_t__ data; } ;
struct echoaudio {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct firmware const*,struct echoaudio*) ;
 int FUNC_3 (struct firmware const**,struct echoaudio*,short) ;
 scalar_t__ FUNC_4 (struct echoaudio*,size_t) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_1, u32 VAR_2, short VAR_3)
{
 const struct firmware *VAR_4;
 int VAR_5;
 u32 VAR_6, VAR_7;
 u8 *VAR_8;

 VAR_5 = FUNC_3(&VAR_4, VAR_1, VAR_3);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1->card->dev, "Firmware not found !\n");
  return VAR_5;
 }

 VAR_8 = (u8 *)VAR_4->data;
 VAR_7 = VAR_4->size;


 if (FUNC_4(VAR_1, VAR_2) < 0)
  goto la_error;


 if (FUNC_4(VAR_1, VAR_7) < 0)
  goto la_error;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (FUNC_4(VAR_1, VAR_8[VAR_6]) < 0)
   goto la_error;
 }

 FUNC_2(VAR_4, VAR_1);
 return 0;

la_error:
 FUNC_0(VAR_1->card->dev, "failed on write_dsp\n");
 FUNC_2(VAR_4, VAR_1);
 return -VAR_0;
}
