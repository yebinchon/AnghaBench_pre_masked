
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ,int *,int) ;
 int FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static bool FUNC_4(struct hda_codec *VAR_3, hda_nid_t VAR_4, int VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_3, VAR_4);
 hda_nid_t VAR_7;

 if (VAR_6 & VAR_0)
  return 1;
 if (VAR_5 != VAR_2 || FUNC_1(VAR_6) != VAR_1)
  return 0;
 if (FUNC_3(VAR_3, VAR_4) != 1)
  return 0;
 if (FUNC_2(VAR_3, VAR_4, &VAR_7, 1) < 0)
  return 0;
 return !!(FUNC_0(VAR_3, VAR_7) & VAR_0);
}
