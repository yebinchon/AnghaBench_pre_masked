
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct lx_stream {int stream; } ;
struct lx6464es {TYPE_1__* card; struct lx_stream playback_stream; struct lx_stream capture_stream; int irqsrc; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct lx6464es*,int ,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct lx6464es*,struct lx_stream*) ;
 int FUNC_4 (int ) ;

irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct lx6464es *VAR_3 = VAR_2;
 u64 VAR_4 = 0;
 u64 VAR_5 = 0;
 int VAR_6;
 int VAR_7;


 VAR_7 = FUNC_2(VAR_3, VAR_3->irqsrc,
            &VAR_6,
            &VAR_4,
            &VAR_5);
 if (VAR_7)
  FUNC_1(VAR_3->card->dev, "error handling async events\n");

 if (VAR_4) {
  struct lx_stream *VAR_8 = &VAR_3->capture_stream;

  FUNC_0(VAR_3->card->dev,
   "requesting audio transfer for capture\n");
  VAR_7 = FUNC_3(VAR_3, VAR_8);
  if (VAR_7 < 0)
   FUNC_1(VAR_3->card->dev,
    "cannot request new buffer for capture\n");
  FUNC_4(VAR_8->stream);
 }

 if (VAR_5) {
  struct lx_stream *VAR_9 = &VAR_3->playback_stream;

  FUNC_0(VAR_3->card->dev,
   "requesting audio transfer for playback\n");
  VAR_7 = FUNC_3(VAR_3, VAR_9);
  if (VAR_7 < 0)
   FUNC_1(VAR_3->card->dev,
    "cannot request new buffer for playback\n");
  FUNC_4(VAR_9->stream);
 }

 return VAR_0;
}
