
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {scalar_t__ fixup_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_5,
        const struct hda_fixup *VAR_6, int VAR_7)
{
 if (VAR_7 != VAR_1)
  return;

 VAR_5->fixup_id = VAR_2;
 FUNC_1(VAR_5, ((void*)0), VAR_4, VAR_3);
 if (VAR_5->fixup_id == VAR_2)
  VAR_5->fixup_id = VAR_0;
 FUNC_0(VAR_5, VAR_7);
}
