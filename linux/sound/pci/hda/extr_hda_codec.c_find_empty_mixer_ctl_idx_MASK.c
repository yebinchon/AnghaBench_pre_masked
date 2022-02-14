
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char const*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_1, const char *VAR_2,
        int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = VAR_3; VAR_4 < 16; VAR_4++, VAR_5++) {
  if (!FUNC_0(VAR_1, VAR_2, 0, VAR_5))
   return VAR_5;
 }
 return -VAR_0;
}
