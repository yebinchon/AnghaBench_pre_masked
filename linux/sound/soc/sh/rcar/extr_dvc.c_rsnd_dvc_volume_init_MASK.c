
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dvc {int ren; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rsnd_dvc*) ;
 int FUNC_1 (struct rsnd_dvc*) ;
 int FUNC_2 (struct rsnd_dai_stream*,struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct rsnd_dvc* FUNC_5 (struct rsnd_mod*) ;
 int FUNC_6 (struct rsnd_mod*,int ,int) ;
 int FUNC_7 (struct rsnd_dai_stream*) ;

__attribute__((used)) static void FUNC_8(struct rsnd_dai_stream *VAR_6,
     struct rsnd_mod *VAR_7)
{
 struct rsnd_dvc *VAR_8 = FUNC_5(VAR_7);
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;

 VAR_9 = FUNC_3(VAR_7, VAR_6) |
  FUNC_7(VAR_6);


 VAR_10 |= 0x101;


 if (FUNC_4(VAR_8->ren)) {
  VAR_10 |= 0x10;







  VAR_11 = 0xff;
  VAR_12 = FUNC_1(VAR_8);
  VAR_13 = FUNC_0(VAR_8);
 }


 FUNC_6(VAR_7, VAR_2, 1);


 FUNC_6(VAR_7, VAR_0, VAR_9);
 FUNC_6(VAR_7, VAR_1, VAR_10);


 FUNC_6(VAR_7, VAR_3, VAR_11);
 FUNC_6(VAR_7, VAR_5, VAR_12);
 FUNC_6(VAR_7, VAR_4, VAR_13);


 FUNC_2(VAR_6, VAR_7);


 FUNC_6(VAR_7, VAR_2, 0);
}
