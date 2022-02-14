
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_7)
{
 VAR_7->build_ops = &VAR_6;
 if (FUNC_0(VAR_7, VAR_0) == 0) {

  FUNC_1(VAR_7, VAR_3, 0xabba);
  FUNC_1(VAR_7, VAR_4, 0x4000);
  FUNC_1(VAR_7, VAR_1, 0xabba);
  FUNC_1(VAR_7, VAR_2, 0x0002);
 }
 FUNC_1(VAR_7, VAR_5, 0x0000);
 return 0;
}
