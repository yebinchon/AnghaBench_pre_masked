
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_callback {int nid; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,int ,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0,
     struct hda_jack_callback *VAR_1)
{

 if (FUNC_1(VAR_0))
  return;


 FUNC_0(VAR_0, VAR_1->nid, 0);
}
