
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dvc {int volume; int ren; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct rsnd_dvc* FUNC_4 (struct rsnd_mod*) ;
 int FUNC_5 (struct rsnd_mod*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct rsnd_dai_stream *VAR_1,
           struct rsnd_mod *VAR_2)
{
 struct rsnd_dvc *VAR_3 = FUNC_4(VAR_2);
 u32 VAR_4[VAR_0];
 int VAR_5;


 if (FUNC_3(VAR_3->ren))
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_4[VAR_5] = FUNC_1(VAR_3->volume);
 else
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_4[VAR_5] = FUNC_2(VAR_3->volume, VAR_5);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_5(VAR_2, FUNC_0(VAR_5), VAR_4[VAR_5]);
}
