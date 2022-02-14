
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_hal2 {TYPE_1__* card; } ;
struct hal2_desc {int dummy; } ;
struct hal2_codec {int desc_count; int buffer_dma; int buffer; int desc_dma; int desc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_hal2 *VAR_2, struct hal2_codec *VAR_3)
{
 struct device *VAR_4 = VAR_2->card->dev;

 FUNC_0(VAR_4, VAR_3->desc_count * sizeof(struct hal2_desc),
         VAR_3->desc, VAR_3->desc_dma, VAR_0);
 FUNC_0(VAR_4, VAR_1, VAR_3->buffer, VAR_3->buffer_dma,
         VAR_0);
}
