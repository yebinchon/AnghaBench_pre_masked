
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct hda_codec*,int ) ;
 unsigned int FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static bool FUNC_4(struct hda_codec *VAR_2,
          unsigned int VAR_3, hda_nid_t VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (FUNC_0(VAR_5) != VAR_0)
  return 0;
 if (VAR_3 && FUNC_1(VAR_5) != VAR_3)
  return 0;
 VAR_6 = FUNC_3(VAR_2, VAR_4);
 if (!(VAR_6 & VAR_1))
  return 0;
 return 1;
}
