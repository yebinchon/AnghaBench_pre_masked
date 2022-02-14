
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;
 return 0;
}
