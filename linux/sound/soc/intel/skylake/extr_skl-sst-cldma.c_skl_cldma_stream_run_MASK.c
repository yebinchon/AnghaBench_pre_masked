
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int FUNC_0 (int) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned char,int) ;
 unsigned char FUNC_2 (struct sst_dsp*,int ) ;
 int FUNC_3 (struct sst_dsp*,int ,unsigned char,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct sst_dsp *VAR_2, bool VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 FUNC_3(VAR_2,
   VAR_1,
   VAR_0, FUNC_0(VAR_3));

 FUNC_4(3);
 VAR_5 = 300;
 do {

  VAR_4 = FUNC_2(VAR_2, VAR_1) &
   VAR_0;
  if (VAR_3 && VAR_4)
   break;
  else if (!VAR_3 && !VAR_4)
   break;
  FUNC_4(3);
 } while (--VAR_5);

 if (VAR_5 == 0)
  FUNC_1(VAR_2->dev, "Failed to set Run bit=%d enable=%d\n", VAR_4, VAR_3);
}
