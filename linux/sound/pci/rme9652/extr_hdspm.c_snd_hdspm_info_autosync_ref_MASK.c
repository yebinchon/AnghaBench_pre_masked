
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hdspm {scalar_t__ io_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_info*,char const* const*) ;
 scalar_t__ VAR_1 ;
 struct hdspm* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
           struct snd_ctl_elem_info *VAR_3)
{
 struct hdspm *VAR_4 = FUNC_1(VAR_2);

 if (VAR_0 == VAR_4->io_type) {
  static const char *const VAR_5[] = { "WordClock", "AES1", "AES2", "AES3",
   "AES4", "AES5", "AES6", "AES7", "AES8", "TCO", "Sync In", "None"};

  FUNC_0(VAR_3, VAR_5);
 } else if (VAR_1 == VAR_4->io_type) {
  static const char *const VAR_6[] = {"Word Clock", "MADI", "TCO",
   "Sync In", "None" };

  FUNC_0(VAR_3, VAR_6);
 }
 return 0;
}
