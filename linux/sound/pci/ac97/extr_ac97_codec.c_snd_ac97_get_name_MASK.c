
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;
struct ac97_codec_id {char* name; int flags; int mask; int (* patch ) (struct snd_ac97*) ;} ;


 int VAR_0 ;
 struct ac97_codec_id* FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,unsigned int,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct snd_ac97*) ;
 int FUNC_7 (struct snd_ac97*) ;

void FUNC_8(struct snd_ac97 *VAR_3, unsigned int VAR_4, char *VAR_5, int VAR_6)
{
 const struct ac97_codec_id *VAR_7;

 FUNC_2(VAR_5, "0x%x %c%c%c", VAR_4,
  FUNC_1(VAR_4 >> 24),
  FUNC_1(VAR_4 >> 16),
  FUNC_1(VAR_4 >> 8));
 VAR_7 = FUNC_0(VAR_1, VAR_4);
 if (! VAR_7)
  return;

 FUNC_4(VAR_5, VAR_7->name);
 if (VAR_3 && VAR_7->patch) {
  if ((VAR_6 && (VAR_7->flags & VAR_0)) ||
      (! VAR_6 && ! (VAR_7->flags & VAR_0)))
   VAR_7->patch(VAR_3);
 }

 VAR_7 = FUNC_0(VAR_2, VAR_4);
 if (VAR_7) {
  FUNC_3(VAR_5, " ");
  FUNC_3(VAR_5, VAR_7->name);
  if (VAR_7->mask != 0xffffffff)
   FUNC_2(VAR_5 + FUNC_5(VAR_5), " rev %d", VAR_4 & ~VAR_7->mask);
  if (VAR_3 && VAR_7->patch) {
   if ((VAR_6 && (VAR_7->flags & VAR_0)) ||
       (! VAR_6 && ! (VAR_7->flags & VAR_0)))
    VAR_7->patch(VAR_3);
  }
 } else
  FUNC_2(VAR_5 + FUNC_5(VAR_5), " id %x", VAR_4 & 0xff);
}
