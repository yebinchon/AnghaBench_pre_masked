
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {scalar_t__ subsystem_vendor; int subsystem_device; scalar_t__ id; } ;
struct ac97_quirk {scalar_t__ subvendor; int mask; int subdevice; scalar_t__ codec_id; int name; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ac97*,char*,int ,scalar_t__,int) ;
 int FUNC_1 (struct snd_ac97*,char*,char const*,int,...) ;
 int FUNC_2 (struct snd_ac97*,int ) ;
 int FUNC_3 (struct snd_ac97*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(struct snd_ac97 *VAR_1,
      const struct ac97_quirk *VAR_2, const char *VAR_3)
{
 int VAR_4;


 if (VAR_3 && FUNC_4(VAR_3, "-1") && FUNC_4(VAR_3, "default")) {
  VAR_4 = FUNC_3(VAR_1, VAR_3);
  if (VAR_4 < 0)
   FUNC_1(VAR_1, "applying quirk type %s failed (%d)\n",
     VAR_3, VAR_4);
  return VAR_4;
 }

 if (! VAR_2)
  return -VAR_0;

 for (; VAR_2->subvendor; VAR_2++) {
  if (VAR_2->subvendor != VAR_1->subsystem_vendor)
   continue;
  if ((! VAR_2->mask && VAR_2->subdevice == VAR_1->subsystem_device) ||
      VAR_2->subdevice == (VAR_2->mask & VAR_1->subsystem_device)) {
   if (VAR_2->codec_id && VAR_2->codec_id != VAR_1->id)
    continue;
   FUNC_0(VAR_1, "ac97 quirk for %s (%04x:%04x)\n",
     VAR_2->name, VAR_1->subsystem_vendor,
     VAR_1->subsystem_device);
   VAR_4 = FUNC_2(VAR_1, VAR_2->type);
   if (VAR_4 < 0)
    FUNC_1(VAR_1,
      "applying quirk type %d for %s failed (%d)\n",
      VAR_2->type, VAR_2->name, VAR_4);
   return VAR_4;
  }
 }
 return 0;
}
