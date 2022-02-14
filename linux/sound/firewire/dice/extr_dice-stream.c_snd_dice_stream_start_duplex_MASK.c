
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_dice {scalar_t__ substreams_counter; scalar_t__** tx_pcm_chs; scalar_t__** rx_pcm_chs; int domain; int * rx_stream; int * tx_stream; TYPE_3__* unit; TYPE_4__* rx_resources; TYPE_4__* tx_resources; } ;
struct reg_params {unsigned int count; } ;
typedef enum snd_dice_rate_mode { ____Placeholder_snd_dice_rate_mode } snd_dice_rate_mode ;
struct TYPE_8__ {unsigned int generation; } ;
struct TYPE_7__ {int device; } ;
struct TYPE_6__ {TYPE_1__* card; } ;
struct TYPE_5__ {unsigned int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct snd_dice*,struct reg_params*,struct reg_params*) ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_2__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct snd_dice*,struct reg_params*,struct reg_params*) ;
 int FUNC_10 (struct snd_dice*,unsigned int,int*) ;
 int FUNC_11 (struct snd_dice*,unsigned int*) ;
 int FUNC_12 (struct snd_dice*) ;
 int FUNC_13 (struct snd_dice*,int ,unsigned int,struct reg_params*) ;

int FUNC_14(struct snd_dice *VAR_6)
{
 unsigned int VAR_7 = VAR_6->rx_resources[0].generation;
 struct reg_params VAR_8, VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 enum snd_dice_rate_mode VAR_12;
 int VAR_13;

 if (VAR_6->substreams_counter == 0)
  return -VAR_3;

 VAR_13 = FUNC_9(VAR_6, &VAR_8, &VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
  if (FUNC_4(&VAR_6->tx_stream[VAR_10]) ||
      FUNC_4(&VAR_6->rx_stream[VAR_10])) {
   FUNC_1(&VAR_6->domain);
   FUNC_6(VAR_6, &VAR_8, &VAR_9);
   break;
  }
 }

 if (VAR_7 != FUNC_8(VAR_6->unit)->card->generation) {
  for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
   if (VAR_10 < VAR_8.count)
    FUNC_7(VAR_6->tx_resources + VAR_10);
   if (VAR_10 < VAR_9.count)
    FUNC_7(VAR_6->rx_resources + VAR_10);
  }
 }


 VAR_13 = FUNC_11(VAR_6, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_13 = FUNC_10(VAR_6, VAR_11, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
  if (VAR_6->tx_pcm_chs[VAR_10][VAR_12] > 0 &&
      !FUNC_2(&VAR_6->tx_stream[VAR_10]))
   break;
  if (VAR_6->rx_pcm_chs[VAR_10][VAR_12] > 0 &&
      !FUNC_2(&VAR_6->rx_stream[VAR_10]))
   break;
 }
 if (VAR_10 < VAR_5) {

  VAR_13 = FUNC_13(VAR_6, VAR_0, VAR_11, &VAR_8);
  if (VAR_13 < 0)
   goto error;

  VAR_13 = FUNC_13(VAR_6, VAR_1, VAR_11, &VAR_9);
  if (VAR_13 < 0)
   goto error;

  VAR_13 = FUNC_12(VAR_6);
  if (VAR_13 < 0) {
   FUNC_5(&VAR_6->unit->device,
    "fail to enable interface\n");
   goto error;
  }

  VAR_13 = FUNC_0(&VAR_6->domain);
  if (VAR_13 < 0)
   goto error;

  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   if ((VAR_10 < VAR_8.count &&
       !FUNC_3(&VAR_6->tx_stream[VAR_10],
       VAR_2)) ||
       (VAR_10 < VAR_9.count &&
        !FUNC_3(&VAR_6->rx_stream[VAR_10],
        VAR_2))) {
    VAR_13 = -VAR_4;
    goto error;
   }
  }
 }

 return 0;
error:
 FUNC_1(&VAR_6->domain);
 FUNC_6(VAR_6, &VAR_8, &VAR_9);
 return VAR_13;
}
