
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_ssiu {int * busif_status; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int FUNC_0 (struct rsnd_mod*) ;
 struct rsnd_ssiu* FUNC_1 (struct rsnd_mod*) ;

__attribute__((used)) static u32 *FUNC_2(struct rsnd_mod *VAR_0,
     struct rsnd_dai_stream *VAR_1,
     enum rsnd_mod_type VAR_2)
{
 struct rsnd_ssiu *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_0(VAR_0);

 return &VAR_3->busif_status[VAR_4];
}
