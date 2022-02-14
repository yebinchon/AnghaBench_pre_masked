
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ FUNC_0 (struct hda_codec*,scalar_t__ const) ;
 int FUNC_1 (struct hda_codec*,scalar_t__ const,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0, int VAR_1,
    const hda_nid_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1 && VAR_2[VAR_3]; VAR_3++)
  if (FUNC_0(VAR_0, VAR_2[VAR_3]))
   FUNC_1(VAR_0, VAR_2[VAR_3], -1);
}
