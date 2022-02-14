
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int * ctls; } ;
struct hda_gen_spec {unsigned long long mute_bits; scalar_t__ keep_vref_in_automute; scalar_t__ auto_mute_via_amp; } ;
struct hda_codec {scalar_t__ power_save_node; struct hda_gen_spec* spec; } ;
typedef unsigned long long hda_nid_t ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct hda_codec*,unsigned long long) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct hda_codec*,unsigned long long,int,int) ;
 int FUNC_3 (struct hda_codec*,unsigned long long,int) ;
 unsigned int FUNC_4 (struct hda_codec*,unsigned long long) ;
 struct nid_path* FUNC_5 (struct hda_codec*,int) ;
 int FUNC_6 (struct hda_codec*,unsigned long long,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct hda_codec *VAR_3, int VAR_4, hda_nid_t *VAR_5,
   int *VAR_6, bool VAR_7)
{
 struct hda_gen_spec *VAR_8 = VAR_3->spec;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  hda_nid_t VAR_10 = VAR_5[VAR_9];
  unsigned int VAR_11, VAR_12;
  if (!VAR_10)
   break;

  VAR_12 = FUNC_4(VAR_3, VAR_10);
  if (VAR_12 & VAR_2)
   continue;

  if (VAR_8->auto_mute_via_amp) {
   struct nid_path *VAR_13;
   hda_nid_t VAR_14;

   VAR_13 = FUNC_5(VAR_3, VAR_6[VAR_9]);
   if (!VAR_13)
    continue;
   VAR_14 = FUNC_1(VAR_13->ctls[VAR_0]);
   if (!VAR_14)
    continue;
   if (VAR_7)
    VAR_8->mute_bits |= (1ULL << VAR_14);
   else
    VAR_8->mute_bits &= ~(1ULL << VAR_14);
   continue;
  } else {



   if (VAR_8->keep_vref_in_automute)
    VAR_11 = VAR_12 & ~VAR_1;
   else
    VAR_11 = 0;
   if (!VAR_7)
    VAR_11 |= VAR_12;





   FUNC_6(VAR_3, VAR_10, VAR_11);
  }

  FUNC_3(VAR_3, VAR_10, !VAR_7);
  if (VAR_3->power_save_node) {
   bool VAR_15 = !VAR_7;
   if (VAR_15)
    VAR_15 = FUNC_0(VAR_3, VAR_10);
   FUNC_2(VAR_3, VAR_10, VAR_15, -1);
  }
 }
}
