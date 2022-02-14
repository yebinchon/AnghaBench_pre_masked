
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (struct hda_codec*) ;
 struct via_spec* FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_5)
{
 struct via_spec *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->gen.mixer_nid = 0x16;
 FUNC_0(VAR_5, 0x1a, 0, 3, 40);
 FUNC_0(VAR_5, 0x1e, 0, 3, 40);

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (VAR_7 < 0)
  goto error;


 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 < 0)
  goto error;

 if (!FUNC_2(&VAR_6->gen, ((void*)0), &VAR_4) ||
     !FUNC_2(&VAR_6->gen, ((void*)0), &VAR_3) ||
     !FUNC_2(&VAR_6->gen, ((void*)0), &VAR_2)) {
  VAR_7 = -VAR_0;
  goto error;
 }

 return 0;

 error:
 FUNC_3(VAR_5);
 return VAR_7;
}
