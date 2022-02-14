
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_oxfw_stream_formation {int dummy; } ;
struct snd_oxfw {TYPE_2__* unit; TYPE_1__* card; int ** rx_stream_formats; int ** tx_stream_formats; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int card_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct snd_oxfw*,int,unsigned short,int *,unsigned int*,int **) ;
 int FUNC_1 (TYPE_2__*,int,int ,int *,unsigned int*,unsigned int) ;
 int FUNC_2 (int *,char*,unsigned int,char*,unsigned short,int) ;
 int * FUNC_3 (int *,int *,unsigned int,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int *,struct snd_oxfw_stream_formation*) ;

__attribute__((used)) static int FUNC_7(struct snd_oxfw *VAR_9,
          enum avc_general_plug_dir VAR_10,
          unsigned short VAR_11)
{
 u8 *VAR_12, **VAR_13;
 unsigned int VAR_14, VAR_15 = 0;
 struct snd_oxfw_stream_formation VAR_16;
 int VAR_17;

 VAR_12 = FUNC_5(VAR_2, VAR_7);
 if (VAR_12 == ((void*)0))
  return -VAR_5;

 if (VAR_10 == VAR_1)
  VAR_13 = VAR_9->tx_stream_formats;
 else
  VAR_13 = VAR_9->rx_stream_formats;


 VAR_14 = VAR_2;
 VAR_17 = FUNC_1(VAR_9->unit, VAR_10, 0, VAR_12, &VAR_14, 0);
 if (VAR_17 == -VAR_6) {

  VAR_14 = VAR_2;
  VAR_17 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, &VAR_14,
         VAR_13);
  goto end;
 } else if (VAR_17 < 0) {
  FUNC_2(&VAR_9->unit->device,
   "fail to get stream format %d for isoc %s plug %d:%d\n",
   VAR_15, (VAR_10 == VAR_0) ? "in" : "out",
   VAR_11, VAR_17);
  goto end;
 }


 while (VAR_15 < VAR_8) {

  if (VAR_14 < 3) {
   VAR_17 = -VAR_4;
   break;
  }


  VAR_17 = FUNC_6(VAR_12, &VAR_16);
  if (VAR_17 < 0)
   break;

  VAR_13[VAR_15] = FUNC_3(&VAR_9->card->card_dev, VAR_12, VAR_14,
         VAR_7);
  if (!VAR_13[VAR_15]) {
   VAR_17 = -VAR_5;
   break;
  }


  VAR_14 = VAR_2;
  VAR_17 = FUNC_1(VAR_9->unit, VAR_10, 0,
       VAR_12, &VAR_14, ++VAR_15);

  if (VAR_17 == -VAR_3) {
   VAR_17 = 0;
   break;
  } else if (VAR_17 < 0) {
   FUNC_2(&VAR_9->unit->device,
   "fail to get stream format %d for isoc %s plug %d:%d\n",
    VAR_15, (VAR_10 == VAR_0) ? "in" :
         "out",
    VAR_11, VAR_17);
   break;
  }
 }
end:
 FUNC_4(VAR_12);
 return VAR_17;
}
