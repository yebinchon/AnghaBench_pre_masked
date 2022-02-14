
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hists {int entries_collapsed; int * entries_in_array; } ;


 int FUNC_0 (struct hists*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hists *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->entries_in_array[0]);
 FUNC_1(&VAR_0->entries_in_array[1]);
 FUNC_1(&VAR_0->entries_collapsed);
}
