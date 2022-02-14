
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stream_tag; int (* cleanup ) (int ,int *,int ) ;int (* trigger ) (int ,int,int ) ;} ;
struct sst_dsp {TYPE_1__ dsp_ops; int dmab; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sst_dsp*,int ,int ,int ,int ,char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct sst_dsp *VAR_4)
{
 int VAR_5;

 VAR_4->dsp_ops.trigger(VAR_4->dev, 1, VAR_4->dsp_ops.stream_tag);
 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_3,
        VAR_2, VAR_1,
        "firmware boot");

 VAR_4->dsp_ops.trigger(VAR_4->dev, 0, VAR_4->dsp_ops.stream_tag);
 VAR_4->dsp_ops.cleanup(VAR_4->dev, &VAR_4->dmab, VAR_4->dsp_ops.stream_tag);

 return VAR_5;
}
