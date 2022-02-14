
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_mask {int ht; int filters; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fl_flow_mask*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fl_flow_mask *VAR_0, bool VAR_1)
{

 if (VAR_1) {
  FUNC_0(!FUNC_2(&VAR_0->filters));
  FUNC_3(&VAR_0->ht);
 }
 FUNC_1(VAR_0);
}
