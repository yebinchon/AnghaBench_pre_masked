
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, int VAR_1,
       hda_nid_t *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_0, VAR_2[VAR_4], VAR_3, 0);
}
