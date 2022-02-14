
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {struct map_symbol* priv; } ;
struct map_symbol {int sym; } ;
struct annotation {int dummy; } ;


 struct annotation* FUNC_0 (int ) ;

__attribute__((used)) static inline struct annotation *FUNC_1(struct ui_browser *VAR_0)
{
 struct map_symbol *VAR_1 = VAR_0->priv;
 return FUNC_0(VAR_1->sym);
}
