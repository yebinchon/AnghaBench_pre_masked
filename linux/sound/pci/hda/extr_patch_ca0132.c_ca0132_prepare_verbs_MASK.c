
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_verb {int dummy; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {TYPE_1__* spec_init_verbs; int desktop_init_verbs; int chip_init_verbs; } ;
struct TYPE_2__ {int nid; int param; int verb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ca0132_spec*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_5)
{


 struct ca0132_spec *VAR_6 = VAR_5->spec;

 VAR_6->chip_init_verbs = VAR_3;




 if (FUNC_0(VAR_6))
  VAR_6->desktop_init_verbs = VAR_4;
 VAR_6->spec_init_verbs = FUNC_1(2,
     sizeof(struct hda_verb),
     VAR_1);
 if (!VAR_6->spec_init_verbs)
  return -VAR_0;


 VAR_6->spec_init_verbs[0].nid = 0x0b;
 VAR_6->spec_init_verbs[0].param = 0x78D;
 VAR_6->spec_init_verbs[0].verb = 0x00;
 return 0;
}
