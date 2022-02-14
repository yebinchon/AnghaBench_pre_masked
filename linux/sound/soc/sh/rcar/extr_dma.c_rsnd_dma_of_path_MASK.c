
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,...) ;
 struct rsnd_mod VAR_1 ;
 int FUNC_1 (struct rsnd_dai_stream*,int) ;
 struct rsnd_mod* FUNC_2 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_3 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_4 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_5 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_6 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_7 (struct rsnd_dai_stream*) ;
 int FUNC_8 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_9 (struct rsnd_mod*) ;
 struct device* FUNC_10 (struct rsnd_priv*) ;
 scalar_t__ FUNC_11 (struct rsnd_priv*) ;

__attribute__((used)) static void FUNC_12(struct rsnd_mod *VAR_2,
        struct rsnd_dai_stream *VAR_3,
        int VAR_4,
        struct rsnd_mod **VAR_5,
        struct rsnd_mod **VAR_6)
{
 struct rsnd_mod *VAR_7;
 struct rsnd_mod *VAR_8 = FUNC_5(VAR_3);
 struct rsnd_mod *VAR_9 = FUNC_2(VAR_3);
 struct rsnd_mod *VAR_10 = FUNC_4(VAR_3);
 struct rsnd_mod *VAR_11 = FUNC_3(VAR_3);
 struct rsnd_mod *VAR_12[VAR_0];
 struct rsnd_mod *VAR_13, *VAR_14;
 struct rsnd_priv *VAR_15 = FUNC_9(VAR_2);
 struct device *VAR_16 = FUNC_10(VAR_15);
 int VAR_17, VAR_18, VAR_19;
 if (FUNC_11(VAR_15)) {
  struct rsnd_mod *VAR_20 = FUNC_7(VAR_3);


  VAR_7 = VAR_20;
  if (VAR_2 == FUNC_6(VAR_3))
   VAR_2 = VAR_20;
 } else {

  VAR_7 = FUNC_6(VAR_3);
 }

 if (!VAR_7)
  return;

 VAR_17 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
  VAR_12[VAR_18] = ((void*)0);
  VAR_17 += !!FUNC_1(VAR_3, VAR_18);
 }
 VAR_13 = (VAR_4) ? ((void*)0) : VAR_7;
 VAR_14 = (VAR_4) ? VAR_7 : ((void*)0);

 VAR_19 = 0;
 VAR_12[VAR_19++] = VAR_13;
 for (VAR_18 = 1; VAR_18 < VAR_17; VAR_18++) {
  if (VAR_8) {
   VAR_12[VAR_19++] = VAR_8;
   VAR_8 = ((void*)0);
  } else if (VAR_9) {
   VAR_12[VAR_19++] = VAR_9;
   VAR_9 = ((void*)0);
  } else if (VAR_10) {
   VAR_12[VAR_19++] = VAR_10;
   VAR_10 = ((void*)0);
  } else if (VAR_11) {
   VAR_12[VAR_19++] = VAR_11;
   VAR_11 = ((void*)0);
  }
 }
 VAR_12[VAR_19] = VAR_14;







 if ((VAR_2 == VAR_7) == (VAR_4)) {
  *VAR_5 = VAR_12[VAR_19 - 1];
  *VAR_6 = VAR_12[VAR_19];
 } else {
  *VAR_5 = VAR_12[0];
  *VAR_6 = VAR_12[1];
 }

 FUNC_0(VAR_16, "module connection (this is %s)\n", FUNC_8(VAR_2));
 for (VAR_18 = 0; VAR_18 <= VAR_19; VAR_18++) {
  FUNC_0(VAR_16, "  %s%s\n",
   FUNC_8(VAR_12[VAR_18] ? VAR_12[VAR_18] : &VAR_1),
   (VAR_12[VAR_18] == *VAR_5) ? " from" :
   (VAR_12[VAR_18] == *VAR_6) ? " to" : "");
 }
}
