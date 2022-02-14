
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_endpoint {scalar_t__ use_count; int fill_max; int type; int nurbs; int ep_num; TYPE_1__* chip; scalar_t__ phase; int freqshift; int freqn; int freqm; int maxpacksize; int datainterval; } ;
struct audioformat {int attributes; int maxpacksize; int datainterval; } ;
typedef int snd_pcm_format_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct snd_usb_endpoint*,int ,unsigned int,unsigned int,unsigned int,unsigned int,struct audioformat*,struct snd_usb_endpoint*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct snd_usb_endpoint*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct snd_usb_endpoint*) ;
 int FUNC_6 (TYPE_1__*,char*,int ,int,int ,int) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;

int FUNC_8(struct snd_usb_endpoint *VAR_5,
    snd_pcm_format_t VAR_6,
    unsigned int VAR_7,
    unsigned int VAR_8,
    unsigned int VAR_9,
    unsigned int VAR_10,
    unsigned int VAR_11,
    struct audioformat *VAR_12,
    struct snd_usb_endpoint *VAR_13)
{
 int VAR_14;

 if (VAR_5->use_count != 0) {
  FUNC_7(VAR_5->chip,
    "Unable to change format on ep #%x: already in use\n",
    VAR_5->ep_num);
  return -VAR_0;
 }


 FUNC_3(VAR_5, 0);

 VAR_5->datainterval = VAR_12->datainterval;
 VAR_5->maxpacksize = VAR_12->maxpacksize;
 VAR_5->fill_max = !!(VAR_12->attributes & VAR_3);

 if (FUNC_4(VAR_5->chip->dev) == VAR_4)
  VAR_5->freqn = FUNC_1(VAR_11);
 else
  VAR_5->freqn = FUNC_2(VAR_11);


 VAR_5->freqm = VAR_5->freqn;
 VAR_5->freqshift = VAR_2;

 VAR_5->phase = 0;

 switch (VAR_5->type) {
 case 129:
  VAR_14 = FUNC_0(VAR_5, VAR_6, VAR_7,
      VAR_8, VAR_9,
      VAR_10, VAR_12, VAR_13);
  break;
 case 128:
  VAR_14 = FUNC_5(VAR_5);
  break;
 default:
  VAR_14 = -VAR_1;
 }

 FUNC_6(VAR_5->chip,
  "Setting params for ep #%x (type %d, %d urbs), ret=%d\n",
  VAR_5->ep_num, VAR_5->type, VAR_5->nurbs, VAR_14);

 return VAR_14;
}
