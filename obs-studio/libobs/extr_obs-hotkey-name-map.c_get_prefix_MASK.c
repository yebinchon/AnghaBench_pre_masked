
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prefix_len; char* prefix; char* compressed_prefix; } ;
typedef TYPE_1__ obs_hotkey_name_map_edge_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline char *FUNC_0(obs_hotkey_name_map_edge_t *VAR_1)
{
 return VAR_1->prefix_len >= VAR_0 ? VAR_1->prefix
        : VAR_1->compressed_prefix;
}
