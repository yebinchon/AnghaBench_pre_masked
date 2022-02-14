
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ val; } ;
struct rsnd_src {TYPE_1__ sync; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (struct rsnd_mod*) ;
 struct rsnd_src* FUNC_1 (struct rsnd_mod*) ;
 int FUNC_2 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_3(struct rsnd_mod *VAR_0,
    struct rsnd_dai_stream *VAR_1,
    struct rsnd_priv *VAR_2)
{
 struct rsnd_src *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);

 FUNC_0(VAR_0);


 VAR_3->sync.val = 0;

 return 0;
}
