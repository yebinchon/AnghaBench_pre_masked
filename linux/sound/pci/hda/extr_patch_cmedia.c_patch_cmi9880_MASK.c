
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int patch_ops; struct cmi_spec* spec; } ;
struct auto_pin_cfg {int dummy; } ;
struct TYPE_2__ {struct auto_pin_cfg autocfg; } ;
struct cmi_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmi_spec* FUNC_0 (int,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,struct auto_pin_cfg*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct hda_codec*,struct auto_pin_cfg*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_3)
{
 struct cmi_spec *VAR_4;
 struct auto_pin_cfg *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_3->spec = VAR_4;
 VAR_3->patch_ops = VAR_2;
 VAR_5 = &VAR_4->gen.autocfg;
 FUNC_3(&VAR_4->gen);

 VAR_6 = FUNC_4(VAR_3, VAR_5, ((void*)0), 0);
 if (VAR_6 < 0)
  goto error;
 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6 < 0)
  goto error;

 return 0;

 error:
 FUNC_1(VAR_3);
 return VAR_6;
}
