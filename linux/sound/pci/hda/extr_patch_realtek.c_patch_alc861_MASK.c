
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int beep_nid; int no_analog; } ;
struct alc_spec {TYPE_1__ gen; int power_hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int VAR_5 ;
 int FUNC_3 (struct hda_codec*) ;
 scalar_t__ FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct alc_spec*,int,int ,int ) ;
 int FUNC_6 (struct hda_codec*,int ) ;
 int FUNC_7 (struct hda_codec*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_6)
{
 struct alc_spec *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, 0x15);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_6->spec;
 if (FUNC_4(VAR_6))
  VAR_7->gen.beep_nid = 0x23;





 FUNC_3(VAR_6);

 FUNC_7(VAR_6, ((void*)0), VAR_3, VAR_4);
 FUNC_6(VAR_6, VAR_0);


 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 < 0)
  goto error;

 if (!VAR_7->gen.no_analog) {
  VAR_8 = FUNC_5(VAR_7, 0x23, 0, VAR_2);
  if (VAR_8 < 0)
   goto error;
 }

 FUNC_6(VAR_6, VAR_1);

 return 0;

 error:
 FUNC_2(VAR_6);
 return VAR_8;
}
