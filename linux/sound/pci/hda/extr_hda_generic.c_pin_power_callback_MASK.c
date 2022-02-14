
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_callback {scalar_t__ nid; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0,
          struct hda_jack_callback *VAR_1,
          bool VAR_2)
{
 if (VAR_1 && VAR_1->nid)
  FUNC_1(VAR_0,
     FUNC_0(VAR_0, VAR_1->nid, VAR_2));
}
