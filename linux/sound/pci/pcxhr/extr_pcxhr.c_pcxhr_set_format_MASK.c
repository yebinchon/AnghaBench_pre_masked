
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcxhr {TYPE_2__* card; TYPE_4__* mgr; } ;
struct pcxhr_stream {int format; int channels; TYPE_1__* pipe; TYPE_3__* substream; } ;
struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct TYPE_9__ {int sample_rate; } ;
struct TYPE_8__ {int number; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int is_capture; int first_audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;






 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct pcxhr_rmh*,int ) ;
 int FUNC_3 (TYPE_4__*,struct pcxhr_rmh*) ;
 int FUNC_4 (struct pcxhr_rmh*,int,int ,int,int ) ;
 struct snd_pcxhr* FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct pcxhr_stream *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 struct snd_pcxhr *VAR_16;
 struct pcxhr_rmh VAR_17;
 unsigned int VAR_18;

 VAR_16 = FUNC_5(VAR_11->substream);
 switch (VAR_11->format) {
 case 128:
  VAR_18 = VAR_6;
  break;
 case 131:
  VAR_18 = VAR_6 |
    VAR_3 | VAR_7;
  break;
 case 132:
  VAR_18 = VAR_6 | VAR_3;
  break;
 case 129:
  VAR_18 = VAR_6 |
    VAR_4 | VAR_7;
  break;
 case 130:
  VAR_18 = VAR_6 | VAR_4;
  break;
 case 133:
  VAR_18 = VAR_5 | VAR_7;
  break;
 default:
  FUNC_1(VAR_16->card->dev,
   "error pcxhr_set_format() : unknown format\n");
  return -VAR_2;
 }

 VAR_14 = VAR_16->mgr->sample_rate;
 if (VAR_14 <= 32000 && VAR_14 !=0) {
  if (VAR_14 <= 11025)
   VAR_18 |= VAR_9;
  else
   VAR_18 |= VAR_10;
 }
 if (VAR_11->channels == 1)
  VAR_18 |= VAR_8;

 VAR_13 = VAR_11->pipe->is_capture;
 VAR_15 = VAR_13 ? 0 : VAR_11->substream->number;

 FUNC_2(&VAR_17, VAR_13 ?
         VAR_0 : VAR_1);
 FUNC_4(&VAR_17, VAR_13, VAR_11->pipe->first_audio,
      VAR_15, 0);
 if (VAR_13) {


  if (FUNC_0(VAR_16->mgr))
   VAR_17.cmd[0] |= 1<<10;
  else
   VAR_17.cmd[0] |= 1<<12;
 }
 VAR_17.cmd[1] = 0;
 VAR_17.cmd_len = 2;
 if (FUNC_0(VAR_16->mgr)) {

  VAR_17.cmd[1] = VAR_11->channels;
  if (!VAR_13) {

   VAR_17.cmd[2] = (VAR_11->channels == 1) ? 0x01 : 0x03;
   VAR_17.cmd_len = 3;
  }
 }
 VAR_17.cmd[VAR_17.cmd_len++] = VAR_18 >> 8;
 VAR_17.cmd[VAR_17.cmd_len++] = (VAR_18 & 0xff) << 16;
 VAR_12 = FUNC_3(VAR_16->mgr, &VAR_17);
 if (VAR_12)
  FUNC_1(VAR_16->card->dev,
   "ERROR pcxhr_set_format err=%x;\n", VAR_12);
 return VAR_12;
}
