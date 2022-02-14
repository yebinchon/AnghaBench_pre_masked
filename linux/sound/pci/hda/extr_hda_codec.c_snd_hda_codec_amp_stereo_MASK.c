
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,int ,int,int,int,int,int) ;

int FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1,
        int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;

 if (FUNC_0(VAR_4 & ~0xff))
  VAR_4 &= 0xff;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
  VAR_7 |= FUNC_1(VAR_0, VAR_1, VAR_6, VAR_2,
      VAR_3, VAR_4, VAR_5);
 return VAR_7;
}
