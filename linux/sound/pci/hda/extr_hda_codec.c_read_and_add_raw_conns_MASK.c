
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ,int *,int) ;
 int FUNC_5 (struct hda_codec*,int ,int,int *) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 hda_nid_t VAR_5[32];
 hda_nid_t *VAR_6 = VAR_5;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, FUNC_0(VAR_5));
 if (VAR_7 == -VAR_1) {
  VAR_7 = FUNC_3(VAR_3, VAR_4);
  VAR_6 = FUNC_2(VAR_7, sizeof(hda_nid_t), VAR_2);
  if (!VAR_6)
   return -VAR_0;
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_6, VAR_7);
 }
 if (VAR_7 >= 0)
  VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_7, VAR_6);
 if (VAR_6 != VAR_5)
  FUNC_1(VAR_6);
 return VAR_7;
}
