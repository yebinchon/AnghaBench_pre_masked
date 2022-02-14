
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int caps; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_8)
{
 unsigned int VAR_9, VAR_10;

 VAR_8->build_ops = &VAR_7;
 VAR_8->caps |= 0x10;

 VAR_9 = FUNC_0(VAR_8, VAR_2) & 0x8000;
 VAR_10 = FUNC_0(VAR_8, VAR_0);

 if ((VAR_9==0) && (VAR_10==0)) {
  FUNC_1(VAR_8, VAR_3, 0xabba);
  FUNC_1(VAR_8, VAR_4, 0x1000);
  FUNC_1(VAR_8, VAR_1, 0xabba);
  FUNC_1(VAR_8, VAR_2, 0x0007);
 } else if ((VAR_9==0x8000) && (VAR_10==0)) {
  FUNC_1(VAR_8, VAR_3, 0xabba);
  FUNC_1(VAR_8, VAR_4, 0x1001);
  FUNC_1(VAR_8, VAR_5, 0x0008);
 } else if ((VAR_9==0x8000) && (VAR_10==0x0080)) {

 }
 FUNC_1(VAR_8, VAR_6, 0x0000);
 return 0;
}
