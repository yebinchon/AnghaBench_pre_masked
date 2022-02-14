
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int const hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int const,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int const,int ) ;
 int FUNC_2 (struct hda_codec*,int const,int const**) ;
 int FUNC_3 (struct hda_codec*,int const,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 int VAR_5, VAR_6;
 const hda_nid_t *VAR_7;
 bool VAR_8;

 VAR_6 = FUNC_2(VAR_3, VAR_4, &VAR_7);
 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_8)
   FUNC_3(VAR_3, VAR_4, VAR_1, VAR_5,
       0xff, VAR_0);
  else if (FUNC_1(VAR_3, VAR_7[VAR_5], VAR_2))
   FUNC_3(VAR_3, VAR_7[VAR_5], VAR_2, 0,
       0xff, VAR_0);
 }
}
