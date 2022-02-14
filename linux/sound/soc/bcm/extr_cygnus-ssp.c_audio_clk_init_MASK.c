
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cygnus_audio {int * audio_clk; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1,
      struct cygnus_audio *VAR_2)
{
 int VAR_3;
 char VAR_4[VAR_0];

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->audio_clk); VAR_3++) {
  FUNC_4(VAR_4, VAR_0, "ch%d_audio", VAR_3);

  VAR_2->audio_clk[VAR_3] = FUNC_3(&VAR_1->dev, VAR_4);
  if (FUNC_1(VAR_2->audio_clk[VAR_3]))
   return FUNC_2(VAR_2->audio_clk[VAR_3]);
 }

 return 0;
}
