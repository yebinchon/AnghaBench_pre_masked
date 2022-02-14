
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {unsigned int* ctls; } ;
struct hda_gen_spec {scalar_t__ dac_min_mute; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct hda_codec*,unsigned int,size_t) ;
 scalar_t__ FUNC_4 (struct hda_codec*,struct nid_path*) ;
 scalar_t__ FUNC_5 (struct hda_codec*,struct nid_path*) ;
 scalar_t__ FUNC_6 (struct hda_codec*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_8, struct nid_path *VAR_9)
{
 struct hda_gen_spec *VAR_10 = VAR_8->spec;
 hda_nid_t VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;

 if (!VAR_9)
  return VAR_2 * 2;

 if (VAR_9->ctls[VAR_7] ||
     VAR_9->ctls[VAR_6])
  return 0;

 VAR_11 = FUNC_5(VAR_8, VAR_9);
 if (VAR_11) {
  VAR_12 = FUNC_0(VAR_11, 3, 0, VAR_5);
  if (VAR_10->dac_min_mute)
   VAR_12 |= VAR_3;
  if (FUNC_3(VAR_8, VAR_12, VAR_7))
   VAR_13 += VAR_2;
  else
   VAR_9->ctls[VAR_7] = VAR_12;
 } else
  VAR_13 += VAR_2;
 VAR_11 = FUNC_4(VAR_8, VAR_9);
 if (VAR_11) {
  unsigned int VAR_14 = FUNC_2(FUNC_1(VAR_8, VAR_11));
  if (VAR_14 == VAR_1 || VAR_14 == VAR_0 ||
      FUNC_6(VAR_8, VAR_11, VAR_5))
   VAR_12 = FUNC_0(VAR_11, 3, 0, VAR_5);
  else
   VAR_12 = FUNC_0(VAR_11, 3, 0, VAR_4);
  if (FUNC_3(VAR_8, VAR_12, VAR_6))
   VAR_13 += VAR_2;
  else
   VAR_9->ctls[VAR_6] = VAR_12;
 } else
  VAR_13 += VAR_2;
 return VAR_13;
}
