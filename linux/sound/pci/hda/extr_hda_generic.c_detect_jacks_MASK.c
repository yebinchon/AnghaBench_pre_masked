
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_2, int VAR_3, hda_nid_t *VAR_4)
{
 int VAR_5;
 bool VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  hda_nid_t VAR_7 = VAR_4[VAR_5];
  if (!VAR_7)
   break;

  if (FUNC_0(VAR_2, VAR_7) & VAR_0)
   continue;
  if (FUNC_1(VAR_2, VAR_7) == VAR_1)
   VAR_6 = 1;
 }
 return VAR_6;
}
