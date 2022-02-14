
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* panels; } ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;


 char* FUNC_0 (int ,char const*,int ) ;

char *FUNC_1(RCore *VAR_0, const char *VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 if (!VAR_2->db) {
  return ((void*)0);
 }
 char *VAR_3 = FUNC_0 (VAR_2->db, VAR_1, 0);
 if (VAR_3) {
  return VAR_3;
 }
 return ((void*)0);
}
