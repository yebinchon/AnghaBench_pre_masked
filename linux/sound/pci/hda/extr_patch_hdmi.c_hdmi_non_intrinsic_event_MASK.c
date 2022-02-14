
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_5, unsigned int VAR_6)
{
 int VAR_7 = VAR_6 >> VAR_4;
 int VAR_8 = (VAR_6 & VAR_2) >> VAR_3;
 int VAR_9 = !!(VAR_6 & VAR_1);
 int VAR_10 = !!(VAR_6 & VAR_0);

 FUNC_0(VAR_5,
  "HDMI CP event: CODEC=%d TAG=%d SUBTAG=0x%x CP_STATE=%d CP_READY=%d\n",
  VAR_5->addr,
  VAR_7,
  VAR_8,
  VAR_9,
  VAR_10);


 if (VAR_9)
  ;
 if (VAR_10)
  ;
}
