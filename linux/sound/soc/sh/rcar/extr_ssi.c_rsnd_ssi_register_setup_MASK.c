
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssi {int wsr; int cr_own; int cr_clk; int cr_mode; int cr_en; } ;
struct rsnd_mod {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rsnd_ssi* FUNC_0 (struct rsnd_mod*) ;
 int FUNC_1 (struct rsnd_mod*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rsnd_mod *VAR_2)
{
 struct rsnd_ssi *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2, VAR_1, VAR_3->wsr);
 FUNC_1(VAR_2, VAR_0, VAR_3->cr_own |
     VAR_3->cr_clk |
     VAR_3->cr_mode |
     VAR_3->cr_en);
}
