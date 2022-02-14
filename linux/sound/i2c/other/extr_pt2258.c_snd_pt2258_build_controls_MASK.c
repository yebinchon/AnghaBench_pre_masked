
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pt2258 {int card; } ;
struct TYPE_2__ {int p; } ;
struct snd_kcontrol_new {char* name; int count; int access; int private_value; int put; int get; int info; void* iface; TYPE_1__ tlv; } ;
typedef int knew ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct snd_kcontrol_new*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct snd_kcontrol_new*,struct snd_pt2258*) ;

int FUNC_3(struct snd_pt2258 *VAR_10)
{
 struct snd_kcontrol_new VAR_11;
 char *VAR_12[3] = {
  "Mic Loopback Playback Volume",
  "Line Loopback Playback Volume",
  "CD Loopback Playback Volume"
 };
 int VAR_13, VAR_14;

 for (VAR_13 = 0; VAR_13 < 3; ++VAR_13) {
  FUNC_0(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.name = VAR_12[VAR_13];
  VAR_11.iface = VAR_2;
  VAR_11.count = 1;
  VAR_11.access = VAR_0 |
      VAR_1;
  VAR_11.private_value = 2 * VAR_13;
  VAR_11.info = VAR_5;
  VAR_11.get = VAR_4;
  VAR_11.put = VAR_6;
  VAR_11.tlv.p = VAR_3;

  VAR_14 = FUNC_1(VAR_10->card, FUNC_2(&VAR_11, VAR_10));
  if (VAR_14 < 0)
   return VAR_14;
 }

 FUNC_0(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.name = "Loopback Switch";
 VAR_11.iface = VAR_2;
 VAR_11.info = VAR_8;
 VAR_11.get = VAR_7;
 VAR_11.put = VAR_9;
 VAR_11.access = 0;
 VAR_14 = FUNC_1(VAR_10->card, FUNC_2(&VAR_11, VAR_10));
 if (VAR_14 < 0)
  return VAR_14;

 return 0;
}
