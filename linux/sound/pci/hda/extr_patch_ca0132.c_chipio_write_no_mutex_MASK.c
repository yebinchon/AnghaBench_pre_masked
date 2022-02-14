
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,unsigned int) ;
 int FUNC_1 (struct hda_codec*,unsigned int const) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0,
  unsigned int VAR_1, const unsigned int VAR_2)
{
 int VAR_3;



 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 < 0)
  goto exit;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3 < 0)
  goto exit;

exit:
 return VAR_3;
}
