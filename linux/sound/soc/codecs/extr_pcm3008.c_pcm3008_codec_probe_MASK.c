
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct pcm3008_setup_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pcm3008_setup_data {int pdda_pin; int pdad_pin; int dem1_pin; int dem0_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_5)
{
 struct pcm3008_setup_data *VAR_6 = VAR_5->dev.platform_data;
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_0(&VAR_5->dev, VAR_6->dem0_pin,
        VAR_1, "codec_dem0");
 if (VAR_7 != 0)
  return VAR_7;


 VAR_7 = FUNC_0(&VAR_5->dev, VAR_6->dem1_pin,
        VAR_2, "codec_dem1");
 if (VAR_7 != 0)
  return VAR_7;


 VAR_7 = FUNC_0(&VAR_5->dev, VAR_6->pdad_pin,
        VAR_2, "codec_pdad");
 if (VAR_7 != 0)
  return VAR_7;


 VAR_7 = FUNC_0(&VAR_5->dev, VAR_6->pdda_pin,
        VAR_2, "codec_pdda");
 if (VAR_7 != 0)
  return VAR_7;

 return FUNC_1(&VAR_5->dev,
   &VAR_4, &VAR_3, 1);
}
