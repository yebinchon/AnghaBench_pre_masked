
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,int,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ) ;
 int* VAR_8 ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_9)
{
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_9, VAR_7, 0);
 if (VAR_10 < 0) {
  FUNC_1(VAR_9->dev, "Failed to issue reset: %d\n", VAR_10);
  return VAR_10;
 }


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); ++VAR_11)
  FUNC_2(VAR_9, VAR_8[VAR_11],
        0x100, 0x100);


 for (VAR_11 = VAR_3;
      VAR_11 <= VAR_4; ++VAR_11)
  FUNC_2(VAR_9, VAR_11, 0x40, 0x40);


 FUNC_2(VAR_9, VAR_2,
       VAR_6,
       VAR_5);


 FUNC_2(VAR_9, VAR_1,
       VAR_0, VAR_0);
 return 0;
}
