
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_card_asihpi {TYPE_3__* pci; int h_mixer; TYPE_2__* hpi; struct snd_card* card; } ;
struct snd_card {int mixername; } ;
struct hpi_control {int control_type; scalar_t__ src_node_type; scalar_t__ src_node_index; scalar_t__ dst_node_type; scalar_t__ dst_node_index; int h_control; } ;
typedef int prev_ctl ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* adapter; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,unsigned int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned int,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct hpi_control*,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct snd_card_asihpi*,struct hpi_control*) ;
 int FUNC_7 (struct snd_card_asihpi*,struct hpi_control*) ;
 int FUNC_8 (struct snd_card_asihpi*,struct hpi_control*) ;
 int FUNC_9 (struct snd_card_asihpi*,struct hpi_control*) ;
 int FUNC_10 (struct snd_card_asihpi*,struct hpi_control*,unsigned int) ;
 int FUNC_11 (struct snd_card_asihpi*,struct hpi_control*) ;
 int FUNC_12 (struct snd_card_asihpi*,struct hpi_control*) ;
 int FUNC_13 (struct snd_card_asihpi*,struct hpi_control*) ;
 int FUNC_14 (struct snd_card_asihpi*,struct hpi_control*) ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static int FUNC_16(struct snd_card_asihpi *VAR_6)
{
 struct snd_card *VAR_7;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 int VAR_10;
 struct hpi_control VAR_11, VAR_12;

 if (FUNC_5(!VAR_6))
  return -VAR_0;
 VAR_7 = VAR_6->card;
 FUNC_15(VAR_7->mixername, "Asihpi Mixer");

 VAR_10 =
     FUNC_3(VAR_6->hpi->adapter->index,
     &VAR_6->h_mixer);
 FUNC_1(VAR_10);
 if (VAR_10)
  return -VAR_10;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.control_type = -1;

 for (VAR_8 = 0; VAR_8 < 2000; VAR_8++) {
  VAR_10 = FUNC_2(
    VAR_6->h_mixer,
    VAR_8,
    &VAR_11.src_node_type,
    &VAR_11.src_node_index,
    &VAR_11.dst_node_type,
    &VAR_11.dst_node_index,
    &VAR_11.control_type,
    &VAR_11.h_control);
  if (VAR_10) {
   if (VAR_10 == VAR_2) {
    if (VAR_5)
     FUNC_0(&VAR_6->pci->dev,
         "Disabled HPI Control(%d)\n",
         VAR_8);
    continue;
   } else
    break;

  }

  VAR_11.src_node_type -= VAR_4;
  VAR_11.dst_node_type -= VAR_1;





  if ((VAR_11.control_type == VAR_12.control_type) &&
      (VAR_11.src_node_type == VAR_12.src_node_type) &&
      (VAR_11.src_node_index == VAR_12.src_node_index) &&
      (VAR_11.dst_node_type == VAR_12.dst_node_type) &&
      (VAR_11.dst_node_index == VAR_12.dst_node_index))
   VAR_9++;
  else
   VAR_9 = 0;

  VAR_12 = VAR_11;

  switch (VAR_11.control_type) {
  case 129:
   VAR_10 = FUNC_14(VAR_6, &VAR_11);
   break;
  case 136:
   VAR_10 = FUNC_9(VAR_6, &VAR_11);
   break;
  case 133:
   VAR_10 = FUNC_11(VAR_6, &VAR_11);
   break;
  case 139:
   VAR_10 = FUNC_8(VAR_6, &VAR_11);
   break;
  case 135:
   VAR_10 = FUNC_10(VAR_6, &VAR_11, VAR_9);
   break;
  case 131:
   VAR_10 = FUNC_12(
      VAR_6, &VAR_11);
   break;
  case 137:
   continue;
  case 130:
   VAR_10 = FUNC_13(VAR_6, &VAR_11);
   break;
  case 141:
   VAR_10 = FUNC_7(VAR_6, &VAR_11);
   break;
  case 142:
   VAR_10 = FUNC_6(VAR_6, &VAR_11);
   break;
  case 128:
  case 140:
  case 134:
  case 132:
  case 138:
  default:
   if (VAR_5)
    FUNC_0(&VAR_6->pci->dev,
     "Untranslated HPI Control (%d) %d %d %d %d %d\n",
     VAR_8,
     VAR_11.control_type,
     VAR_11.src_node_type,
     VAR_11.src_node_index,
     VAR_11.dst_node_type,
     VAR_11.dst_node_index);
   continue;
  }
  if (VAR_10 < 0)
   return VAR_10;
 }
 if (VAR_3 != VAR_10)
  FUNC_1(VAR_10);

 FUNC_0(&VAR_6->pci->dev, "%d mixer controls found\n", VAR_8);

 return 0;
}
