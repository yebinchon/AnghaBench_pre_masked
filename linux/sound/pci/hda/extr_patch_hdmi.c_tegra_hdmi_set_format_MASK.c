
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10;


 VAR_10 = FUNC_0(VAR_8, VAR_0, 0,
       VAR_1, 0);
 VAR_10 = (VAR_10 >> 24) & 0xff;


 FUNC_1(VAR_8, VAR_0, 0,
       VAR_4,
       (VAR_9 >> 0) & 0xff);
 FUNC_1(VAR_8, VAR_0, 0,
       VAR_5,
       (VAR_9 >> 8) & 0xff);


 FUNC_1(VAR_8, VAR_0, 0,
       VAR_6, 0);





 if (VAR_9 == 0)
  VAR_10 &= ~VAR_3;
 else
  VAR_10 |= VAR_3;






 VAR_10 ^= VAR_2;

 FUNC_1(VAR_8, VAR_0, 0,
       VAR_7, VAR_10);
}
