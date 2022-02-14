
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_mod {int dummy; } ;
struct rsnd_mix {int rdw; int rup; int ren; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rsnd_dai_stream*,struct rsnd_mod*) ;
 struct rsnd_mix* FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_mod*,int ,int) ;
 int FUNC_4 (struct rsnd_dai_stream*) ;

__attribute__((used)) static void FUNC_5(struct rsnd_dai_stream *VAR_4,
     struct rsnd_mod *VAR_5)
{
 struct rsnd_mix *VAR_6 = FUNC_2(VAR_5);

 FUNC_3(VAR_5, VAR_1, 1);


 FUNC_3(VAR_5, VAR_0, FUNC_4(VAR_4));


 FUNC_3(VAR_5, VAR_2, FUNC_0(VAR_6->ren));
 FUNC_3(VAR_5, VAR_3, FUNC_0(VAR_6->rup) << 8 |
           FUNC_0(VAR_6->rdw));


 FUNC_1(VAR_4, VAR_5);

 FUNC_3(VAR_5, VAR_1, 0);
}
