
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct snd_intelhad {int dev; scalar_t__ dp_output; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct snd_intelhad*,int ,int) ;

__attribute__((used)) static void FUNC_5(u32 VAR_1, u32 VAR_2, u32 VAR_3,
    u32 VAR_4, struct snd_intelhad *VAR_5)
{
 u32 VAR_6;
 u64 VAR_7, VAR_8;

 if (VAR_5->dp_output) {

  VAR_6 = FUNC_3(VAR_1, VAR_3);
 } else {

  VAR_7 = (u64)VAR_2 * VAR_4*1000;
  VAR_8 = 128 * VAR_1;
  VAR_6 = FUNC_2(VAR_7, VAR_8);
 }
 FUNC_1(VAR_5->dev, "TMDS value=%d, N value=%d, CTS Value=%d\n",
   VAR_2, VAR_4, VAR_6);
 FUNC_4(VAR_5, VAR_0, (FUNC_0(24) | VAR_6));
}
