
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_hal2 {TYPE_1__* card; } ;
struct TYPE_4__ {int cntinfo; void* pnext; void* pbuf; } ;
struct hal2_desc {TYPE_2__ desc; } ;
struct hal2_codec {int desc_count; struct hal2_desc* desc; void* desc_dma; void* buffer_dma; void* buffer; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (struct device*,int,void**,int ,int ) ;
 int FUNC_1 (struct device*,struct hal2_desc*,int,int ) ;
 int FUNC_2 (struct device*,int,void*,void*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_hal2 *VAR_7, struct hal2_codec *VAR_8)
{
 struct device *VAR_9 = VAR_7->card->dev;
 struct hal2_desc *VAR_10;
 dma_addr_t VAR_11, VAR_12;
 int VAR_13 = VAR_5 / VAR_4;
 int VAR_14;

 VAR_8->buffer = FUNC_0(VAR_9, VAR_5, &VAR_12,
     VAR_3, VAR_0);
 if (!VAR_8->buffer)
  return -VAR_2;
 VAR_10 = FUNC_0(VAR_9, VAR_13 * sizeof(struct hal2_desc),
          &VAR_11, VAR_3, VAR_0);
 if (!VAR_10) {
  FUNC_2(VAR_9, VAR_5, VAR_8->buffer, VAR_12,
          VAR_0);
  return -VAR_2;
 }
 VAR_8->buffer_dma = VAR_12;
 VAR_8->desc_dma = VAR_11;
 VAR_8->desc = VAR_10;
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_10->desc.pbuf = VAR_12 + VAR_14 * VAR_4;
  VAR_10->desc.cntinfo = VAR_6 | VAR_4;
  VAR_10->desc.pnext = (VAR_14 == VAR_13 - 1) ?
        VAR_11 : VAR_11 + (VAR_14 + 1) * sizeof(struct hal2_desc);
  VAR_10++;
 }
 FUNC_1(VAR_9, VAR_8->desc, VAR_13 * sizeof(struct hal2_desc),
         VAR_1);
 VAR_8->desc_count = VAR_13;
 return 0;
}
