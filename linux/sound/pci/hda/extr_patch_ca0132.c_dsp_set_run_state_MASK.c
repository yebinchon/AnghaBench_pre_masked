
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct hda_codec*,int ,unsigned int*) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_2, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = (VAR_8 & VAR_6) >>
        VAR_5;

 if (VAR_9 != 0) {
  VAR_8 &= ~((VAR_9 << VAR_3) &
      VAR_4);
  VAR_10 = FUNC_1(VAR_7, VAR_2,
       VAR_8);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_8 |= (VAR_9 << VAR_0) &
    VAR_1;
  VAR_10 = FUNC_1(VAR_7, VAR_2,
       VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
