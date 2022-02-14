
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;


 int FUNC_0 (struct hda_codec*,unsigned int) ;
 int FUNC_1 (struct hda_codec*,unsigned int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_0,
  unsigned int VAR_1, const unsigned int VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_0->spec;
 int VAR_4;

 FUNC_2(&VAR_3->chipio_mutex);


 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 < 0)
  goto exit;

 VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (VAR_4 < 0)
  goto exit;

exit:
 FUNC_3(&VAR_3->chipio_mutex);
 return VAR_4;
}
