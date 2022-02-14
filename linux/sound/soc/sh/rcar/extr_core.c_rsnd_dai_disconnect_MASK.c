
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int ** mod; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;



__attribute__((used)) static void FUNC_0(struct rsnd_mod *VAR_0,
    struct rsnd_dai_stream *VAR_1,
    enum rsnd_mod_type VAR_2)
{
 VAR_1->mod[VAR_2] = ((void*)0);
}
