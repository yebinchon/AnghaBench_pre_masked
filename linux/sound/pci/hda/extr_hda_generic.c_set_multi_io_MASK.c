
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int active; } ;
struct hda_gen_spec {TYPE_1__* multi_io; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int ctl_in; int pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_gen_spec*) ;
 struct nid_path* FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,struct nid_path*) ;
 int FUNC_3 (struct hda_codec*,int ,int) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int) ;
 int FUNC_5 (struct hda_codec*,struct nid_path*,int,int ) ;
 int FUNC_6 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_2, int VAR_3, bool VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_2->spec;
 hda_nid_t VAR_6 = VAR_5->multi_io[VAR_3].pin;
 struct nid_path *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_7->active == VAR_4)
  return 0;

 if (VAR_4) {
  FUNC_4(VAR_2, VAR_6, VAR_1, 1);
  FUNC_5(VAR_2, VAR_7, 1, FUNC_0(VAR_5));
  FUNC_3(VAR_2, VAR_6, 1);
 } else {
  FUNC_3(VAR_2, VAR_6, 0);
  FUNC_5(VAR_2, VAR_7, 0, FUNC_0(VAR_5));
  FUNC_4(VAR_2, VAR_6, VAR_5->multi_io[VAR_3].ctl_in, 1);
  FUNC_2(VAR_2, VAR_7);
 }


 FUNC_6(VAR_2);

 return 0;
}
