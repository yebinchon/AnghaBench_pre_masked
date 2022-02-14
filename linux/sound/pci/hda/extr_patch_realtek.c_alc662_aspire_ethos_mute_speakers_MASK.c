
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_callback {int dummy; } ;
struct hda_codec {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2,
     struct hda_jack_callback *VAR_3)
{






 if (FUNC_0(VAR_2, 0x1b) == VAR_0) {
  FUNC_1(VAR_2, 0x15, 0);
  FUNC_1(VAR_2, 0x18, 0);
 } else {
  FUNC_1(VAR_2, 0x15, VAR_1);
  FUNC_1(VAR_2, 0x18, VAR_1);
 }
}
