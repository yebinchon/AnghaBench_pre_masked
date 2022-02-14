
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prog_entry {struct prog_entry* pred; } ;
struct event_filter {int prog; } ;


 int FUNC_0 (struct prog_entry*) ;
 struct prog_entry* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct event_filter *VAR_0)
{
 struct prog_entry *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0->prog);
 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_1[VAR_2].pred; VAR_2++)
  FUNC_0(VAR_1[VAR_2].pred);
 FUNC_0(VAR_1);
}
