
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {scalar_t__ codec_type; TYPE_1__ gen; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int ,int,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct hda_codec*) ;
 struct via_spec* FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_7)
{
 struct via_spec *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->gen.mixer_nid = 0x21;
 FUNC_2(VAR_7, 0x2b, 0, 3, 40);
 FUNC_2(VAR_7, 0x29, 0, 3, 40);
 if (VAR_8->codec_type == VAR_2)
  FUNC_1(VAR_7);
 FUNC_0(VAR_7);

 FUNC_5(VAR_7, ((void*)0), VAR_6, VAR_3);
 FUNC_4(VAR_7, VAR_1);

 if (VAR_8->codec_type == VAR_2)
  VAR_9 = FUNC_3(VAR_7, VAR_4);
 else
  VAR_9 = FUNC_3(VAR_7, VAR_5);
 if (VAR_9 < 0)
  goto error;


 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9 < 0)
  goto error;

 return 0;

 error:
 FUNC_6(VAR_7);
 return VAR_9;
}
