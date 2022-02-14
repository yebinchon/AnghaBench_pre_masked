
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {struct slot* private_data; } ;
struct snd_mixer_oss_file {int dummy; } ;
struct slot {int present; int * numid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int ,int,int,int) ;
 int FUNC_1 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_mixer_oss_file *VAR_20,
         struct snd_mixer_oss_slot *VAR_21,
         int VAR_22, int VAR_23)
{
 struct slot *VAR_24 = VAR_21->private_data;

 if (VAR_24->present & VAR_19) {
  FUNC_1(VAR_20, VAR_21, VAR_24->numid[VAR_9], VAR_22, VAR_23);
  if (VAR_24->present & VAR_12)
   FUNC_1(VAR_20, VAR_21, VAR_24->numid[VAR_2], VAR_22, VAR_23);
 } else if (VAR_24->present & VAR_12) {
  FUNC_1(VAR_20, VAR_21,
   VAR_24->numid[VAR_2], VAR_22, VAR_23);
 } else if (VAR_24->present & VAR_16) {
  FUNC_1(VAR_20, VAR_21, VAR_24->numid[VAR_6], VAR_22, VAR_23);
 } else if (VAR_24->present & VAR_13) {
  FUNC_1(VAR_20, VAR_21, VAR_24->numid[VAR_3], VAR_22, VAR_23);
 }
 if (VAR_22 || VAR_23) {
  if (VAR_24->present & VAR_18)
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_8], VAR_22, VAR_23, 0);
  if (VAR_24->present & VAR_11)
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_1], VAR_22, VAR_23, 0);
  if (VAR_24->present & VAR_15)
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_5], VAR_22, VAR_23, 0);
  if (VAR_24->present & VAR_17)
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_7], VAR_22, VAR_23, 1);
  if (VAR_24->present & VAR_10)
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_0], VAR_22, VAR_23, 1);
  if (VAR_24->present & VAR_14)
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_4], VAR_22, VAR_23, 1);
 } else {
  if (VAR_24->present & VAR_18) {
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_8], VAR_22, VAR_23, 0);
  } else if (VAR_24->present & VAR_11) {
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_1], VAR_22, VAR_23, 0);
  } else if (VAR_24->present & VAR_15) {
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_5], VAR_22, VAR_23, 0);
  } else if (VAR_24->present & VAR_17) {
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_7], VAR_22, VAR_23, 1);
  } else if (VAR_24->present & VAR_10) {
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_0], VAR_22, VAR_23, 1);
  } else if (VAR_24->present & VAR_14) {
   FUNC_0(VAR_20, VAR_21, VAR_24->numid[VAR_4], VAR_22, VAR_23, 1);
  }
 }
 return 0;
}
