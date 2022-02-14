
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {scalar_t__ fixup_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_4,
       const struct hda_fixup *VAR_5,
       int VAR_6)
{
 if (VAR_6 != VAR_0)
  return;

 VAR_4->fixup_id = VAR_1;
 FUNC_1(VAR_4, ((void*)0), VAR_3,
      VAR_2);
 if (VAR_4->fixup_id != VAR_1)
  FUNC_0(VAR_4, VAR_6);
}
