
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,int,int ) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (struct hda_codec*,int ,int const**) ;

int FUNC_3(struct hda_codec *VAR_1, hda_nid_t VAR_2,
       hda_nid_t *VAR_3, int VAR_4)
{
 const hda_nid_t *VAR_5;
 int VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_5);

 if (VAR_6 > 0 && VAR_3) {
  if (VAR_6 > VAR_4) {
   FUNC_0(VAR_1, "Too many connections %d for NID 0x%x\n",
       VAR_6, VAR_2);
   return -VAR_0;
  }
  FUNC_1(VAR_3, VAR_5, VAR_6 * sizeof(hda_nid_t));
 }

 return VAR_6;
}
