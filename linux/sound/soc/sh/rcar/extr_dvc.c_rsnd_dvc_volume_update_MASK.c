
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dvc {int ren; int mute; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rsnd_dvc*) ;
 int FUNC_1 (struct rsnd_dvc*) ;
 int FUNC_2 (struct rsnd_dai_stream*,struct rsnd_mod*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct rsnd_dvc* FUNC_6 (struct rsnd_mod*) ;
 int FUNC_7 (struct rsnd_mod*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rsnd_dai_stream *VAR_4,
       struct rsnd_mod *VAR_5)
{
 struct rsnd_dvc *VAR_6 = FUNC_6(VAR_5);
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_3(VAR_6->mute); VAR_10++)
  VAR_7 |= (!!FUNC_4(VAR_6->mute, VAR_10)) << VAR_10;

 if (FUNC_5(VAR_6->ren)) {
  VAR_8 = FUNC_1(VAR_6);
  VAR_9 = FUNC_0(VAR_6);
 }


 FUNC_7(VAR_5, VAR_0, 0);


 FUNC_7(VAR_5, VAR_3, VAR_7);


 FUNC_7(VAR_5, VAR_2, VAR_8);
 FUNC_7(VAR_5, VAR_1, VAR_9);



 FUNC_2(VAR_4, VAR_5);


 FUNC_7(VAR_5, VAR_0, 1);
}
