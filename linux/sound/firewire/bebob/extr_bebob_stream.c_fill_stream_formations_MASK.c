
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_bebob_stream_formation {int dummy; } ;
struct snd_bebob {TYPE_1__* unit; struct snd_bebob_stream_formation* tx_stream_formations; struct snd_bebob_stream_formation* rx_stream_formations; } ;
typedef enum avc_bridgeco_plug_dir { ____Placeholder_avc_bridgeco_plug_dir } avc_bridgeco_plug_dir ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int *,int,int ,unsigned short) ;
 int FUNC_1 (TYPE_1__*,int *,int *,unsigned int*,unsigned int) ;
 int FUNC_2 (int *,char*,unsigned int,char*,unsigned short,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *,unsigned int,struct snd_bebob_stream_formation*) ;

__attribute__((used)) static int
FUNC_6(struct snd_bebob *VAR_8, enum avc_bridgeco_plug_dir VAR_9,
         unsigned short VAR_10)
{
 u8 *VAR_11;
 struct snd_bebob_stream_formation *VAR_12;
 unsigned int VAR_13, VAR_14;
 u8 VAR_15[VAR_0];
 int VAR_16;

 VAR_11 = FUNC_4(VAR_5, VAR_6);
 if (VAR_11 == ((void*)0))
  return -VAR_4;

 if (VAR_9 == VAR_1)
  VAR_12 = VAR_8->rx_stream_formations;
 else
  VAR_12 = VAR_8->tx_stream_formations;

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_13 = VAR_5;
  FUNC_0(VAR_15, VAR_9,
         VAR_2, VAR_10);
  VAR_16 = FUNC_1(VAR_8->unit, VAR_15, VAR_11,
           &VAR_13, VAR_14);

  if (VAR_16 == -VAR_3 && VAR_14 > 0) {
   VAR_16 = 0;
   break;
  } else if (VAR_16 < 0) {
   FUNC_2(&VAR_8->unit->device,
   "fail to get stream format %d for isoc %s plug %d:%d\n",
    VAR_14,
    (VAR_9 == VAR_1) ? "in" :
            "out",
    VAR_10, VAR_16);
   break;
  }

  VAR_16 = FUNC_5(VAR_11, VAR_13, VAR_12);
  if (VAR_16 < 0)
   break;
 }

 FUNC_3(VAR_11);
 return VAR_16;
}
