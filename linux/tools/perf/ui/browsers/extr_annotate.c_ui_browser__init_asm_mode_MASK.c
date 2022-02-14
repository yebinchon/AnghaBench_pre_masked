
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int nr_entries; } ;
struct annotation {int nr_asm_entries; } ;


 struct annotation* FUNC_0 (struct ui_browser*) ;
 int FUNC_1 (struct ui_browser*) ;

__attribute__((used)) static void FUNC_2(struct ui_browser *VAR_0)
{
 struct annotation *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 VAR_0->nr_entries = VAR_1->nr_asm_entries;
}
