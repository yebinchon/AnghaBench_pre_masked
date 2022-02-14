
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prog_entry {int target; int when_to_branch; } ;



__attribute__((used)) static void FUNC_0(struct prog_entry *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_0[VAR_1].target;
 VAR_4 = VAR_0[VAR_3].target;
 VAR_0[VAR_3].when_to_branch = VAR_2;
 VAR_0[VAR_3].target = VAR_1;
 VAR_0[VAR_1].target = VAR_4;
}
