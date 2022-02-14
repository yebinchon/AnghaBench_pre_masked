
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int id; } ;
struct ac97_codec_id {int id; int mask; char const* name; } ;


 struct ac97_codec_id* VAR_0 ;

const char *FUNC_0(struct snd_ac97 *VAR_1)
{
 const struct ac97_codec_id *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->id; VAR_2++)
  if (VAR_2->id == (VAR_1->id & VAR_2->mask))
   return VAR_2->name;
 return "unknown codec";
}
