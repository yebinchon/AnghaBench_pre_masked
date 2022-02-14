
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,char*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1,
          const u32 *VAR_2,
          unsigned int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_1, "chipio_write_data null ptr\n");
  return -VAR_0;
 }

 while ((VAR_3-- != 0) && (VAR_4 == 0))
  VAR_4 = FUNC_0(VAR_1, *VAR_2++);

 return VAR_4;
}
