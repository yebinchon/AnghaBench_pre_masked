
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {char* platform; } ;
struct snd_soc_acpi_mach {TYPE_3__ mach_params; } ;
struct TYPE_16__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_6__ dev; } ;
struct bxt_card_private {int hdmi_pcm_list; } ;
struct TYPE_17__ {char* name; TYPE_2__* cpus; TYPE_1__* codecs; } ;
struct TYPE_15__ {char* name; TYPE_6__* dev; } ;
struct TYPE_13__ {char* dai_name; } ;
struct TYPE_12__ {int dai_name; } ;


 unsigned int FUNC_0 (TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_4__ VAR_4 ;
 TYPE_9__* VAR_5 ;
 struct bxt_card_private* FUNC_2 (TYPE_6__*,int,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,struct bxt_card_private*) ;
 int FUNC_5 (TYPE_4__*,char const*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct bxt_card_private *VAR_7;
 struct snd_soc_acpi_mach *VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(&VAR_6->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_1(&VAR_7->hdmi_pcm_list);

 VAR_4.dev = &VAR_6->dev;
 FUNC_4(&VAR_4, VAR_7);
 if (FUNC_7()) {
  unsigned int VAR_11;

  VAR_4.name = "glkda7219max";

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {

   if (!FUNC_8(VAR_5[VAR_11].codecs->dai_name,
        VAR_1)) {
    VAR_5[VAR_11].name = "SSP1-Codec";
    VAR_5[VAR_11].cpus->dai_name = "SSP1 Pin";
   }

   else if (!FUNC_8(VAR_5[VAR_11].codecs->dai_name,
      VAR_0)) {
    VAR_5[VAR_11].name = "SSP2-Codec";
    VAR_5[VAR_11].cpus->dai_name = "SSP2 Pin";
   }
  }
 } else if (FUNC_6()) {
  unsigned int VAR_12;

  VAR_4.name = "cmlda7219max";

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++) {

   if (!FUNC_8(VAR_5[VAR_12].codecs->dai_name,
     VAR_1)) {
    VAR_5[VAR_12].name = "SSP1-Codec";
    VAR_5[VAR_12].cpus->dai_name = "SSP1 Pin";
   }

   else if (!FUNC_8(VAR_5[VAR_12].codecs->dai_name,
     VAR_0)) {
    VAR_5[VAR_12].name = "SSP0-Codec";
    VAR_5[VAR_12].cpus->dai_name = "SSP0 Pin";
   }
  }
 }


 VAR_8 = (&VAR_6->dev)->platform_data;
 VAR_9 = VAR_8->mach_params.platform;

 VAR_10 = FUNC_5(&VAR_4,
          VAR_9);
 if (VAR_10)
  return VAR_10;

 return FUNC_3(&VAR_6->dev, &VAR_4);
}
