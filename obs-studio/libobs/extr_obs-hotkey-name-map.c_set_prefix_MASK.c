
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ prefix_len; int prefix; int compressed_prefix; scalar_t__ compressed_len; } ;
typedef TYPE_1__ obs_hotkey_name_map_edge_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;

__attribute__((used)) static void FUNC_3(obs_hotkey_name_map_edge_t *VAR_1, const char *VAR_2,
         size_t VAR_3)
{
 FUNC_0(VAR_1->prefix_len == 0);

 VAR_1->compressed_len = (uint8_t)VAR_3;
 if (VAR_3 < VAR_0)
  FUNC_2(VAR_1->compressed_prefix, VAR_2, VAR_3);
 else
  VAR_1->prefix = FUNC_1(VAR_2, VAR_3);
}
