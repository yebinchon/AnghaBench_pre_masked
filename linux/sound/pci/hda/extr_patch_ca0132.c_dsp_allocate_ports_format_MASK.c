
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_2 (unsigned short const) ;
 int FUNC_3 (unsigned short const) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_1,
   const unsigned short VAR_2,
   unsigned int *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 unsigned int VAR_6 = ((FUNC_3(VAR_2) >> 0) & 3) + 1;
 unsigned int VAR_7 = ((FUNC_3(VAR_2) >> 3) & 3) + 1;
 unsigned int VAR_8 = VAR_7 / VAR_6;

 if ((VAR_8 != 1) && (VAR_8 != 2) && (VAR_8 != 4)) {
  FUNC_0(VAR_1, "bad rate multiple\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2) + 1;

 VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_8, VAR_3);

 return VAR_4;
}
