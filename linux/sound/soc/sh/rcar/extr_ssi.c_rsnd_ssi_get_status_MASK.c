
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int parent_ssi_status; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int VAR_0 ;
 int * FUNC_0 (struct rsnd_mod*,struct rsnd_dai_stream*,int) ;

__attribute__((used)) static u32 *FUNC_1(struct rsnd_mod *VAR_1,
    struct rsnd_dai_stream *VAR_2,
    enum rsnd_mod_type VAR_3)
{
 if (VAR_3 == VAR_0)
  return &VAR_2->parent_ssi_status;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
