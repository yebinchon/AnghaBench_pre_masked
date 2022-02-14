
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_4__ {scalar_t__ speaker_outs; } ;
struct TYPE_5__ {TYPE_1__ autocfg; } ;
struct cs_spec {scalar_t__ vendor_nid; TYPE_3__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;
 int FUNC_3 (struct hda_codec*,TYPE_1__*) ;
 int FUNC_4 (struct hda_codec*,TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_4)
{
 struct cs_spec *VAR_5 = VAR_4->spec;
 hda_nid_t VAR_6 = VAR_0;
 int VAR_7;

 FUNC_0(VAR_4, VAR_6);

 VAR_7 = FUNC_4(VAR_4, &VAR_5->gen.autocfg, ((void*)0), 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_4, &VAR_5->gen.autocfg);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(VAR_4);

 if (VAR_5->gen.autocfg.speaker_outs &&
     VAR_5->vendor_nid == VAR_1) {
  if (!FUNC_2(&VAR_5->gen, ((void*)0),
       &VAR_3))
   return -VAR_2;
 }

 return 0;
}
