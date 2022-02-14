
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_5, u8 VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9 = 0;
 u8 VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0;
      VAR_10++) {

  FUNC_1(VAR_5, VAR_1, VAR_6);


  FUNC_1(VAR_5, VAR_1,
         VAR_6 | VAR_3);
  VAR_7 = FUNC_0(VAR_5, VAR_2);


  FUNC_1(VAR_5, VAR_1,
         VAR_6 | VAR_4);
  VAR_8 = FUNC_0(VAR_5, VAR_2);

  VAR_9 += ((VAR_7 << 8) | (VAR_8 << 16));
 }

 return VAR_9 / VAR_0;
}
