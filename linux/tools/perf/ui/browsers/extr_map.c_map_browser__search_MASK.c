
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct symbol {int rb_node; } ;
struct TYPE_2__ {int top_idx; int index; int * top; } ;
struct map_browser {TYPE_1__ b; int map; } ;


 int VAR_0 ;
 struct symbol* FUNC_0 (int ,int ) ;
 struct symbol* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int *,int) ;
 int * FUNC_3 (struct symbol*) ;
 char FUNC_4 (char) ;
 int FUNC_5 (char*,char*,char*,char*,int ) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct map_browser *VAR_1)
{
 char VAR_2[512];
 struct symbol *VAR_3;
 int VAR_4 = FUNC_5("Search by name/addr",
        "Prefix with 0x to search by address",
        VAR_2, "ENTER: OK, ESC: Cancel", 0);
 if (VAR_4 != VAR_0)
  return -1;

 if (VAR_2[0] == '0' && FUNC_4(VAR_2[1]) == 'x') {
  u64 VAR_5 = FUNC_2(VAR_2, ((void*)0), 16);
  VAR_3 = FUNC_0(VAR_1->map, VAR_5);
 } else
  VAR_3 = FUNC_1(VAR_1->map, VAR_2);

 if (VAR_3 != ((void*)0)) {
  u32 *VAR_6 = FUNC_3(VAR_3);

  VAR_1->b.top = &VAR_3->rb_node;
  VAR_1->b.index = VAR_1->b.top_idx = *VAR_6;
 } else
  FUNC_6("%s not found!", VAR_2);

 return 0;
}
