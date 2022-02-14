
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int power_save_node; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int,int) ;

__attribute__((used)) static hda_nid_t FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1,
        int VAR_2)
{
 bool VAR_3;

 if (!VAR_0->power_save_node)
  return 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 >= 0 && VAR_3 != VAR_2)
  return 0;
 return FUNC_1(VAR_0, VAR_1, VAR_3, -1);
}
