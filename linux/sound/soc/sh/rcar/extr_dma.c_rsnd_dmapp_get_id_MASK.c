
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 struct rsnd_mod* FUNC_2 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_3 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_4 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_5 (struct rsnd_dai_stream*) ;
 int FUNC_6 (struct rsnd_dai_stream*) ;
 int FUNC_7 (struct rsnd_mod*) ;
 int FUNC_8 (struct rsnd_mod*) ;
 int FUNC_9 (struct rsnd_mod*) ;
 struct device* FUNC_10 (int ) ;

__attribute__((used)) static u32 FUNC_11(struct rsnd_dai_stream *VAR_3,
        struct rsnd_mod *VAR_4)
{
 struct rsnd_mod *VAR_5 = FUNC_4(VAR_3);
 struct rsnd_mod *VAR_6 = FUNC_5(VAR_3);
 struct rsnd_mod *VAR_7 = FUNC_3(VAR_3);
 struct rsnd_mod *VAR_8 = FUNC_2(VAR_3);
 const u8 *VAR_9 = ((void*)0);
 int VAR_10 = 255;
 int VAR_11 = 0;

 if ((VAR_4 == VAR_5) ||
     (VAR_4 == VAR_6)) {
  int VAR_12 = FUNC_8(VAR_6);

  VAR_9 = VAR_2;
  VAR_11 = FUNC_0(VAR_2);
  VAR_10 = (FUNC_7(VAR_4) * 8) + VAR_12;
 } else if (VAR_4 == VAR_7) {
  VAR_9 = VAR_1;
  VAR_11 = FUNC_0(VAR_1);
  VAR_10 = FUNC_7(VAR_4);
 } else if (VAR_4 == VAR_8) {
  VAR_9 = VAR_0;
  VAR_11 = FUNC_0(VAR_0);
  VAR_10 = FUNC_7(VAR_4);
 }

 if ((!VAR_9) || (VAR_11 <= VAR_10)) {
  struct device *VAR_13 = FUNC_10(FUNC_6(VAR_3));

  FUNC_1(VAR_13, "unknown connection (%s)\n", FUNC_9(VAR_4));


  return 0x00;
 }

 return VAR_9[VAR_10];
}
