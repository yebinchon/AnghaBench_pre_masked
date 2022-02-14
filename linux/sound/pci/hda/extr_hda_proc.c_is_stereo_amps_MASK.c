
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ,int *,int) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct hda_codec *VAR_4, hda_nid_t VAR_5,
      int VAR_6, unsigned int VAR_7, int VAR_8)
{
 hda_nid_t VAR_9;

 if (VAR_7 & VAR_1)
  return 1;



 if (VAR_8 != 1 || VAR_6 != VAR_3 ||
     FUNC_0(VAR_7) != VAR_2)
  return 0;

 if (FUNC_1(VAR_4, VAR_5, &VAR_9, 1) < 0)
  return 0;

 VAR_7 = FUNC_2(VAR_4, VAR_9, VAR_0);
 return !!(VAR_7 & VAR_1);
}
