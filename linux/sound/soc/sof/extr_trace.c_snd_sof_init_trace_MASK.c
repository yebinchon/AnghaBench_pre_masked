
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bytes; int area; } ;
struct snd_sof_dev {int dtrace_is_enabled; int dma_trace_pages; TYPE_1__ dmatp; TYPE_1__ dmatb; int trace_sleep; scalar_t__ first_boot; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct snd_sof_dev*,TYPE_1__*,int ,int ) ;
 int FUNC_6 (struct snd_sof_dev*) ;
 int FUNC_7 (struct snd_sof_dev*) ;

int FUNC_8(struct snd_sof_dev *VAR_4)
{
 int VAR_5;


 VAR_4->dtrace_is_enabled = 0;


 VAR_5 = FUNC_3(VAR_2, VAR_4->dev,
      VAR_1, &VAR_4->dmatp);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev,
   "error: can't alloc page table for trace %d\n", VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_3(VAR_3, VAR_4->dev,
      VAR_0, &VAR_4->dmatb);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev,
   "error: can't alloc buffer for trace %d\n", VAR_5);
  goto page_err;
 }


 VAR_5 = FUNC_5(VAR_4, &VAR_4->dmatb, VAR_4->dmatp.area,
     VAR_4->dmatb.bytes);
 if (VAR_5 < 0)
  goto table_err;

 VAR_4->dma_trace_pages = VAR_5;
 FUNC_0(VAR_4->dev, "dma_trace_pages: %d\n", VAR_4->dma_trace_pages);

 if (VAR_4->first_boot) {
  VAR_5 = FUNC_7(VAR_4);
  if (VAR_5 < 0)
   goto table_err;
 }

 FUNC_2(&VAR_4->trace_sleep);

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 < 0)
  goto table_err;

 return 0;
table_err:
 VAR_4->dma_trace_pages = 0;
 FUNC_4(&VAR_4->dmatb);
page_err:
 FUNC_4(&VAR_4->dmatp);
 return VAR_5;
}
