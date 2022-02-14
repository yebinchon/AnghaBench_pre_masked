
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {size_t prefix_len; } ;
typedef TYPE_1__ obs_hotkey_name_map_edge_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_3(obs_hotkey_name_map_edge_t *VAR_1, size_t VAR_2)
{
 bool VAR_3 = VAR_1->prefix_len < VAR_0;
 bool VAR_4 = VAR_2 < VAR_0;

 char *VAR_5 = FUNC_1(VAR_1);

 VAR_1->prefix_len = (uint8_t)VAR_2;
 if (FUNC_1(VAR_1) != VAR_5)
  FUNC_2(FUNC_1(VAR_1), VAR_5, VAR_2);
 else
  VAR_5[VAR_2] = 0;

 if (!VAR_3 && VAR_4)
  FUNC_0(VAR_5);
}
